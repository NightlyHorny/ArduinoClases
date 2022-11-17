
// Pin del Led
int ledpin = 8;

void setup() {
  pinMode(ledpin, OUTPUT);
    
  
}

void loop() {
  /*
  ◘◘◘◘◘◘◘◘◘◘◘◘◘◘◘◘◘◘◘◘◘◘◘◘◘◘◘◘◘◘◘◘◘◘◘◘◘◘◘◘◘
  ◘◘    ◘◘◘◘◘◘◘◘  ◘◘   ◘◘◘          ◘◘◘◘◘◘◘
  ◘◘  ◘  ◘◘◘◘◘◘◘  ◘◘   ◘◘◘  ◘◘◘◘◘◘◘  ◘◘◘◘◘◘
  ◘◘  ◘◘  ◘◘◘◘◘◘  ◘◘   ◘◘◘  ◘◘◘◘◘◘◘◘  ◘◘◘◘◘
  ◘◘  ◘◘◘  ◘◘◘◘◘  ◘◘   ◘◘◘  ◘◘◘◘◘◘◘◘  ◘◘◘◘◘
  ◘◘  ◘◘◘◘  ◘◘◘◘  ◘◘   ◘◘◘  ◘◘◘◘◘◘◘  ◘◘◘◘◘◘
  ◘◘  ◘◘◘◘◘  ◘◘◘  ◘◘   ◘◘◘          ◘◘◘◘◘◘◘
  ◘◘  ◘◘◘◘◘◘  ◘◘  ◘◘   ◘◘◘  ◘◘◘◘◘◘◘◘◘◘◘◘◘◘◘
  ◘◘  ◘◘◘◘◘◘◘     ◘◘   ◘◘◘  ◘◘◘◘◘◘◘◘  ◘◘◘◘◘
  ◘◘◘◘◘◘◘◘◘◘◘◘◘◘◘◘◘◘◘◘◘◘◘◘◘◘◘◘◘◘◘◘◘◘◘◘◘◘◘◘◘
  */
  digitalWrite(ledpin, HIGH);
    delay(400);
    digitalWrite(ledpin, LOW);
    delay(400);
    digitalWrite(ledpin, HIGH);
    delay(400);
    digitalWrite(ledpin, LOW);
    delay(400);
    digitalWrite(ledpin, HIGH);
    delay(400);
    digitalWrite(ledpin, LOW);

    delay(200);
    digitalWrite(ledpin, HIGH);
    delay(1000);
    digitalWrite(ledpin, LOW);
    delay(200);
    digitalWrite(ledpin, HIGH);
    delay(1000);
    digitalWrite(ledpin, LOW);
    delay(200);
    digitalWrite(ledpin, HIGH);
    delay(1000);
    digitalWrite(ledpin, LOW);

    delay(400);
    digitalWrite(ledpin, HIGH);
    delay(400);
    digitalWrite(ledpin, LOW);
    delay(400);
    digitalWrite(ledpin, HIGH);
    delay(400);
    digitalWrite(ledpin, LOW);
    delay(400);
    digitalWrite(ledpin, HIGH);
    delay(400);
    digitalWrite(ledpin, LOW);
    delay(400);

    //Pausa para separar 
    delay(2000);
}
