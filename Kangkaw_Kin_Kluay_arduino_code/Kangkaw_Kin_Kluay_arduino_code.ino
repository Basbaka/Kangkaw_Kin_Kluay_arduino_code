#include "pitches.h"

// notes in the melody:
int melody[] = {
 NOTE_A4, NOTE_G4, NOTE_G4, NOTE_G4, NOTE_E5, NOTE_G5, NOTE_E5, NOTE_D5, NOTE_E5,
 NOTE_G5, NOTE_E5, NOTE_D5, NOTE_E5, NOTE_G5, NOTE_E5, NOTE_D5, NOTE_C5, NOTE_D5, NOTE_E5,
 NOTE_A4, NOTE_G4, NOTE_G4, NOTE_G4, NOTE_E5, NOTE_G5, NOTE_E5, NOTE_D5, NOTE_E5,
 NOTE_G5, NOTE_E5, NOTE_D5, NOTE_E5, NOTE_G5, NOTE_E5, NOTE_D5, NOTE_C5, NOTE_D5, NOTE_C5, 0,
 NOTE_D5, NOTE_D5, NOTE_E5, NOTE_D5, NOTE_C5, NOTE_D5, 0,
 NOTE_E5, NOTE_D5, NOTE_C5, NOTE_D5, NOTE_E5, NOTE_D5, NOTE_C5, NOTE_B4, NOTE_A4, NOTE_G4, NOTE_A4, NOTE_B4, NOTE_A4, NOTE_B4, NOTE_C5, NOTE_D5, 0,
 NOTE_D5, NOTE_D5, NOTE_E5, NOTE_D5, NOTE_C5, NOTE_D5, 0,
 NOTE_E5, NOTE_D5, NOTE_C5, NOTE_D5, NOTE_E5, NOTE_C5, NOTE_D5, NOTE_E5, NOTE_G5, NOTE_E5, NOTE_D5, NOTE_C5, NOTE_D5, NOTE_C5, NOTE_B4, NOTE_A4


};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
 4, 8, 8, 4, 3, 8, 3, 8, 3,
 8, 3 , 8, 8, 8, 8 , 8, 4, 4, 4,
 4, 8, 8, 4, 3, 8, 3, 8, 3,
 8, 3 , 8, 8, 8, 8 , 8, 4, 4, 2, 4,
 4, 4, 4, 8, 8, 4, 8,
 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 2, 4,
 4, 4, 4, 8, 8, 4, 8,
 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 2

};

void setup() {
 // iterate over the notes of the melody:
 for (int thisNote = 0; thisNote < 87; thisNote++) {

   // to calculate the note duration, take one second divided by the note type.
   //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
   int noteDuration = 1000 / noteDurations[thisNote];
   tone(8, melody[thisNote], noteDuration);

   // to distinguish the notes, set a minimum time between them.
   // the note's duration + 30% seems to work well:
   int pauseBetweenNotes = noteDuration * 1.30;
   delay(pauseBetweenNotes);
   // stop the tone playing:
   noTone(8);
 }
}

void loop() {
 // no need to repeat the melody.
}
