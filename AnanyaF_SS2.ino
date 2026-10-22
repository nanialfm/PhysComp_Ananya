
int led1 = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;


int button = 6;

// My Pattern 
int pattern = 1;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {

  if (digitalRead(button) == HIGH) {
    pattern++;

    if (pattern > 6) {
      pattern = 1;
    }

    delay(300);
  }

  // 6 LED patterns
  if (pattern == 1) {
    digitalWrite(led1, HIGH);
  }
  else if (pattern == 2) {
    digitalWrite(led2, HIGH);
  }
  else if (pattern == 3) {
    digitalWrite(led3, HIGH);
  }
  else if (pattern == 4) {
    digitalWrite(led4, HIGH);
  }
  else if (pattern == 5) {
    digitalWrite(led1, HIGH);
    digitalWrite(led3, HIGH);
  }
  else if (pattern == 6) {
    digitalWrite(led2, HIGH);
    digitalWrite(led4, HIGH);
  }
}
