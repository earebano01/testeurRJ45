/*---------declaration pour notre libraire-----*/
#include <Arduino.h>
#include "Pulse.h"    

/*-----on fait notre definition pour chaque broche qu'on utilise-----*/
#define PIN1 20
#define PIN2 21
#define PIN3 0
#define PIN4 1
#define PIN5 2
#define PIN6 3
#define PIN7 4
#define PIN8 5
#define PINOUT1 13
#define PINOUT2 12
#define PINOUT3 11
#define PINOUT4 10
#define PINOUT5 9
#define PINOUT6 8
#define PINOUT7 7
#define PINOUT8 6

/*-----on appelle notre classe et on cree notre objet-----*/
Pulse myObj(
    PIN1,
    PIN2,
    PIN3,
    PIN4,
    PIN5,
    PIN6,
    PIN7,
    PIN8,
    PINOUT1,
    PINOUT2,
    PINOUT3,
    PINOUT4,
    PINOUT5,
    PINOUT6,
    PINOUT7,
    PINOUT8
);

/*-----voici le code original qui j'utilise avant la creation de la classe-----*/
// Init pin1(PIN1);
// Init pin2(PIN2);
// Init pin3(PIN3);
// Init pin4(PIN4);
// Init pin5(PIN5);
// Init pin6(PIN6);
// Init pin7(PIN7);
// Init pin8(PIN8);

/*-----voici le code original qui j'utilise avant la creation de la classe-----*/
// Init pinOut1(PINOUT1);
// Init pinOut2(PINOUT2);
// Init pinOut3(PINOUT3);
// Init pinOut4(PINOUT4);
// Init pinOut5(PINOUT5);
// Init pinOut6(PINOUT6);
// Init pinOut7(PINOUT7);
// Init pinOut8(PINOUT8);

/*-----voici le code original qui j'utilise avant la creation de la classe-----*/
// int pin1 = 20;
// int pin2 = 21;
// int pin3 = 0;
// int pin4 = 1;
// int pin5 = 2;
// int pin6 = 3;
// int pin7 = 4;
// int pin8 = 5;

/*-----voici le code original qui j'utilise avant la creation de la classe-----*/
// int pinOut1 = 13;
// int pinOut2 = 12;
// int pinOut3 = 11;
// int pinOut4 = 10;
// int pinOut5 = 9;
// int pinOut6 = 8;
// int pinOut7 = 7;
// int pinOut8 = 6;

void setup(){
    myObj.pinIn();          /*-----on utilise notre objet myObj pour appelle notre methode pinIn et pinOut-----*/
    myObj.pinOut();         /*-----on fait cet étape pour initialisation.                           -----*/

/*-----voici le code original qui j'utilise avant la creation de la classe-----*/
// pinMode(pin1,INPUT);
// pinMode(pin2,INPUT);
// pinMode(pin3,INPUT);
// pinMode(pin4,INPUT);
// pinMode(pin5,INPUT);
// pinMode(pin6,INPUT);
// pinMode(pin7,INPUT);
// pinMode(pin8,INPUT);

/*-----voici le code original qui j'utilise avant la creation de la classe-----*/
// pinMode(pinOut1,INPUT_PULLUP);
// pinMode(pinOut2,INPUT_PULLUP);
// pinMode(pinOut3,INPUT_PULLUP);
// pinMode(pinOut4,INPUT_PULLUP);
// pinMode(pinOut5,INPUT_PULLUP);
// pinMode(pinOut6,INPUT_PULLUP);
// pinMode(pinOut7,INPUT_PULLUP);
// pinMode(pinOut8,INPUT_PULLUP);
Serial.begin(9600);
}

