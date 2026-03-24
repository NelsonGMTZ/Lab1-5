
const int PIR_PIN = 2;
const int BUZZ_PIN = 8;
const int LED_PIN = 13;
const int ALARMA_MS =3000; 

volatile bool movimiento = false;
unsigned long tiempoAlarma = 0;

void ISR_MOVIMIENTO(){
  movimiento = true;
  tiempoAlarma = millis();
  Serial.println("{INTERRUPCION} Movimiento detectado!");
}

void setup() {
  // put your setup code here, to run once:
pinMode(PIR_PIN, INPUT);
pinMode(BUZZ_PIN, OUTPUT);
pinMode(LED_PIN, OUTPUT);
Serial.begin(9600);
Serial.println("sistema de alarma PIR listo...")

}

void loop() {
if(movimiento){
  digitalWrite(LED_PIN, HIGH);
    digitalWrite(BUZZ_PIN, HIGH);

} if(millis() - tiempoAlarma> ALARMA_MS){
  movimiento = false;
   digitalWrite(LED_PIN, LOW);
    digitalWrite(BUZZ_PIN, LOW);
    Serial.println("DESACTIVADA...")


} // put your main code here, to run repeatedly:


}

delay(50);
