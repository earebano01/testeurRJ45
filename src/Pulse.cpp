#include "Pulse.h"

Pulse::Pulse(
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
    int pinOut8){
    this->pinIn1 = pinIn1;
    this->pinIn2 = pinIn2;
    this->pinIn3 = pinIn3;
    this->pinIn4 = pinIn4;
    this->pinIn5 = pinIn5;
    this->pinIn6 = pinIn6;
    this->pinIn7 = pinIn7;
    this->pinIn8 = pinIn8;
    this->pinOut1 = pinOut1;
    this->pinOut2 = pinOut2;
    this->pinOut3 = pinOut3;
    this->pinOut4 = pinOut4;
    this->pinOut5 = pinOut5;
    this->pinOut6 = pinOut6;
    this->pinOut7 = pinOut7;
    this->pinOut8 = pinOut8;
}

void Pulse::pinIn(){
    pinMode(pinIn1,INPUT);
    pinMode(pinIn2,INPUT);
    pinMode(pinIn3,INPUT);
    pinMode(pinIn4,INPUT);
    pinMode(pinIn5,INPUT);
    pinMode(pinIn6,INPUT);
    pinMode(pinIn7,INPUT);
    pinMode(pinIn8,INPUT);
}

void Pulse::pinOut(){
    pinMode(pinOut1,INPUT_PULLUP);
    pinMode(pinOut2,INPUT_PULLUP);
    pinMode(pinOut3,INPUT_PULLUP);
    pinMode(pinOut4,INPUT_PULLUP);
    pinMode(pinOut5,INPUT_PULLUP);
    pinMode(pinOut6,INPUT_PULLUP);
    pinMode(pinOut7,INPUT_PULLUP);
    pinMode(pinOut8,INPUT_PULLUP);
}

void Pulse::pulseIO(){
    pulseOut1 = digitalRead(pinOut1);
    pulseIn1 = digitalRead(pinIn1);
    pulseOut2 = digitalRead(pinOut2);
    pulseIn2 = digitalRead(pinIn2);
    pulseOut3 = digitalRead(pinOut3);
    pulseIn3 = digitalRead(pinIn3);
    pulseOut4 = digitalRead(pinOut4);
    pulseIn4 = digitalRead(pinIn4);
    pulseOut5 = digitalRead(pinOut5);
    pulseIn5 = digitalRead(pinIn5);
    pulseOut6 = digitalRead(pinOut6);
    pulseIn6 = digitalRead(pinIn6);
    pulseOut7 = digitalRead(pinOut7);
    pulseIn7 = digitalRead(pinIn7);
    pulseOut8 = digitalRead(pinOut8);
    pulseIn8 = digitalRead(pinIn8);
}

void Pulse::testerRJ45(){
    Serial.print("================================================");
    Serial.println();
    Serial.print("| I/O du câble  | Numéro de broche             |");
    Serial.println();
    Serial.print("================================================");
    Serial.println();
    Serial.print("| ");
    Serial.print(pulseOut1);
    Serial.print(pulseOut2);
    Serial.print(pulseOut3);
    Serial.print(pulseOut4);
    Serial.print(pulseOut5);
    Serial.print(pulseOut6);
    Serial.print(pulseOut7);
    Serial.print(pulseOut8);
    Serial.print(" - ");
    Serial.print("13 | ");
    Serial.print("12 | ");
    Serial.print("11 | ");
    Serial.print("10 | ");
    Serial.print("9 | ");
    Serial.print("8 | ");
    Serial.print("7 | ");
    Serial.print("6 |");
    Serial.println();
    Serial.print("| ");
    Serial.print(pulseIn1);
    Serial.print(pulseIn2);
    Serial.print(pulseIn3);
    Serial.print(pulseIn4);
    Serial.print(pulseIn5);
    Serial.print(pulseIn6);
    Serial.print(pulseIn7);
    Serial.print(pulseIn8);
    Serial.print(" - ");
    Serial.print("20 | ");
    Serial.print("21 | ");
    Serial.print(" 0 | ");
    Serial.print(" 1 | ");
    Serial.print("2 | ");
    Serial.print("3 | ");
    Serial.print("4 | ");
    Serial.print("5 |");
    Serial.println();
    Serial.print("================================================");
    Serial.println();
    if (
        pulseOut1 && pulseIn3 == HIGH &&
        pulseOut2 && pulseIn6 == HIGH &&
        pulseOut3 && pulseIn1 == HIGH &&
        pulseOut4 && pulseIn8 == HIGH &&
        pulseOut5 && pulseIn7 == HIGH &&
        pulseOut6 && pulseIn2 == HIGH &&
        pulseOut7 && pulseIn5 == HIGH &&
        pulseOut8 && pulseIn4 == HIGH)
    {
        Serial.print("| TYPE: Câble Croisé");
    }
    else if (
        pulseOut1 && pulseIn1 == HIGH &&
        pulseOut2 && pulseIn2 == HIGH &&
        pulseOut3 && pulseIn3 == HIGH &&
        pulseOut4 && pulseIn4 == HIGH &&
        pulseOut5 && pulseIn5 == HIGH &&
        pulseOut6 && pulseIn6 == HIGH &&
        pulseOut7 && pulseIn7 == HIGH &&
        pulseOut8 && pulseIn8 == HIGH)
    {
        Serial.print("| TYPE: Câble Droit");
    }
    else
    {
        Serial.print("| TYPE: Inconnue ou Câble Cassé");
    }
    Serial.print("                           |");
    Serial.println();
    Serial.print("================================================");
    Serial.println();
    delay(1000);
}
