// C++ code
//

const int pirSensorPin = 7;     
const int ledPin = 13;

void setup()
{
  pinMode(pirSensorPin, INPUT);  
  pinMode(ledPin, OUTPUT); 
 }

void loop()
{
    int sensorValue = digitalRead(pirSensorPin);
 if (sensorValue == HIGH) {
    // إذا تم اكتشاف حركة، قم بتشغيل LED
    digitalWrite(ledPin, HIGH);
    Serial.println("Motion detected! LED is ON.");
  } else {
    // إذا لم يتم اكتشاف حركة، قم بإيقاف LED
    digitalWrite(ledPin, LOW);
    Serial.println("No motion. LED is OFF.");
  }
    delay(100);

}