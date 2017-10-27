int sensorPin = A0;
int sensorVal;

void setup(){
  Serial.begin(9600);
}

void loop(){
  int sensorVal = analogRead(sensorPin);

  Serial.println(sensorVal);
  
  delay(10);
}