// set the pin numbers
const int greenLEDpin = 3;
const int yellowLEDpin = 4;
const int redLEDpin = 5;


void setup() {
// set the LED pins as outputs
pinMode(greenLEDpin, OUTPUT);
pinMode(yellowLEDpin, OUTPUT);
pinMode(redLEDpin, OUTPUT);
}

void loop() {
// put your main code here, to run repeatedly:
digitalWrite(greenLEDpin, HIGH); // Turn the green LED (on pin 3) ON
digitalWrite(yellowLEDpin, HIGH); // Turn the yellow LED (on pin 4) ON
digitalWrite(redLEDpin, HIGH); // Turn the red LED (on pin 5) ON
}
