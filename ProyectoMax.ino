int val[5];
#define pinLED 12
void setup() {

  pinMode(pinLED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  for(int i = 0; i < 6; i++){
    val[i] = analogRead(i);
    Serial.print(val[i]);
    Serial.print(" ");
  }
    Serial.println(); 
    delay(10);
  int v = analogRead(A5);
  if (v < 600) digitalWrite(pinLED, HIGH); 
  else digitalWrite(pinLED, LOW);
  Serial.println(v);
}
