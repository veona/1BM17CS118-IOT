int led=8;
void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()>0)
{
  char data=Serial.read();
  if(data=='A')
  digitalWrite(led,HIGH);
  else if(data=='B')
  digitalWrite(led,LOW);
  
}
delay(1000);
}
