const int ledPin = 12;
const int ldrPin = A0;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int ldrStatus = analogRead(ldrPin);
  if(ldrStatus < 10) {
    digitalWrite(ledPin, HIGH);
    Serial.println("GO AWAY");
  }
  else {
    digitalWrite(ledPin, LOW);
    Serial.println("Waiting");
  }
     delay(100);
}