void loop(){
// int sig1 = 0;
// int sig2 = 0;
// int sig3 = 0;
// int sig4 = 0;
// int sig5 = 0;
// int sig6 = 0;
// int sig7 = 0;
// int sig8 = 0;
// int sigOut1 = 0;
// int sigOut2 = 0;
// int sigOut3 = 0;
// int sigOut4 = 0;
// int sigOut5 = 0;
// int sigOut6 = 0;
// int sigOut7 = 0;
// int sigOut8 = 0;

myObj.pulseIO();            /*-----on utilise notre objet myObj pour appelle notre methode-----*/
myObj.testerRJ45();         /*-----pulseIO et testeurRJ45-----*/
                            /*-----toutes les méthodes et classes seront expliquées en détail--*/
                            /*-----dans chaque fichier de la bibliothèque (.h et .cpp).-----*/

/*-----voici le code original qui j'utilise avant la creation de la classe-----*/
// sigOut1 = digitalRead(pinOut1);
// sig1 = digitalRead(pin1);
// sigOut2 = digitalRead(pinOut2);
// sig2 = digitalRead(pin2);
// sigOut3 = digitalRead(pinOut3);
// sig3 = digitalRead(pin3);
// sigOut4 = digitalRead(pinOut4);
// sig4 = digitalRead(pin4);
// sigOut5 = digitalRead(pinOut5);
// sig5 = digitalRead(pin5);
// sigOut6 = digitalRead(pinOut6);
// sig6 = digitalRead(pin6);
// sigOut7 = digitalRead(pinOut7);
// sig7 = digitalRead(pin7);
// sigOut8 = digitalRead(pinOut8);
// sig8 = digitalRead(pin8);

//     Serial.print("================================================");
//     Serial.println();
//     Serial.print("| I/O du câble  | Numéro de broche             |");
//     Serial.println();
//     Serial.print("================================================");
//     Serial.println();
//     Serial.print("| ");
//     Serial.print(sigOut1);
//     Serial.print(sigOut2);
//     Serial.print(sigOut3);
//     Serial.print(sigOut4);
//     Serial.print(sigOut5);
//     Serial.print(sigOut6);
//     Serial.print(sigOut7);
//     Serial.print(sigOut8);
//     Serial.print(" - ");
//     Serial.print("13 | ");
//     Serial.print("12 | ");
//     Serial.print("11 | ");
//     Serial.print("10 | ");
//     Serial.print("9 | ");
//     Serial.print("8 | ");
//     Serial.print("7 | ");
//     Serial.print("6 |");
//     Serial.println();
//     Serial.print("| ");
//     Serial.print(sig1);
//     Serial.print(sig2);
//     Serial.print(sig3);
//     Serial.print(sig4);
//     Serial.print(sig5);
//     Serial.print(sig6);
//     Serial.print(sig7);
//     Serial.print(sig8);
//     Serial.print(" - ");
//     Serial.print("20 | ");
//     Serial.print("21 | ");
//     Serial.print(" 0 | ");
//     Serial.print(" 1 | ");
//     Serial.print("2 | ");
//     Serial.print("3 | ");
//     Serial.print("4 | ");
//     Serial.print("5 |");
//     Serial.println();
//     Serial.print("================================================");
//     Serial.println();
//     if (
//     sigOut1 && sig3 == HIGH && 
//     sigOut2 && sig6 == HIGH && 
//     sigOut3 && sig1 == HIGH &&
//     sigOut4 && sig8 == HIGH &&
//     sigOut5 && sig7 == HIGH &&
//     sigOut6 && sig2 == HIGH &&
//     sigOut7 && sig5 == HIGH &&
//     sigOut8 && sig4 == HIGH 
//     ){
//     Serial.print("| TYPE: Câble Croisé");
// }
// else if (
//     sigOut1 && sig1 == HIGH && 
//     sigOut2 && sig2 == HIGH && 
//     sigOut3 && sig3 == HIGH &&
//     sigOut4 && sig4 == HIGH &&
//     sigOut5 && sig5 == HIGH &&
//     sigOut6 && sig6 == HIGH &&
//     sigOut7 && sig7 == HIGH &&
//     sigOut8 && sig8 == HIGH
//       ){
//     Serial.print("| TYPE: Câble Droit");
// }
// else {
//     Serial.print("| TYPE: Inconnue ou Câble Cassé");
// }
//     Serial.print("                           |");
//     Serial.println();
//     Serial.print("================================================"); 
//     Serial.println();   
// delay(1000);
}
