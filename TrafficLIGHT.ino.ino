int rpin =13;
int ypin=12;
int gpin=9;

void setup() {
  // put your setup code here, to run once:
pinMode(rpin, OUTPUT);
pinMode(ypin, OUTPUT);
pinMode(gpin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(rpin, HIGH);
digitalWrite(ypin, LOW);
digitalWrite(gpin, LOW);
 delay(2000);
digitalWrite(rpin, LOW);
digitalWrite(ypin, HIGH);
digitalWrite(gpin, LOW);
 delay(2000);
digitalWrite(rpin, LOW);
digitalWrite(ypin, LOW);
digitalWrite(gpin, HIGH);
 delay(2000);
}
