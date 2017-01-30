int pin9 = 9;
int pin10 = 10;
int buttonPin = 2;
int buttonState;
int IN = 0;
int OUT = 127;


void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600); 
  
  pinMode(pin9, INPUT);
  pinMode(pin10, OUTPUT);
  
}

void loop() {
  analogWrite(pin9, OUT);
  IN = analogRead(pin10);
  buttonState = digitalRead(buttonPin);
  
  Serial.print("OUT: ");
  Serial.print(OUT);
  Serial.print(" | IN: ");
  Serial.print(IN);
  Serial.print(" | Button: ");
  Serial.println(buttonState);

  delay(500); // add some delay between reads
}
