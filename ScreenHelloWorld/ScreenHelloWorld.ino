#include <TFT.h>  // Arduino LCD library
#include <SPI.h>

// pin definition for the Uno
#define cs   10
#define dc   9
#define rst  8  

// create an instance of the library
TFT myScreen = TFT(cs, dc, rst);
int xPos = 80;
int yPos = 64;

int xDir = 5;
int yDir = 5;

int colorGradient = 1;

int xPrev = xPos;
int yPrev = yPos;

int backgroundRed = 255;
int backgroundGreen = 255;
int backgroundBlue = 255;

int pointRed = 0;
int pointGreen = 0;
int pointBlue = 0;

void setup() {
  myScreen.begin();
  myScreen.background(backgroundRed, backgroundGreen, backgroundBlue);
  myScreen.stroke (backgroundRed, backgroundGreen, backgroundBlue);
}

void loop() {
  xPos = xPos + xDir;
  yPos = yPos + yDir;
  
  if (xPos != xPrev || yPos != yPrev) {
    myScreen.stroke (backgroundRed, backgroundGreen, backgroundBlue);
    myScreen.circle (xPrev, yPrev,5);
  }
  
  
  
  myScreen.stroke (pointRed, pointGreen, pointBlue);
  myScreen.circle (xPos, yPos, 5);
  
  // if the x or x position is at the screen edges, reverse direction
  if(xPos+5 >= 160 || xPos-5 <= 0){
    xDir = xDir*-1;
  }
  if(yPos+5 >= 128 || yPos-5 <= 0){
    yDir = yDir*-1;
  }
  
  // update the point's previous location
  xPrev=xPos;
  yPrev=yPos;
  
  delay(33);
  
}

