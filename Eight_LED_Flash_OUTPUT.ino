
int tDelay = 100;
int latchPin = 11;      // (11) ST_CP [RCK] on 74HC595
int clockPin = 9;       // (9) SH_CP [SCK] on 74HC595
int dataPin = 12;       // (12) DS [S1] on 74HC595

byte leds = 0;

void updateShiftRegister()
{
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin,clockPin,LSBFIRST,leds);
  digitalWrite(latchPin,HIGH);
}

void setup() {
  // put your setup code here, to run once:
  pinMode(latchPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  leds = 0;
  updateShiftRegister();
  delay(tDelay);
  for (int i = 0; i < 8; i++)
  {
    bitSet(leds,i);
    updateShiftRegister();
    delay(tDelay);
  }
}
