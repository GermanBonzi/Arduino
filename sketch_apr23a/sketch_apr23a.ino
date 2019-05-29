
#include <Servo.h>
int num;

Servo servo;

void setup() {
  Serial.begin(9600);
  servo.attach(5);

}

void loop() {

  num=random(150);
  servo.write(num);
  Serial.println(num);
  delay(1000);
 
}
