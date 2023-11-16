
int Led = 13; // define LED port
int buttonpin = 3; // define switch port
int val; // define digital variable val

void setup() 
{
  // put your setup code here, to run once:
pinMode(Led,OUTPUT);  // define LED as a output port
pinMode(buttonpin,INPUT); // define switch as a output port
}

void loop() 
{
  // put your main code here, to run repeatedly:
val = digitalRead(buttonpin); // read the value of the digital interace 3 assigned to val
if(val == HIGH)  // when the switch sensor have signal, LED blink
{
  digitalWrite(Led,HIGH);
}
else
{
  digitalWrite(Led,LOW);
}
}
