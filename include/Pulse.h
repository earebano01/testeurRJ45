#include <Arduino.h>

class Pulse
{
private:
    
    int pin1;
    int pin2;
    int pin3;
    int pin4;
    int pin5;
    int pin6;
    int pin7;
    int pin8;

    int pinOut1;
    int pinOut2;
    int pinOut3;
    int pinOut4;
    int pinOut5;
    int pinOut6;
    int pinOut7;
    int pinOut8;

    int pulseIn1 = 0;
    int pulseIn2 = 0;
    int pulseIn3 = 0;
    int pulseIn4 = 0;
    int pulseIn5 = 0;
    int pulseIn6 = 0;
    int pulseIn7 = 0;
    int pulseIn8 = 0;

    int pulseOut1 = 0;
    int pulseOut2 = 0;
    int pulseOut3 = 0;
    int pulseOut4 = 0;
    int pulseOut5 = 0;
    int pulseOut6 = 0;
    int pulseOut7 = 0;
    int pulseOut8 = 0;
    
public:
    Pulse(
    int pin1,
    int pin2,
    int pin3,
    int pin4,
    int pin5,
    int pin6,
    int pin7,
    int pin8,
    int pinOut1,
    int pinOut2,
    int pinOut3,
    int pinOut4,
    int pinOut5,
    int pinOut6,
    int pinOut7,
    int pinOut8);

    void pinIn(); 

    void pinOut(); 

    void pulseIO();

    void testerRJ45();

};


