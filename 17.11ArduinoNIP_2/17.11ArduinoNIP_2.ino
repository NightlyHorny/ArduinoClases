int ledpin = 11;
int buttonpin = 2;

void setup() {
  pinMode(ledpin, OUTPUT);
  pinMode(buttonpin, INPUT);
  Serial.begin(9600);
}

void loop() {
  int estado = digitalRead(buttonpin);
  if(estado == LOW){
    digitalWrite(ledpin, HIGH);
    
    Serial.println(estado);
  }else{
    digitalWrite(ledpin, LOW);
    Serial.println(estado);
  }
}
