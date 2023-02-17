/*
Titre : Testeur RJ45
Auteur: Adonis Rebano
Date : 17/02/2023
Description : Un programme que permettant de tester un câble de réseau et afficher 
son type.

Version : 0.0.1
*/

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
Pulse myObj(PIN1, PIN2, PIN3, PIN4, PIN5, PIN6, PIN7, PIN8,
    PINOUT1, PINOUT2, PINOUT3, PINOUT4, PINOUT5, PINOUT6, PINOUT7, PINOUT8);

void setup(){
    myObj.pinIn();              /*-----on utilise notre objet myObj pour appelle notre methode pinIn et pinOut-----*/
    myObj.pinOut();             /*-----on fait cet étape pour initialisation.                           -----*/
    Serial.begin(9600);
}

void loop(){
    myObj.pulseIO();            /*-----on utilise notre objet myObj pour appelle notre methode-----*/
    myObj.testerRJ45();         /*-----pulseIO et testeurRJ45-----*/
                                /*-----toutes les méthodes et classes seront expliquées en détail--*/
                                /*-----dans chaque fichier de la bibliothèque (.h et .cpp).-----*/
}
