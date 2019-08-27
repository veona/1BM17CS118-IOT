int pin=2;
int ledpin=13;
void setup() {
  // put your setup code here, to run once:
  pinMode(pin,INPUT);
  pinMode(ledpin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int sr=digitalRead(pin);
digitalWrite(ledpin,sr);
}
