int foto = 8;
int led = 9;
void setup() {
  pinMode(led, OUTPUT);
  pinMode(foto, INPUT);
  Serial.begin(9600);
}

void loop() {
  int estado = digitalRead(foto);
  if(estado == 1){
    digitalWrite(led, HIGH);
  }else{
    digitalWrite(led, LOW);
  }
  Serial.println(estado);
}
