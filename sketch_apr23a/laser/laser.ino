const int pin = 8;
 
void setup() {
  pinMode(pin, OUTPUT);  //definir pin como salida
}
 
void loop(){
  digitalWrite(pin, HIGH);   
  delay(5000);               
  digitalWrite(pin, LOW);    
  delay(2000);               
}
