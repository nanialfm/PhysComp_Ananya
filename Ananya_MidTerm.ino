vpinMode(15, INPUT_PULLUP);  // Button
  pinMode(7, INPUT);          // Photocell
  pinMode(4, OUTPUT);         // LED 1 
  pinMode(5, OUTPUT);         // LED  2 
  pinMode(6, OUTPUT);         // The Buzzer
}

void loop() 
{

  if (digitalRead(15) == LOW 
    analogRead(7) > 2000) 
  {

    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);

    // Happy Birthday from online reasourse
    tone(6, 262, 200); delay(250);
    tone(6, 262, 200); delay(250);
    tone(6, 294, 400); delay(450);
    tone(6, 262, 400); delay(450);
    tone(6, 349, 400); delay(450);
    tone(6, 330, 700); delay(750);

    tone(6, 262, 200); delay(250);
    tone(6, 262, 200); delay(250);
    tone(6, 294, 400); delay(450);
    tone(6, 262, 400); delay(450);
    tone(6, 392, 400); delay(450);
    tone(6, 349, 700); delay(750);

    tone(6, 262, 200); delay(250);
    tone(6, 262, 200); delay(250);
    tone(6, 523, 400); delay(450);
    tone(6, 440, 400); delay(450);
    tone(6, 349, 400); delay(450);
    tone(6, 330, 400); delay(450);
    tone(6, 294, 700); delay(750);

    tone(6, 466, 200); delay(250);
    tone(6, 466, 200); delay(250);
    tone(6, 440, 400); delay(450);
    tone(6, 349, 400); delay(450);
    tone(6, 392, 400); delay(450);
    tone(6, 349, 900); delay(950);

    noTone(6); //off
  }
}
