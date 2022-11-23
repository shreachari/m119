// What: example code for a peripheral
// Where: https://github.com/ucla-hci/m119/blob/main/m2b_peripheral/m2b_peripheral.ino
// Why: Provided by professor for use on project

#include <ArduinoBLE.h>
#include <Arduino_LSM6DS3.h>

#define BLE_UUID_ACCELEROMETER_SERVICE "1101"
#define BLE_UUID_GYROSCOPE_X "2101"
#define BLE_UUID_GYROSCOPE_Y "2102"
#define BLE_UUID_GYROSCOPE_Z "2103"

#define BLE_DEVICE_NAME "Elfo"
#define BLE_LOCAL_NAME "Elfo"

BLEService accelerometerService(BLE_UUID_ACCELEROMETER_SERVICE);

BLEFloatCharacteristic gyroscopeCharacteristicX(BLE_UUID_GYROSCOPE_X, BLERead | BLENotify);
BLEFloatCharacteristic gyroscopeCharacteristicY(BLE_UUID_GYROSCOPE_Y, BLERead | BLENotify);
BLEFloatCharacteristic gyroscopeCharacteristicZ(BLE_UUID_GYROSCOPE_Z, BLERead | BLENotify);

float x, y, z;

void setup() {
  Serial.begin(9600);
  while (!Serial)
    ;

  // initialize IMU
  if (!IMU.begin()) {
    Serial.println("Failed to initialize IMU!");
    while (1)
      ;
  }

  Serial.print("Gyroscope sample rate = ");
  Serial.print(IMU.gyroscopeSampleRate());
  Serial.println("Hz");

  // initialize BLE
  if (!BLE.begin()) {
    Serial.println("Starting Bluetooth® Low Energy module failed!");
    while (1)
      ;
  }

  // set advertised local name and service UUID
  BLE.setLocalName("Nano 33 IoT");
  BLE.setAdvertisedService(accelerometerService);

  // add characteristics and service
  accelerometerService.addCharacteristic(gyroscopeCharacteristicX);
  accelerometerService.addCharacteristic(gyroscopeCharacteristicY);
  accelerometerService.addCharacteristic(gyroscopeCharacteristicZ);
  BLE.addService(accelerometerService);

  // set the initial value for the characteristic:
  gyroscopeCharacteristicX.writeValue(0.0);
  gyroscopeCharacteristicY.writeValue(0.0);
  gyroscopeCharacteristicZ.writeValue(0.0);

  // start advertising
  BLE.advertise();

  Serial.println("BLE Gyroscope Peripheral");
}

void loop() {
  BLEDevice central = BLE.central();

  // obtain and write accelerometer data

  // if a central is connected to peripheral:
  if (central) {
    Serial.print("Connected to central: ");
    // print the central's MAC address:
    Serial.println(central.address());

    // while the central is still connected to peripheral:
    while (central.connected()) {
      // read sensors:
      IMU.readGyroscope(x, y, z);

      // write sensor values to service characteristics:
    gyroscopeCharacteristicX.writeValue(x);
    gyroscopeCharacteristicY.writeValue(y);
    gyroscopeCharacteristicZ.writeValue(z);
    }

    // when the central disconnects, print it out:
    Serial.print(F("Disconnected from central: "));
    Serial.println(central.address());
  }
}