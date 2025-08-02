// C++ code
//

const int ldrPin = A0;          
const int ledPin = 13; 
int lightThreshold = 500;


void setup()
{
 pinMode(ledPin, OUTPUT);
}

void loop()
{
    int ldrValue = analogRead(ldrPin);
 Serial.print("LDR Value: ");
  Serial.println(ldrValue);
  
  // التحقق من أن القيمة أقل من العتبة (أي أن المكان مظلم)
  if (ldrValue < lightThreshold) {
    // إذا كان مظلمًا، قم بتشغيل الـ LED
    digitalWrite(ledPin, HIGH);
  } else {
    // إذا كان مضاءً، قم بإيقاف الـ LED
    digitalWrite(ledPin, LOW);
  }
  
  delay(500);
}
