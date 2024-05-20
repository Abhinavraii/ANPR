#include <Servo.h>

Servo myservo;
int servoPin = 9;

void setup() {
  Serial.begin(9600);
  myservo.attach(servoPin);
  myservo.write(0);  // Start at 0 degrees
}

void loop() {
  if (Serial.available() > 0) {
    char command = Serial.read();
    if (command == '1') {
      myservo.write(90);  // Rotate to 90 degrees
    } else if (command == '0') {
      myservo.write(0);   // Rotate back to 0 degrees
    }
  }
}
