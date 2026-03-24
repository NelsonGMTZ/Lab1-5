  
  
  const int LED = 13;


  void dot(){
    digitalWrite(LED,HIGH);
    delay(200);
    digitalWrite(LED,LOW);
    delay(200);
  }
  void dash(){
    digitalWrite(LED,HIGH);
    delay(600);
    digitalWrite(LED,LOW);
    delay(200);
  }

  void space(){
    delay(600);
  }

  void setup(){
    pinMode(LED, OUTPUT);
  }



void loop() {
 // digitalWrite(LED_PIN, HIGH);
  //Serial.println("LED: ON");
  //delay(1000);

  //digitalWrite(LED_PIN, LOW);
  //Serial.println("LED: OFF");
  //delay(1000);

 // N = _ .
  dash ();
  dot();
  space();

 // E = .
 dot();
 space();

 //L = . _ . .
 dot();
 dash();
 dot();
 dot();
 space();

 // S = . . .

 dot();
 dot();
 dot();
 space();


  // O = _ _ _
  dash();
  dash();
  dash();
  space();

  // N = _ .
  dash ();
  dot();


  delay(2000);

}
