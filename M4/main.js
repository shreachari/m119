// What: Pong code to implement event listeners
// Where: From https://codepen.io/pwdonald/pen/YPMzNx
// Why: Implements Pong functionality, M4 spec allows us to reuse an existing Pong game codebase 
// with proper acknowledgement to the original authors’ credits.

var canvas = document.getElementById('gamescreen');
var engine = new PongEngine(canvas, 60);

window.addEventListener('keydown', function (e) {
    if (e.keyCode === 27) {
        engine.endGame();
    } else if (e.keyCode === 13 && engine.STOPPED) {
        engine.startGame();
    }
    else if (e.keyCode === 32 && !engine.STOPPED) {
        const SERVERADDRESS = "http://127.0.0.1:3000";
        // use XML HTTP request to grab data from the server (central)
        let xmlhttp = new XMLHttpRequest();
        xmlhttp.onreadystatechange = function () {
            if (xmlhttp.readyState == 4 && xmlhttp.status == 200) {
                let responseText = xmlhttp.responseText;
                let sensorValue = parseFloat(JSON.parse(responseText).sensorValue);
                console.log(responseText);
                engine.bluetoothEvent(sensorValue);
            }
        };
        // periodically grab data
        let getData = () => {
            xmlhttp.open("POST", SERVERADDRESS, true);
            xmlhttp.setRequestHeader("Content-type", "application/json");
            xmlhttp.send("");
            setTimeout(() => {
                getData();
            }, 0.5);
        };
        getData();
    }
});

