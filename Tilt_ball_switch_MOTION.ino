int LED = 13;     // define LED port
int Button_pin = 2;     // define switch port
int val;          // define digital variable val

void setup() 
{
  // put your setup code here, to run once:
pinMode(LED,OUTPUT);    // define LED as a output port
pinMode(Button_pin,INPUT);    // define switch as a input port
}

void loop() 
{
  // put your main code here, to run repeatedly:
val = digitalRead(Button_pin); // read the value of the digital interface 3 assigned to val
if (val == HIGH)// when the switch sensor have signal, LED blink
{
  digitalWrite(LED,HIGH);
}
else
{
  digitalWrite(LED,LOW);
}
}
