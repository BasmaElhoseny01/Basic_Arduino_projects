#include "DHT.h"

#define DHTPIN 2  //Digital Pin we will take reading from

//Type of the DHT Sensor
#define DHTTYPE DHT22  //// DHT 22  (AM2302), AM2321
//#define DHTTYPE DHT11   // DHT 11
//#define DHTTYPE DHT21   // DHT 21 (AM2301)


//Creating Object of DHT Sensor
DHT dht(DHTPIN, DHTTYPE);  //Pin , Type

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("DHTxx Test!");

  dht.begin();
}

void loop() {

  //wait 2s since reading period was 2s
  delay(2000);  //2 sec

  //1.Humidity
  float h = dht.readHumidity();

  //2.Temprature(Celsius)
  float t = dht.readTemperature();

  //3.Temprature Fahrenheit (isFahrenheit = true)
  float f = dht.readTemperature(true);

  //Check if there is any fail in any reading
  if (isnan(h) || isnan(t) || isnan(f)) {
    Serial.println("Failed to read from DHT Sensor");
    return;
  }

  //Compute heat index in Fahrenheit (default)
  float hif = dht.computeHeatIndex(f, h);
  //Compute heat index in Celsius (isFahrenheit = false)
  float hic = dht.computeHeatIndex(t, h, false);

  Serial.print("Humidity: ");
  Serial.print(h);
  Serial.print(" %\t");
  Serial.print("Temperature: ");
  Serial.print(t);
  Serial.print(" *C ");
  Serial.print(f);
  Serial.print(" *F\t");

  Serial.print("Heat index: ");
  Serial.print(hic);
  Serial.print(" *C ");
  Serial.print(hif);
  Serial.println(" *F");
}