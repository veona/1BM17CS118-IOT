int led=13;
int analogpin=A0;
void setup() {
  // put your setup code here, to run once:
pinMode(led,INPUT);
pinMode(analogpin,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int sv=analogRead(analogpin);
Serial.println("sensed value;");
Serial.print(sv);
delay(100);
int tv=4;
if(sv<tv)
digitalWrite(led,HIGH);
else
digitalWrite(led,LOW);
delay(1000);
}
