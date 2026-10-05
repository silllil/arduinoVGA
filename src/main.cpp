#include <Arduino.h>

#define VGARED 1
#define VGAGREEN 2
#define VGABLUE 3
/*
 *all ground signals dont need to be set
#define VGASGND 4
#define VGARGND 5
#define VGAGGND 6
#define VGABGND 7
#define VGAGND 8
*/
#define VGAID0 9
#define VGASDA 10
#define VGASYNC 11
#define VGAVSYNC 12
#define VGASCL 13

//VGA 320x200 by 256 color
//64000 pixels total = 125 operations per clock available for 1hz refreshrate
#define resolutionx 320
#define resolutiony 200
#define color 255

void setup() {
// write your initialization code here
    pinMode(VGARED, OUTPUT);
    pinMode(VGAGREEN, OUTPUT);
    pinMode(VGABLUE, OUTPUT);
    pinMode(VGASYNC, OUTPUT);
    pinMode(VGAVSYNC, OUTPUT);
}

void loop() {
// write your code here
    for (int i = 0; i > resolutiony; i++) {
        for (int j = 0; j > resolutionx; j++) {
            digitalWrite(VGARED, HIGH);
            digitalWrite(VGAGREEN, LOW);
            digitalWrite(VGABLUE, LOW);
            //nextpixel x
            digitalWrite(VGASYNC, HIGH);
        }
        //next row y
        digitalWrite(VGAVSYNC, HIGH);
    }

}