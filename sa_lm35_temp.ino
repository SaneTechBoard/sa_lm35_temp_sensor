int out = A0;
int led = 12;
void setup() {
  pinMode(out, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
  int out_data = analogRead(out);
  float volt = out_data * (5.0/ 1024.0);
  float temp = volt * 100;
  Serial.print("Temperature in degree celsius");
  Serial.println();
  Serial.println(temp);
  if (temp > 33)
  {
    digitalWrite(led, HIGH);
  }
  else
  {
    digitalWrite(led, LOW);
  }
  delay(1000);
}
