#include <Arduino.h>

#define DOT_LENGTH 300
#define INTERVAL_LENGTH 300
#define DASH_LENGTH DOT_LENGTH * 3
#define WORD_SPACE_LENGTH DOT_LENGTH * 4
#define SHORT_SPACE_LENGTH DOT_LENGTH * 2

void setup()
{
    for (byte i = 3; i <= 12; i++)
    {
        pinMode(i, OUTPUT);
    }
    turnAll(LOW);
}

void loop()
{
    lU();
    lS();
    lE();
    space();
    lD();
    lA();
    lT();
    lA();
    lB();
    lA();
    lS();
    lE();
    space();
}

void lA()
{
    dot();
    dash();
    shortspace();
}

void lB()
{
    dash();
    dot();
    dot();
    dot();
    shortspace();
}

void lC()
{
    dash();
    dot();
    dash();
    dot();
    shortspace();
}

void lD()
{
    dash();
    dot();
    dot();
    shortspace();
}

void lE()
{
    dot();
    shortspace();
}

void lF()
{
    dot();
    dot();
    dash();
    dot();
    shortspace();
}

void lG()
{
    dash();
    dash();
    dot();
    shortspace();
}

void lH()
{
    dot();
    dot();
    dot();
    dot();
    shortspace();
}

void lI()
{
    dot();
    dot();
    shortspace();
}

void lJ()
{
    dot();
    dash();
    dash();
    dash();
    shortspace();
}

void lK()
{
    dash();
    dot();
    dash();
    shortspace();
}

void lL()
{
    dot();
    dash();
    dot();
    dot();
    shortspace();
}

void lM()
{
    dash();
    dash();
    shortspace();
}

void lN()
{
    dash();
    dot();
    shortspace();
}

void lO()
{
    dash();
    dash();
    dash();
    shortspace();
}

void lP()
{
    dot();
    dash();
    dash();
    dot();
    shortspace();
}

void lQ()
{
    dash();
    dash();
    dot();
    dash();
    shortspace();
}

void lR()
{
    dot();
    dash();
    dot();
    shortspace();
}

void lS()
{
    dot();
    dot();
    dot();
    shortspace();
}

void lT()
{
    dash();
    shortspace();
}

void lU()
{
    dot();
    dot();
    dash();
    shortspace();
}

void lV()
{
    dot();
    dot();
    dot();
    dash();
    shortspace();
}

void lW()
{
    dot();
    dash();
    dash();
    shortspace();
}

void lX()
{
    dash();
    dot();
    dot();
    dash();
    shortspace();
}

void lY()
{
    dash();
    dot();
    dash();
    dash();
    shortspace();
}

void lZ()
{
    dash();
    dash();
    dot();
    dot();
    shortspace();
}

void n1()
{
    dot();
    dash();
    dash();
    dash();
    dash();
    shortspace();
}

void n2()
{
    dot();
    dot();
    dash();
    dash();
    dash();
    shortspace();
}

void n3()
{
    dot();
    dot();
    dot();
    dash();
    dash();
    shortspace();
}

void n4()
{
    dot();
    dot();
    dot();
    dot();
    dash();
    shortspace();
}

void n5()
{
    dot();
    dot();
    dot();
    dot();
    dot();
    shortspace();
}

void n6()
{
    dash();
    dot();
    dot();
    dot();
    dot();
    shortspace();
}

void n7()
{
    dash();
    dash();
    dot();
    dot();
    dot();
    shortspace();
}

void n8()
{
    dash();
    dash();
    dash();
    dot();
    dot();
    shortspace();
}

void n9()
{
    dash();
    dash();
    dash();
    dash();
    dot();
    shortspace();
}

void n0()
{
    dash();
    dash();
    dash();
    dash();
    dash();
    shortspace();
}

void space()
{
    delay(WORD_SPACE_LENGTH);
}

void dot()
{
    turnAll(HIGH);
    delay(DOT_LENGTH);
    turnAll(LOW);
    delay(INTERVAL_LENGTH);
}

void dash()
{
    turnAll(HIGH);
    delay(DASH_LENGTH);
    turnAll(LOW);
    delay(INTERVAL_LENGTH);
}

void shortspace()
{
    delay(SHORT_SPACE_LENGTH);
}

void turnAll(byte lowHigh)
{
    for (byte i = 3; i <= 12; i++)
    {
        digitalWrite(i, lowHigh);
    }
}