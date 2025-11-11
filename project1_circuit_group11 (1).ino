// C++ code
//
void setup()
{
  pinMode(13, OUTPUT);
}

void loop()
{
  int red = 13;
  digitalWrite(red, HIGH);
  delay(5000); // Wait for 5sec
  digitalWrite(red, LOW);
  delay(2000); // Wait for 2sec
}

