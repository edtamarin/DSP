void setup() {
  // put your setup code here, to run once:
  analogWriteResolution(12);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0; i<4095; i++){
    analogWrite(DAC1,i);
    delay(5);
  }
}
