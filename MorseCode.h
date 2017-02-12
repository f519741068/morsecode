//
//  MorseCode.h
//  
#ifndef ____MorseCode__
#define ____MorseCode__
class MorseCode
{
private:
    int _codePin;
    int _tonePin;
    
public:
    MorseCode(int _pin,int tone_pin);
    void dot();
    void dash();
    void transfor(char _code);
};

#endif /* defined(____MorseCode__) */
