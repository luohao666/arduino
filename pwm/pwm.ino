int pin = 3;

void setup()
{
pinMode(pin, OUTPUT);
}

void loop()
{
digitalWrite(pin, HIGH);
delay(2);
digitalWrite(pin, LOW);
delay(20 - 2);

}

/*
void setup()
{
pinMode(pin, OUTPUT);
}
void loop()
{
analogWrite(pin, 26);
delay(20);
}*/
