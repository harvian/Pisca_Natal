//1
//13
//A1
//A2
//A3
//A6
//A7


int myPins[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, A0, A1, A2, A3, A4, A5};


void setup() {

  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(A4, OUTPUT);
  pinMode(A5, OUTPUT);
}


void loop() {

  delay(500);

  for (int x = 0; x <= 3; x++) {
    for (int i = 0; i <= 18; i++) {
      int ale1 = random(0, 19);
      int ale2 = random(0, 19);
      int ale3 = random(0, 19);
      int ale4 = random(0, 19);
      int ale5 = random(0, 19);


      digitalWrite(myPins[ale1], HIGH);
      digitalWrite(myPins[ale2], HIGH);
      digitalWrite(myPins[ale3], HIGH);
      digitalWrite(myPins[ale4], HIGH);
      digitalWrite(myPins[ale5], HIGH);


      delay(80);

      digitalWrite(myPins[ale1], LOW);
      digitalWrite(myPins[ale2], LOW);
      digitalWrite(myPins[ale3], LOW);
      digitalWrite(myPins[ale4], LOW);
      digitalWrite(myPins[ale5], LOW);

    }
  }

  delay(200);

  for (int i = 0; i <= 18; i++) {
    digitalWrite(myPins[i], HIGH);
  }

  delay(200);

  for (int i = 0; i <= 18; i++) {
    digitalWrite(myPins[i], LOW);
  }

  delay(200);


  for (int i = 0; i <= 18; i++) {
    digitalWrite(myPins[i], HIGH);
  }

  delay(200);

  for (int i = 0; i <= 18; i++) {
    digitalWrite(myPins[i], LOW);
  }

  delay(200);


  for (int i = 0; i <= 18; i++) {
    digitalWrite(myPins[i], HIGH);
  }

  delay(200);

  for (int i = 0; i <= 18; i++) {
    digitalWrite(myPins[i], LOW);
  }

  delay(200);

  for (int i = 0; i <= 18; i++) {
    digitalWrite(myPins[i], HIGH);
  }

  delay(200);

  for (int i = 0; i <= 18; i++) {
    digitalWrite(myPins[i], LOW);
  }

  delay(200);

  for (int x = 0; x <= 3; x++) {
    for (int i = 0; i <= 18; i++) {
      digitalWrite(myPins[i], HIGH);
      delay(60);
    }

    for (int i = 0; i <= 18; i++) {
      digitalWrite(myPins[i], LOW);
      delay(60);
    }

    delay(200);

  }


}
