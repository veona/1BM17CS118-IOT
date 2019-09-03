int analogpin=0;
void setup()
{
  pinMode(analogpin,INPUT);
  Serial.begin(9600);
}
void loop()
{
  float sensedvalue=analogRead(analogpin);
  float mvalue=float(sensedvalue/1024)*5000;
  float temp=float(mvalue/10);
  Serial.println("temp=");
  Serial.print(temp);
  delay(1000);
}
