int LED = 3;
int ESTADO = LOW;

void setup() {
 pinMode(PULSADOR, INPUT);  // pin 2 como entrada
 pinMode(LED, OUTPUT);     // pin 3 como salida

}

void setup() {
 while(digitalRead(PULSADOR) == LOW){ // espero a que el pulsador se presione

  }
ESTADO = digitalRead(LED);           // leo el estado del LED
digitalWrite(LED, !ESTADO);          // escribo valor contrario
while(digitalRead(PULSADOR) == HIGH){ // antirebote
  }
}