int ledPin = 7;
void setup()
{
pinMode(ledPin, OUTPUT);
}
void light(int sos)
{
digitalWrite(ledPin, HIGH);
delay(sos);
digitalWrite(ledPin, LOW);
delay(sos);
}

void loop()
{
light(200); 
light(200); 
light(200);// the first letter S
delay(300);
light(500); 
light(500);
light(500);// the second letter O
light(200);
light(200);
light(200);// the third letter S
delay(1000);//delay for 1s
}
