#define T_A 88
#define T_B 493
#define T_C 25000
#define T_D 110



const int A = 4;
const int B = 5;
const int C = 6;
const int D = 7;

const int Buzz = 11;


void setup() {
  // put your setup code here, to run once:
  for (int i = 4 ; i <= 7 ; i++) {

    pinMode(i, INPUT);
    digitalWrite(i, HIGH);

  }

}

void loop() {
  // put your main code here, to run repeatedly:
  while (digitalRead (A )== LOW) {
    tone(Buzz, T_A);
  }
  while (digitalRead (B) == LOW) {
    tone(Buzz, T_B);
  }
  while (digitalRead (C) == LOW) {
    tone(Buzz, T_C);
  }
  while (digitalRead (D) == LOW) {
    tone(Buzz, T_D);
  }
  noTone(Buzz);
}
