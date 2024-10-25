void setup() {
  pinMode(9,OUTPUT);
  pinMode(7,INPUT);
  Serial.begin(9600);

}

void loop() {
  int SensorValue = digitalRead(7);
  Serial.print("Clear the path");
  Serial.println(SensorValue);
  delay(100);
  if(SensorValue==LOW){//LOW MEANS Object Detected
    digitalWrite(9,HIGH);
  }
  else
  {digitalWrite(9,LOW);
  }
}
