#include <Servo.h>

#define pot A0


Servo servo;
int val;

void setup() {
 Serial.begin(9600);
 servo.attach(5);
 
 
 
}

void loop() {

  val=analogRead(pot);
  val=map(val,0,1023,0,170);
  Serial.println(val);
  delay(2000);

  servo.write(val);


}
