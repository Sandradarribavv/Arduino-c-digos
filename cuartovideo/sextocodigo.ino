int LED = 3;
int BRILLO;
int POT = 0;

void setup() {
 pinMode(LED, OUTPUT);
 // las entradas analgicas no requieren inivializacion
}

void loop() {
  BRILLO = analogRead (POT) / 4;
  analogWrite(LED, BRILLO);
  }
     