//https://www.fastmetrics.com/support/it-wav-file/
//https://www.arduino.cc/en/Tutorial/SimpleAudioPlayer?action=sourceblock&num=1
//https://maxoffsky.com/maxoffsky-blog/how-to-play-wav-audio-files-with-arduino-uno-and-microsd-card/

#include <LiquidCrystal.h>

#include <SD.h>
#include <SPI.h>
#include <Audio.h>

LiquidCrystal lcd (12, 11, 5, 4, 3, 2);

#define LEDone 13
#define LEDtwo 12
#define LEDthree 11
#define LEDfour 10
#define LEDfive 9

long Rndm = 0;

void setup() {
 pinMode(LEDone, OUTPUT);
 pinMode(LEDtwo, OUTPUT);
 pinMode(LEDthree, OUTPUT);
 pinMode(LEDfour, OUTPUT);
 pinMode(LEDfive, OUTPUT);
 randomSeed(analogRead (A0)); 
 Serial.begin (9600);
 Audio.begin (88200, 100);
}

void loop() {
 lcd.begin (16, 2);
 lcd.print ("Help! Circuits");
 lcd.setCursor (0,1);
 lcd.print ("running slow...");
 lcd.clear();

digitalWrite (LEDone, HIGH);
delay (Rndm = random(1,10)*100);
digitalWrite (LEDone, LOW);
delay (Rndm = random(1,10)*100);
digitalWrite (LEDtwo, HIGH);
delay (Rndm = random(1,10)*100);
digitalWrite (LEDtwo, LOW);
delay (Rndm = random(1,10)*100);
digitalWrite (LEDthree, HIGH);
delay (Rndm = random(1,10)*100);
digitalWrite (LEDthree, LOW);
delay (Rndm = random(1,10)*100);
digitalWrite (LEDfour, HIGH);
delay (Rndm = random(1,10)*100);
digitalWrite (LEDfour, LOW);
delay (Rndm = random(1,10)*100);
digitalWrite (LEDfive, HIGH);
delay (Rndm = random(1,10)*100);
digitalWrite (LEDfive, LOW);
delay (Rndm = random(1,10)*100);

int count = 0;

File myFile = SD.open("RAMRecording.wav");
const int S = 1024;
short buffer [S];
while (myFile.available()) { 
  myFile.read (buffer, sizeof (buffer));

  int volume = 1024;
  Audio.prepare (buffer, S, volume);
  Audio.write (buffer, S);
}
}

myFile.close();

}

}
