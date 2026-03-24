
const int NTC_PIN =A0;
const float R_REF =10000.0;
const float BETA = 3950.0;
const float T0 = 298.15;
const float R0 = 10000.0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("=== Sensor de Temperatura KY-013 ===");
  Serial.println("ADC_RAW | Voltaje(V) | Resistencia(Ohm) | Temp(C)");


}

void loop() {
  // put your main code here, to run repeatedly:
  int raw = analogRead(NTC_PIN);
  float voltage = raw * 5.0 / 1023.0;
  float resist = R_REF * (1023.0 / raw - 1.0);
  float tempK = 1.0 / (1.0 / T0 + (1.0/BETA) * log(resist/R0));
  float tempC = tempK - 273.15;


  Serial.print(raw); Serial.print("\t");
  Serial.print(voltage,3); Serial.print("\t");
  Serial.print(resist,1); Serial.print("\t");
  Serial.println(tempC,2); 

  delay(1000);
}
