void setup() {
  // put your setup code here, to run once:
  Serial.begin (115200);
  Serial.println ("Teste");
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println ("Teste loop");
  delay(10); //pausa por 10 segundos
}
