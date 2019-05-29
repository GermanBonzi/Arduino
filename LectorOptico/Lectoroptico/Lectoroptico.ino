int dato = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  dato = analogRead(A0);
  dato=map(dato,1023,0,255,0);
  Serial.println(dato);
  delay(2500);
}
