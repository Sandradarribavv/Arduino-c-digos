Tercer vídeo

- Primer código:

void setup(){
    pinMode(2, INPUT);         // pin 2 como entrada
    pinMode (3, OUTPUT);       // pin 3 como salida
    }
    
    void loop() {
      if (digitalRead(2)== HIGH){ // evaluo si la entrada esta a nivel alto
      digitalWrite(3, HIGH);     //enciendo lED
      }
      else {
        digitalWrite(3, LOW); // apago LED
    }
    }

- Segundo código:

int LED = 3;
int ESTADO = LOW;

void setup() {
 pinMode(PULSADOR, INPUT);  // pin 2 como entrada
 pinMode(LED, OUTPUT);     // pin 3 como salida

}

void setup() {
 while(digitalRead(PULSADOR) == LOW){ // espero a que el pulsador se presione

  }
ESTADO = digitalRead(LED);           // leo estado del LED
digitalWrite(LED, !ESTADO);          // escribo valor contrario
while(digitalRead(PULSADOR) == HIGH){ // antirebote
  }
}

- Tercer código:

int LED = 3;
int ESTADO = LOW;

void setup() {
 pinMode(PULSADOR, INPUT);  // pin 2 como entrada
 pinMode(LED, OUTPUT);     // pin 3 como salida

}

void setup() {
 while(digitalRead(PULSADOR) == LOW){ // espero a que el pulsador se presione

  }
  // aquí esta la diferencia entre el anterior y este.
digitalWrite(LED, HIGH);              // enciende LED
delay(5000);                          // espera de 5 seg.
digitalWrite(LED, LOW)                // apaga LED
while(digitalRead(PULSADOR) == HIGH){ // antirebote
  }
}
