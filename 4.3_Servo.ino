#include <Servo.h>

Servo myservo;


void setup() {
  myservo.attach(9);
    
}

void loop() {
  myservo.write(12);
  delay(1000);
  myservo.write(172);
  delay(1000);
  myservo.write(38);
  delay(1000);
    
}
