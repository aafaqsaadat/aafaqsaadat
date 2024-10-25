void setup() {
  pinMode(10,OUTPUT);
  pinMode(5,INPUT);
  Serial.begin(9600);

}

void loop() {
  int SensorValue = digitalRead(5);
  Serial.print("SensorPin Value: ");
  Serial.println(SensorValue);
  delay(100);
  if(SensorValue==LOW){//LOW MEANS Object Detected
    digitalWrite(10,HIGH);
  }
  else
  {digitalWrite(10,LOW);
  }
}
