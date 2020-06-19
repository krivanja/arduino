/*
Analog Read Serial
*/

// Anolog pin A0 has a potentiometer attached to it. Give it a name.
int sensorPin = A0;

void setup() {
// initialize serial communication at 9600 bits per second.
Serial.begin(9600);
}

void loop() {
// read the input on analog pin 0.
int sensorValue = analogRead(sensorPin);
// print out the value you read.
Serial.println(sensorValue);
// delay in between reads for stability.
delay(1);     
}
