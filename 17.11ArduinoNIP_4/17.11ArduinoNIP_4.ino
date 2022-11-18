int tmp = A0;
int ventilador = 9;
void setup() {
  pinMode(tmp, INPUT);
  pinMode(ventilador, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int estado = analogRead(tmp);
  int temp;
  temp = ((estado*500)/1023);
  if(temp >=  26){
    digitalWrite(ventilador, HIGH);
  }else{
    digitalWrite(ventilador, LOW);
  }
  Serial.println(estado);

}
