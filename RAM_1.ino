/* 
Notes:
https://www.fastmetrics.com/support/it-wav-file/
https://www.arduino.cc/en/Tutorial/SimpleAudioPlayer?action=sourceblock&num=1
https://maxoffsky.com/maxoffsky-blog/how-to-play-wav-audio-files-with-arduino-uno-and-microsd-card/
https://www.allaboutcircuits.com/projects/reading-and-writing-files-from-an-sd-card-with-an-arduino/
https://oscarliang.com/sd-card-arduino/
Code by: Aarya Patel for the Creative Creatures Team :) :) :) !!!
*/

#include <LiquidCrystal.h>

#include "SD.h"
#define SD_ChipSelectPin 53
#include "TMRpcm.h"
#include "SPI.h"

TMRpcm tmrpcm;

const int RS = 35, RW = 34, DB4 = 33, DB5 = 32, DB6 = 31, DB7 = 30;
LiquidCrystal lcd (RS, RW, DB4, DB5, DB6, DB7);

#define LEDred 3
#define LEDwhite 2

long Rndm = 0;

void setup() {
 lcd.begin(16, 2);
 lcd.print (" Help! Help Me! ");
 randomSeed(analogRead (0)); 
 Serial.begin (9600);
 pinMode (LEDred, OUTPUT);
 pinMode (LEDwhite, OUTPUT);
 tmrpcm.speakerPin = 9;
 if (!SD.begin(SD_ChipSelectPin)) {
Serial.println("SD fail");
return;
 }
 tmrpcm.setVolume(6);
tmrpcm.play("Final.wav");
}

void loop() {
//Serial.println("SD Begin");
 //tmrpcm.setVolume(6);
//tmrpcm.play("Final.wav");
//delay(300000);
//Serial.println("SD Play");

/*digitalWrite (LEDwhite, HIGH);
delay (Rndm = random(1,10)*100);
digitalWrite (LEDwhite, LOW);
delay (Rndm = random(1,10)*100);
delay (1000);
digitalWrite (LEDred, HIGH);
delay (Rndm = random(1,10)*100);
digitalWrite (LEDred, LOW);
delay (Rndm = random(1,10)*100);
delay (1000);
digitalWrite (LEDwhite, HIGH);
delay (Rndm = random(1,10)*100);
digitalWrite (LEDwhite, LOW);
delay (Rndm = random(1,10)*100);
 int count = 0;*/
}
