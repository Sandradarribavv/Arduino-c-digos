int LED = 3;
int ESTADO = LOW;

void setup() {
 pinMode(PULSADOR, INPUT);  // pin 2 como entrada
 pinMode(LED, OUTPUT);     // pin 3 como salida

}

void setup() {
 while(digitalRead(PULSADOR) == LOW){ // espero a que el pulsador se presione

  }
  // aqui esta la diferencia entre el anterior y este
digitalWrite(LED, HIGH);              // enciende LED
delay(5000);                          // espera de 5 seg
digitalWrite(LED, LOW)                // apaga LED
while(digitalRead(PULSADOR) == HIGH){ // antirebote
  }
}
