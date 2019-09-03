int ledpin=13;
int analogpin=2;
int buzzer=8;
int sensorvalue=0;
void setup()
{
  pinMode(ledpin,INPUT);
  pinMode(analogpin,OUTPUT);
  pinMode(buzzer,OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  int sensorvalue=analogRead(analogpin);
  Serial.println("sensed value");
  Serial.print(sensorvalue);
  Serial.println( );
  if(sensorvalue<500)
  {
    digitalWrite(ledpin,HIGH);
    digitalWrite(buzzer,LOW);
  }
  else
  {
    digitalWrite(ledpin,LOW);
    digitalWrite(buzzer,LOW);
  }
    
  delay(1000);
}
  
