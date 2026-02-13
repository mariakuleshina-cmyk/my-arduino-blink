void blinkSOS() {
  for (int i = 0; i < 3; i++) {   
    digitalWrite(13, 1);
    delay(200);
    digitalWrite(13, 0);
    delay(200);
  }
  delay(400);

  for (int i = 0; i < 3; i++) {   
    digitalWrite(13, 1);
    delay(600);
    digitalWrite(13, 0);
    delay(600);
  }
  delay(400);
  
  for (int i = 0; i < 3; i++) { 
    digitalWrite(13, 1);
    delay(200);
    digitalWrite(13, 0);
    delay(200);
  }
  delay(2000);
}

void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop() {
  digitalWrite(13, 0);
  digitalWrite(12, 1);
  delay(300);

  digitalWrite(13, 0);
  digitalWrite(12, 0);
  delay(300);

  blinkSOS();  
}