#include"./MorseCode.h"
MorseCode Morse(13,12);
String a = "";
int val;
void setup() {
  Serial.begin(9600);
}

void loop()
{
    while (Serial.available() > 0)  
    {
        Morse.transfor(Serial.read());
        delay(2);
    }
}
