#include <arduino.h>
#include "earthunit.h"


int EarthUnit::getData()
{
    // earth unit
    int earth  = analogRead(A0);
    Serial.print("earth:");
    Serial.
    println(earth);
/*
    int adc  = analogRead(33);
    int earth = map(adc, 4095, 0, 0, 255);
    Serial.print("adc:");
    Serial.println(adc);
    Serial.print("earth:");
    Serial.println(earth);
*/
    return earth;
}
