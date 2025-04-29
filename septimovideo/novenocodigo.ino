#include <DHT.h>
#include <DHT_U.h>

int SENSOR = 2;
int TEMPERATURA;
int HUMEDAD;

DHT dht(SENSOR, DHT22);

void setup() {
  Serial.begin(9600);
  dht.begin();

}

void loop() {
  TEMPERATURA = dht.readTenperature();
  HUMEDAD = DHT.reasHumidity();
  Serial.print("Temperatura: ");
  Serial.print(TEMPERATURA);
  Serial.println("HUMEDAD: ");
  Serial.println(HUMEDAD);
  delay(500);
}
  