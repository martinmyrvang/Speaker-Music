#include <Arduino.h>
#include "pitches.h"



int melody[] = {


NOTE_D4, NOTE_D4, NOTE_AS4, NOTE_AS4,


NOTE_AS4, NOTE_C4, NOTE_D4, NOTE_D4,


NOTE_C4, NOTE_AS4, NOTE_A4, NOTE_C4,


NOTE_C4, NOTE_A4, NOTE_AS4, NOTE_C4,


NOTE_A4, NOTE_D4, NOTE_AS4, NOTE_G4,


NOTE_F4, NOTE_F4, NOTE_AS4, NOTE_AS4,


NOTE_C4, NOTE_A4, NOTE_A4, NOTE_AS4,


NOTE_G4, NOTE_F4, NOTE_G4, NOTE_A4,


NOTE_F4, NOTE_F4, NOTE_AS4, NOTE_A4,


NOTE_AS4, NOTE_C4, NOTE_D4, NOTE_AS4,


NOTE_DS4, NOTE_D4, NOTE_C4, NOTE_AS4,


NOTE_F4, NOTE_AS4, NOTE_A4, NOTE_AS4,


NOTE_C4, NOTE_D4, NOTE_AS4, NOTE_DS4,


NOTE_D4, NOTE_C4, NOTE_AS4, NOTE_D4,


NOTE_D4, NOTE_AS4, NOTE_AS4, NOTE_AS4,


NOTE_C4, NOTE_D4, NOTE_D4, NOTE_C4,


NOTE_AS4, NOTE_A4, NOTE_C4, NOTE_C4,


NOTE_A4, NOTE_AS4, NOTE_C4, NOTE_A4,


NOTE_D4, NOTE_AS4, NOTE_G4, NOTE_F4,


NOTE_F4, NOTE_AS4, NOTE_AS4, NOTE_C4,


NOTE_A4, NOTE_A4, NOTE_AS4, NOTE_G4,


NOTE_F4, NOTE_G4, NOTE_A4, NOTE_F4,


NOTE_F4, NOTE_AS4, NOTE_A4, NOTE_AS4,


NOTE_C4, NOTE_D4, NOTE_AS4, NOTE_DS4,


NOTE_D4, NOTE_C4, NOTE_AS4, NOTE_F4,


NOTE_AS4, NOTE_A4, NOTE_AS4, NOTE_C4,


NOTE_D4, NOTE_AS4, NOTE_DS4, NOTE_D4,


NOTE_C4, NOTE_AS4, END


};

 
int noteDurations[] = {       
8,10,4,4,


6,8,5,10,


5,5,12,5,


8,5,5,5,


5,6,3,10,


10,4,10,4,


4,10,4,3,


5,3,4,4, 


8,3,4,3,


4,4,4,4,


4,4,10,7,


4,5,4,4,


4,4,4,4,


4,10,8,4,


5,4,4,6,


3,3,5,3,


3,6,3,5,


3,3,3,3,


4,2,8,6,


3,5,3,3,


5,3,3,4,


2,3,3,6,


3,4,2,3,


3,3,3,3,


2,8,8,3,


4,2,3,3,


3,3,3,2,


8,8,


};

int speed=80;  


void setup() {

Serial.begin(9600);
for (int thisNote = 0; melody[thisNote]!=-1; thisNote++) {

int noteDuration = speed*noteDurations[thisNote];
tone(3, melody[thisNote],noteDuration*.95);
Serial.println(melody[thisNote]);

delay(noteDuration);

noTone(3);
}

}

void loop() {
  
}