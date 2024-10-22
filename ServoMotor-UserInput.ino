#include<Servo.h>
Servo myservo;
int val, ServoPin=9, angle=0;
void setup(){
  Serial.begin(9600);
  myservo.attach(ServoPin);
  Serial.println("Enter Inputs a/b/c/d/e :");
}
void loop(){
  if(Serial.available())
  {
    int inByte = Serial.read();
      switch (inByte) 
      {
        case 'a':
          angle = 0;
          break;
        case 'b':
          angle = 60;
          break;
        case 'c':
          angle = 90;
          break;
        case 'd':
          angle = 120;
          break;
        case 'e':
          angle = 180;
          break;
      }
      Serial.println(angle);
  }
myservo.write(angle);
delay(100);
}