#include <Servo.h>

Servo myServo;

void setup() {
  // Attach the servo to pin 9
  myServo.attach(9);
}

void loop() {
  // Sweep the servo from 0 to 180 degrees
  for (int angle = 0; angle <= 180; angle++) {
    myServo.write(angle);
    delay(500);
  }

  // Sweep the servo from 180 to 0 degrees
  for (int angle = 180; angle >= 0; angle--) {
    myServo.write(angle);
    delay(500);
  }
}
