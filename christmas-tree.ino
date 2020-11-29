#define TOP 3
#define TOP_TIER_1 4
#define TOP_TIER_2 5
#define TOP_TIER_3 6
#define MIDDLE_TIER_1 7
#define MIDDLE_TIER_2 8
#define MIDDLE_TIER_3 9
#define BOTTOM_TIER_1 10
#define BOTTOM_TIER_2 11
#define BOTTOM_TIER_3 12
#define MIN_PIN 3
#define MAX_PIN 12

void setup()
{
    for (byte i = MIN_PIN; i <= MAX_PIN; i++)
    {
        pinMode(i, OUTPUT);
    }
}

void loop()
{
    for (byte i = MIN_PIN; i <= MAX_PIN; i++)
    {
        for (byte j = 0; j < i; j++)
        {
            turnOn(i);
            delay(200);
            turnOff(i);
        }
        delay(500);
    }
}

void turnOn(byte pin)
{
    digitalWrite(pin, HIGH);
}

void turnOff(byte pin)
{
    digitalWrite(pin, LOW);
}