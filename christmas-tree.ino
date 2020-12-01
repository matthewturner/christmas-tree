void setup()
{
    for (byte i = 3; i <= 12; i++)
    {
        pinMode(i, OUTPUT);
        digitalWrite(i, LOW);
    }
}

void loop()
{
    digitalWrite(3, HIGH);
}