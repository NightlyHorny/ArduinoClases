int alarma = 9;
float stemp = 0;
float temp;
int tmp = A0;
void setup() {
  pinMode(alarma, OUTPUT);
  pinMode(tmp, INPUT);
  Serial.begin(9600);

}

void loop() {
  temp = analogRead(stemp);
  temp = (temp*500)/1023;
  if(temp > 35){
    digitalWrite(alarma, HIGH);
  }else{
    digitalWrite(alarma, LOW);
  }
  Serial.println(temp);
}
