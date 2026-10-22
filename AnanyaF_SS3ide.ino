int potPin = 13;

void setup() {
  Serial.begin(115200);
}

void loop() {

  int potValue = analogRead(potPin);

  Serial.println(potValue);

  delay(100);
}