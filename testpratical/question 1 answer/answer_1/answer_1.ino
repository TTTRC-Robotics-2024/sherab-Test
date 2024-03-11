const int ledPin = 7; // the pin that the LED is attached to

void setup() {
  pinMode(ledPin, OUTPUT); // initialize the digital pin as an output
}

void loop() {
  digitalWrite(ledPin, HIGH); // turn the LED on (HIGH is the voltage level)
  delay(2000); // wait for 2 seconds
  digitalWrite(ledPin, LOW); // turn the LED off by making the voltage LOW
  delay(2000); // wait for 2 seconds
}
