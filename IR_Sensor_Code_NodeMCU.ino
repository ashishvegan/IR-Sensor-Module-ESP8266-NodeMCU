const int irPin = D1;
const int buzzerPin = D0;
void setup()
{
  Serial.begin(9600);
  pinMode(irPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
}
void loop()
{
  int irValue = digitalRead(irPin);
  Serial.println(irValue);
  if (irValue == 1)
  {
    digitalWrite(buzzerPin, HIGH);
  }
  else
  {
    digitalWrite(buzzerPin, LOW);
  }
  delay(10);
}
