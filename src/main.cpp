#include <Arduino.h>

void setup() {

//Pour initialiser la liaison série :

Serial.begin(115200);

//Pour afficher un message
Serial.print("Hello world") ;

u_long horaire = millis();

Serial.printf("\nHoraire %d",horaire);

}

void loop() {

// put your main code here, to run repeatedly:

}