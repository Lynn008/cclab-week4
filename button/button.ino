int led = 12;
int buttonPin = 3;
int buttonState = 0;
int ledState = HIGH;          
int lastButtonState = LOW;   

unsigned long lastDebounceTime = 0;  
unsigned long debounceDelay = 50; 
void setup() {
  // put your setup code here, to run once:
pinMode(led, OUTPUT);
pinMode(buttonPin, INPUT);
}

void loop() {
int reading = digitalRead(buttonPin);
  if (reading != lastButtonState) {
    lastDebounceTime = millis();
  }

  if ((millis() - lastDebounceTime) > debounceDelay) {
    
      buttonState = reading;

      if(buttonState == HIGH){
        digitalWrite(led, LOW);
        delay(1000);
      }else {
        digitalWrite(led, HIGH);
        delay(1000);
      }
    
  }
  lastButtonState = reading;
}
