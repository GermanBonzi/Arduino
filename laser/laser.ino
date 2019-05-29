#define laser 8
 
void setup() {
  pinMode(laser, OUTPUT);  //definir pin como salida
}
 
void loop(){
  digitalWrite(laser, HIGH);   // poner el Pin en HIGH
  delay(2000);               // esperar 5 segundos
  digitalWrite(laser, LOW);    // poner el Pin en LOW
  delay(5000);               // esperar 20 segundos
}
