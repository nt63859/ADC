
void setup() {
  Serial.begin(115200);
 // pinMode(A0, INPUT);
 
  int  adcvalue ;
  adcvalue =analogRead(A0);
  analogSetPinAttenuation(A0,ADC_11db);
  adcAttachPin(A0);
  adcStart (A0);
  
}

void loop() {
  int alco;
  alco = analogRead(A0);
  Serial.println(alco);
  delay (100) ;
}
