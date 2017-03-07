void setup() {
  // put your setup code here, to run once:
  pinMode(A0,INPUT);
  analogReadResolution(12);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int receivedVal = analogRead(A0);
  delay(10);
  Serial.println(receivedVal);
  analogWrite(DAC1,receivedVal);
}
