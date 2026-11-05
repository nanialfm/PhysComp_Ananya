int potValue = 13;
int lightValue = 7;
int buttonValue = 15;
int touchValue = 4;

void setup() {
  Serial.begin(115200);
}

void loop() {

  int pot = analogRead(potValue);
  int light = analogRead(lightValue);
  int button = digitalRead(buttonValue);
  int touch = digitalRead(touchValue);

  Serial.print(pot);
  Serial.print(",");
  Serial.print(light);
  Serial.print(",");
  Serial.print(button);
  Serial.print(",");
  Serial.println(touch);

  delay(100);
}