/*
M1
*/

int shortDelay = 1000;
int longDelay = 3000;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  // H 
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(shortDelay);                       
  digitalWrite(LED_BUILTIN, LOW);    
  delay(shortDelay); 
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(shortDelay);                       
  digitalWrite(LED_BUILTIN, LOW);    
  delay(shortDelay); 
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(shortDelay);                       
  digitalWrite(LED_BUILTIN, LOW);
  delay(shortDelay);    
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(shortDelay);                       
  digitalWrite(LED_BUILTIN, LOW);

  //letter gap
  delay(longDelay); 

  // E

  digitalWrite(LED_BUILTIN, HIGH);   
  delay(shortDelay);                       
  digitalWrite(LED_BUILTIN, LOW);

  //letter gap
  delay(longDelay); 
  
  // L
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(shortDelay);                       
  digitalWrite(LED_BUILTIN, LOW);    
  delay(shortDelay); 
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(longDelay);                       
  digitalWrite(LED_BUILTIN, LOW);    
  delay(shortDelay); 
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(shortDelay);                       
  digitalWrite(LED_BUILTIN, LOW);
  delay(shortDelay);    
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(shortDelay);                       
  digitalWrite(LED_BUILTIN, LOW);

  //letter gap
  delay(longDelay); 

  // L
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(shortDelay);                       
  digitalWrite(LED_BUILTIN, LOW);    
  delay(shortDelay); 
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(longDelay);                       
  digitalWrite(LED_BUILTIN, LOW);    
  delay(shortDelay); 
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(shortDelay);                       
  digitalWrite(LED_BUILTIN, LOW);
  delay(shortDelay);    
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(shortDelay);                       
  digitalWrite(LED_BUILTIN, LOW);
  
  //letter gap
  delay(longDelay); 
  
  // O
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(longDelay);                       
  digitalWrite(LED_BUILTIN, LOW);    
  delay(shortDelay); 
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(longDelay);                       
  digitalWrite(LED_BUILTIN, LOW);    
  delay(shortDelay); 
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(longDelay);                       
  digitalWrite(LED_BUILTIN, LOW);    

  //letter gap
  delay(longDelay); 
  
  // SPACE
  delay(7000);
  
  // I
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(shortDelay);                       
  digitalWrite(LED_BUILTIN, LOW);    
  delay(shortDelay); 
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(shortDelay);                       
  digitalWrite(LED_BUILTIN, LOW);

  //letter gap
  delay(longDelay); 
  
  // M
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(longDelay);                       
  digitalWrite(LED_BUILTIN, LOW);    
  delay(shortDelay); 
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(longDelay);                       
  digitalWrite(LED_BUILTIN, LOW);

  //letter gap
  delay(longDelay); 
  
  // U 
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(shortDelay);                       
  digitalWrite(LED_BUILTIN, LOW);    
  delay(shortDelay); 
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(shortDelay);                       
  digitalWrite(LED_BUILTIN, LOW);
  delay(shortDelay); 
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(longDelay);                       
  digitalWrite(LED_BUILTIN, LOW);

  //end
  delay(7000);                     // wait for a second
}
