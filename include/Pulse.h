#include <Arduino.h>

/*-----on declare notre classe Pulse-----*/
class Pulse
{
private:        
/*-----on declare notre variable pour notre pinIn-----*/
    int pinIn1;
    int pinIn2;
    int pinIn3;
    int pinIn4;
    int pinIn5;
    int pinIn6;
    int pinIn7;
    int pinIn8;

/*-----on declare notre variable pour notre pinOut-----*/
    int pinOut1;
    int pinOut2;
    int pinOut3;
    int pinOut4;
    int pinOut5;
    int pinOut6;
    int pinOut7;
    int pinOut8;

/*-----on declare notre variable pour notre pulseIn-----*/
    int pulseIn1 = 0;
    int pulseIn2 = 0;
    int pulseIn3 = 0;
    int pulseIn4 = 0;
    int pulseIn5 = 0;
    int pulseIn6 = 0;
    int pulseIn7 = 0;
    int pulseIn8 = 0;

/*-----on declare notre variable pour notre pulseOut-----*/
    int pulseOut1 = 0;
    int pulseOut2 = 0;
    int pulseOut3 = 0;
    int pulseOut4 = 0;
    int pulseOut5 = 0;
    int pulseOut6 = 0;
    int pulseOut7 = 0;
    int pulseOut8 = 0;
    
public:
/*-----on declare notre constructeur Pulse-----*/
    Pulse(
    int pinIn1,
    int pinIn2,
    int pinIn3,
    int pinIn4,
    int pinIn5,
    int pinIn6,
    int pinIn7,
    int pinIn8,
    int pinOut1,
    int pinOut2,
    int pinOut3,
    int pinOut4,
    int pinOut5,
    int pinOut6,
    int pinOut7,
    int pinOut8);

/*-----on crée nos constructeurs pour l'initialisation des broches pour pinIn et pinOut-----*/
    void pinIn(); 

    void pinOut(); 

/*-----on declare notre constructeur qu'on va utiliser pour notre digitalRead-----*/
    void pulseIO();

/*-----voici notre constructeur principale pour la logique du notre programme-----*/
    void testerRJ45();

};


