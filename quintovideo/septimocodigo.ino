int LED = 3;
int ECO;
int TRIG = 10;
int DURACION;
int DISTANCIA;

void setup(){
  pinMode(TRIG, OUTPUT);
  pinMode(ECO, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  digitalWrite(TRIG, HIGH);
  delay(1);
  digitalWrite(TRIG, LOW);
  DURACION = pulseIn(ECO, HIGH);
  DISTANCIA = DURACION / 58.2;
  Serial.println(DISTANCIA);
  delay(200); 
}
   
