const int led1 = 2;
const int led2 = 3;
const int led3 = 4;
const int led4 = 5;
int pattern = 1;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
}

void loop() {
  if (pattern == 1) {
    digitalWrite(led1,HIGH); 
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH); 
    digitalWrite(led4,HIGH);
  }
  else if (pattern == 2) {
    digitalWrite(led1,LOW); 
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW); 
    digitalWrite(led4,LOW);
  }
  else if (pattern == 3) {
    digitalWrite(led1,HIGH); 
    digitalWrite(led3,HIGH);
  }
  else if (pattern == 4) {
    digitalWrite(led2,HIGH); 
    digitalWrite(led4,HIGH);
  }
  else if (pattern == 5) {
    digitalWrite(led1,HIGH); 
    digitalWrite(led2,HIGH);
    digitalWrite(led3,LOW); 
    digitalWrite(led4,LOW);
  }

  delay(500);
  pattern++;

  if (pattern > 5) pattern = 1;
  
}
