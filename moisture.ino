#include<Servo.h>
Servo anyservo;
int pos=0;
int sensorin=5;
int sensorvalue=0;
void setup()
{
  anyservo.attach(9);
  Serial.begin(9600);
}
void loop()
{
  sensorvalue=analogRead(sensorin);
  Serial.println("sensed value");
  Serial.print(sensorvalue);
  if(sensorvalue>500)
  {
    for(pos=0;pos<100;pos+=1)
    {
      anyservo.write(pos);
      delay(15);
    }
    for(pos=100;pos>=0;pos-=1)
     {
      anyservo.write(pos);
      delay(15);
    }
  }
  delay(1000);
}
