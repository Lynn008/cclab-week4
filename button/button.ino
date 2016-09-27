int led = 12;
int buttonPin = 3;
int buttonState = 0;

void setup() {
  // put your setup code here, to run once:
pinMode(led, OUTPUT);
pinMode(buttonPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
buttonState = digitalRead(buttonPin);
if(buttonState == HIGH){
  digitalWrite(led, LOW);
  delay(1000);
}else {
  digitalWrite(led, HIGH);
  delay(1000);
}
}
