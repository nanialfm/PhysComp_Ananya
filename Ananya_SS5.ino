int ledPin = 4;
int mode;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  if (Serial.available() > 0) {

    mode = Serial.parseInt();

    if (mode == 1) {
      digitalWrite(ledPin, HIGH);
    }

    if (mode == 2) {
      digitalWrite(ledPin, LOW);
    }
  }
}