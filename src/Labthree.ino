SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

void setup() {
  // initlaize pins
  pinMode(D7, OUTPUT);
  pinMode(D6, OUTPUT);
  pinMode(D5, OUTPUT); 
}

// alternate between all colors in LED
void loop() {
  
  // turn red on and off
  analogWrite(D5, 128);
  analogWrite(D6, 0);
  analogWrite(D7, 0);
  delay(500);
  analogWrite(D5, 0);
  analogWrite(D6, 0);
  analogWrite(D7, 0);
  delay(500);

  // turn green on and off
  analogWrite(D5, 0);
  analogWrite(D6, 128);
  analogWrite(D7, 0);
  delay(500);
  analogWrite(D5, 0);
  analogWrite(D6, 0);
  analogWrite(D7, 0);
  delay(1000);
  
  // turn blue on and off
  analogWrite(D5, 0);
  analogWrite(D6, 0);
  analogWrite(D7, 128);
  delay(500);
  analogWrite(D5, 0);
  analogWrite(D6, 0);
  analogWrite(D7, 0);
  delay(1000);

  // turn orange on and off
  analogWrite(D5, 255);
  analogWrite(D6, 64);
  analogWrite(D7, 0);
  delay(500);
  analogWrite(D5, 0);
  analogWrite(D6, 0);
  analogWrite(D7, 0);
  delay(1000);
  
  // turn yellow on and off
  analogWrite(D5, 255);
  analogWrite(D6, 128);
  analogWrite(D7, 0);
  delay(500);
  analogWrite(D5, 0);
  analogWrite(D6, 0);
  analogWrite(D7, 0);
  delay(1000);

  // turn purple on and off
  analogWrite(D5, 255/2);
  analogWrite(D6, 0);
  analogWrite(D7, 255/2);
  delay(500);
  analogWrite(D5,0);
  analogWrite(D6,0);
  analogWrite(D7, 0);
  delay(1000);

  // turn cyan on and off
  analogWrite(D5, 15/2);
  analogWrite(D6, 250/2);
  analogWrite(D7, 230/2);
  delay(500);
  analogWrite(D5,0);
  analogWrite(D6,0);
  analogWrite(D7, 0);
  delay(1000);
}