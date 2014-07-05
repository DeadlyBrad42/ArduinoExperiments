/*
  Photocell Readings
  Brad Mason - 6/30/14
*/

// Pins
int pin_Photocell = 0;
int pin_LED = 13;

// Variables
int photocellReading = 0;

void setup() {
  Serial.begin(9600);
  
  pinMode(pin_LED, OUTPUT);
}

void loop() {
  photocellReading = analogRead(pin_Photocell);
  
  Serial.print("Analog reading = ");
  Serial.println(photocellReading);
  
  if(photocellReading < 50)z
      digitalWrite(pin_LED, HIGH);
  else
      digitalWrite(pin_LED, LOW);
  
  delay(500);
}
