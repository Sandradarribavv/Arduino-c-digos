void setup(){
    pinMode(2, INPUT);         // pin 2 como entrada
    pinMode (3, OUTPUT);       // pin 3 como salida
    }
    
    void loop() {
      if (digitalRead(2)== HIGH){ // evaluo si la entrada esta a nivel alto
      digitalWrite(3, HIGH);     //enciendo lED
      }
      else {
        digitalWrite(3, LOW); // apago  el LED
    }
    }



  