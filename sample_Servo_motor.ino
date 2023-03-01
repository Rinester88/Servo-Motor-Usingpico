#include <Servo.h>

Servo myservo;  // create servo object to control a servo motor

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  myservo.write(180);  // set servo to mid-point position (90 degrees)
  delay(1000);  // wait for 1 second
  myservo.write(0);  // set servo to 0 degree position
  delay(1000);  // wait for 1 second
  // wait for 1 second
}
