#include <Arduino.h>

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
    for (byte i = 3; i <= 12; i++)
    {
        long number = random(999999);
        digitalWrite(i, number % 2 == 0);
    }
    delay(1000);
}
