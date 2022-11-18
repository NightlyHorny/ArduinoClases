int fotoresis = A0;
int ledpin = 13;
int buzer = 12;
int ventilador = 10;

void setup() {
  pinMode(ledpin, OUTPUT);
  pinMode(fotoresis, INPUT);
  pinMode(buzer, OUTPUT);
  pinMode(ventilador, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int estadofoto = analogRead(fotoresis);
  if (estadofoto <= 50) {
    digitalWrite(ledpin, HIGH);
      digitalWrite(ventilador, HIGH);
    digitalWrite(buzer, LOW);
    delay(2000);
  } else {
    digitalWrite(ledpin, LOW);
    digitalWrite(ventilador, LOW);
    for (int i = 1; i <= 5; i++) {
      digitalWrite(buzer, HIGH);
      delay(500);
      digitalWrite(buzer, LOW);
      delay(500);
      digitalWrite(buzer, HIGH);
    }
    delay(2000);
  }
  Serial.println(estadofoto);
}
