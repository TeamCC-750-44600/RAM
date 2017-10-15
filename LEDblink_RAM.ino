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
 randomSeed(analogRead(A0));
}

void loop() {
  // put your main code here, to run repeatedly:
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
}
