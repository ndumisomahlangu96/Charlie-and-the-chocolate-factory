int pinBuzzer = 12;   // variable to store output.

void setup() {
  // put your setup code here, to run once:
  pinMode(pinBuzzer, OUTPUT);   // output pin.
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pinBuzzer, HIGH);      // Turn ON output pin.
  delay(3000);                        // Wait 3000ms (3 seconds).
  digitalWrite(pinBuzzer, LOW);       // Turn OF output pin.
  delay(1000);                        // Wait 1000ms (1 second).
}
