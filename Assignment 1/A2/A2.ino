void setup(){
  analogWriteResolution(12);
  pinMode(A0,INPUT);
}

void loop(){
  int sineVal = analogRead(A0);
  analogWrite(DAC1,map(sineVal,0,1023,0,4095));
  delay(5);
}
