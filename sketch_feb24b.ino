int in1 = 6;


void setup() {
  pinMode(in1, OUTPUT);
}

void loop() {
  Blink(6,300);
  Blink(6,300);
  Blink(6,300);

  Blink(6,1000);
  Blink(6,1000);
  Blink(6,1000);

  Blink(6,300);
  Blink(6,300);
  Blink(6,300);

  delay(2000);
}



void Blink(int x, int y){
  digitalWrite(x, LOW);
  delay(y);
  digitalWrite(x, HIGH);
  delay(y);
}
