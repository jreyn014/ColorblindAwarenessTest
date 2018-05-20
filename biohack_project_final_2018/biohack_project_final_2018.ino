// testshapes demo for Adafruit RGBmatrixPanel library.
// Demonstrates the drawing abilities of the RGBmatrixPanel library.
// For 32x32 RGB LED matrix:
// http://www.adafruit.com/products/607

// Written by Limor Fried/Ladyada & Phil Burgess/PaintYourDragon
// for Adafruit Industries.
// BSD license, all text above must be included in any redistribution.

#include <Adafruit_GFX.h>   // Core graphics library
#include <RGBmatrixPanel.h> // Hardware-specific library

// If your 32x32 matrix has the SINGLE HEADER input,
// use this pinout:
#define CLK 8  // MUST be on PORTB! (Use pin 11 on Mega)
#define OE  9
#define LAT 10
#define A   A0
#define B   A1
#define C   A2
#define D   A3
// If your matrix has the DOUBLE HEADER input, use:
//#define CLK 8  // MUST be on PORTB! (Use pin 11 on Mega)
//#define LAT 9
//#define OE  10
//#define A   A3
//#define B   A2
//#define C   A1
//#define D   A0

RGBmatrixPanel matrix(A, B, C, D, CLK, LAT, OE, false);
const int buttonPin = 12;     // the number of the pushbutton pin

void setup() {
  // put your setup code here, to run once:
  matrix.begin();
//  state = 1;
  pinMode(buttonPin, INPUT);
  
}

void loop() {

  matrix.setCursor(1,0);
  matrix.setTextSize(.25);
  matrix.setTextWrap(false);


  while(digitalRead(buttonPin) != HIGH);
  
  matrix.setTextColor(matrix.Color888(0,0,255));
  matrix.println("Color");
  matrix.println("Blind");
  matrix.println("Test");

  delay(2000);

  matrix.fillScreen(matrix.Color888(0,0,0));

  delay(1000);

  matrix.setCursor(1,0);
  //matrix.setTextSize(.25);
  matrix.setTextColor(matrix.Color888(128,0,128));
  matrix.println("Norm");
  matrix.println('v');
  matrix.println("Pro");

  delay(2000);
    matrix.fillRect(0, 0, 8, 8, matrix.Color888(128, 0, 128));      //purple         correct
    matrix.fillRect(8, 0, 8, 8, matrix.Color888(104, 96, 66));      //brown(P)     
    matrix.fillRect(16, 0, 8, 8, matrix.Color888(255, 247, 220));   //yellow(P)
    matrix.fillRect(24, 0, 8, 8, matrix.Color888(165, 42, 42));     //brown

    matrix.fillRect(0, 8, 8, 8, matrix.Color888(255, 255, 0));      //yellow
    matrix.fillRect(8, 8, 8, 8, matrix.Color888(255, 0, 0));        //red
    matrix.fillRect(16, 8, 8, 8, matrix.Color888(0, 77, 151));      //purple(P)
    matrix.fillRect(24, 8, 8, 8, matrix.Color888(211, 188, 20));    //orange(P)

    matrix.fillRect(0, 16, 8, 8, matrix.Color888(255, 165, 0));     //orange
    matrix.fillRect(8, 16, 8, 8, matrix.Color888(255, 192, 203));   //Pink
    matrix.fillRect(16, 16, 8, 8, matrix.Color888(149, 134, 35));   //Red(P)
    matrix.fillRect(24, 16, 8, 8, matrix.Color888(0, 83, 160));     //Blue(P)

    matrix.fillRect(0, 24, 8, 8, matrix.Color888(0, 128, 128));     //Teal
    matrix.fillRect(8, 24, 8, 8, matrix.Color888(0, 58, 113));      //Indigo(P)
    matrix.fillRect(16, 24, 8, 8, matrix.Color888(128, 0, 128));    //Purple        correct
    matrix.fillRect(24, 24, 8, 8, matrix.Color888(75, 0, 130));     //Indigo

      while(digitalRead(buttonPin) != HIGH); //ans test 1

    matrix.fillRect(0, 0, 8, 8, matrix.Color888(128, 0, 128));      //purple     correct
    matrix.fillRect(8, 0, 8, 8, matrix.Color888(165, 42, 42));      //brown
    matrix.fillRect(16, 0, 8, 8, matrix.Color888(255, 255, 0));   //yellow
    matrix.fillRect(24, 0, 8, 8, matrix.Color888(165, 42, 42));     //brown

    matrix.fillRect(0, 8, 8, 8, matrix.Color888(255, 255, 0));      //yellow
    matrix.fillRect(8, 8, 8, 8, matrix.Color888(255, 0, 0));        //red
    matrix.fillRect(16, 8, 8, 8, matrix.Color888(128, 0, 128));      //purple
    matrix.fillRect(24, 8, 8, 8, matrix.Color888(255, 165, 0));    //orange

    matrix.fillRect(0, 16, 8, 8, matrix.Color888(255, 165, 0));     //orange
    matrix.fillRect(8, 16, 8, 8, matrix.Color888(255, 192, 203));   //Pink
    matrix.fillRect(16, 16, 8, 8, matrix.Color888(255, 0, 0));   //Red
    matrix.fillRect(24, 16, 8, 8, matrix.Color888(0, 0, 255));     //Blue

    matrix.fillRect(0, 24, 8, 8, matrix.Color888(0, 128, 128));     //Teal
    matrix.fillRect(8, 24, 8, 8, matrix.Color888(75, 0, 130));      //Indigo
    matrix.fillRect(16, 24, 8, 8, matrix.Color888(128, 0, 128));    //Purple    correct
    matrix.fillRect(24, 24, 8, 8, matrix.Color888(75, 0, 130));     //Indigo

    delay(150); //after test 1
    while(digitalRead(buttonPin) != HIGH);


      matrix.fillScreen(matrix.Color888(0,0,0));

    delay(1000);

    matrix.setCursor(1,0);
  //matrix.setTextSize(.25);
  matrix.setTextColor(matrix.Color888(128,0,128));
  matrix.println("Norm");
  matrix.println('v');
  matrix.println("Deut");

  delay(2000);

    matrix.fillRect(0, 0, 8, 8, matrix.Color888(166, 127, 0));      //Red(D)       correct
    matrix.fillRect(8, 0, 8, 8, matrix.Color888(165, 42, 42));      //Brown
    matrix.fillRect(16, 0, 8, 8, matrix.Color888(0, 128, 128));     //teal
    matrix.fillRect(24, 0, 8, 8, matrix.Color888(233, 204, 203));   //Pink(D)

    matrix.fillRect(0, 8, 8, 8, matrix.Color888(0, 255, 0));        //green
    matrix.fillRect(8, 8, 8, 8, matrix.Color888(166, 127, 0));        //red(D)          correct
    matrix.fillRect(16, 8, 8, 8, matrix.Color888(75, 0, 130));      //indigo
    matrix.fillRect(24, 8, 8, 8, matrix.Color888(255, 255, 0));    //yellow

    matrix.fillRect(0, 16, 8, 8, matrix.Color888(119, 92, 44));     //brown(D)
    matrix.fillRect(8, 16, 8, 8, matrix.Color888(235, 179, 0));   //Orange(D)
    matrix.fillRect(16, 16, 8, 8, matrix.Color888(0, 0, 255));   //Blue
    matrix.fillRect(24, 16, 8, 8, matrix.Color888(53, 79, 121));     //Purple(D)

    matrix.fillRect(0, 24, 8, 8, matrix.Color888(0, 61, 98));     //Indigo(D)
    matrix.fillRect(8, 24, 8, 8, matrix.Color888(255, 0, 0));      //Red
    matrix.fillRect(16, 24, 8, 8, matrix.Color888(255, 215, 159));    //Green(D)
    matrix.fillRect(24, 24, 8, 8, matrix.Color888(123, 119, 140));     //Teal(D)

  while(digitalRead(buttonPin) != HIGH);

    matrix.fillRect(0, 0, 8, 8, matrix.Color888(255, 0, 0));      //Red                    correct
    matrix.fillRect(8, 0, 8, 8, matrix.Color888(165, 42, 42));      //Brown
    matrix.fillRect(16, 0, 8, 8, matrix.Color888(0, 128, 128));     //teal
    matrix.fillRect(24, 0, 8, 8, matrix.Color888(255, 192, 203));   //Pink

    matrix.fillRect(0, 8, 8, 8, matrix.Color888(0, 255, 0));        //green
    matrix.fillRect(8, 8, 8, 8, matrix.Color888(255, 0, 0));        //red            correct
    matrix.fillRect(16, 8, 8, 8, matrix.Color888(75, 0, 130));      //indigo
    matrix.fillRect(24, 8, 8, 8, matrix.Color888(255, 255, 0));    //yellow

    matrix.fillRect(0, 16, 8, 8, matrix.Color888(165, 42, 42));     //brown
    matrix.fillRect(8, 16, 8, 8, matrix.Color888(255, 165, 0));   //Orange
    matrix.fillRect(16, 16, 8, 8, matrix.Color888(0, 0, 255));   //Blue
    matrix.fillRect(24, 16, 8, 8, matrix.Color888(128, 0, 128));     //Purple

    matrix.fillRect(0, 24, 8, 8, matrix.Color888(75, 0, 130));     //Indigo
    matrix.fillRect(8, 24, 8, 8, matrix.Color888(255, 0, 0));      //Red
    matrix.fillRect(16, 24, 8, 8, matrix.Color888(0, 255, 0));    //Green
    matrix.fillRect(24, 24, 8, 8, matrix.Color888(0, 128, 128));     //Teal

    delay(150); //after test 2
  while(digitalRead(buttonPin) != HIGH);

      matrix.fillScreen(matrix.Color888(0,0,0));

    delay(1000);

  matrix.setCursor(1,0);
  //matrix.setTextSize(.25);
  matrix.setTextColor(matrix.Color888(128,0,128));
  matrix.println("Norm");
  matrix.println('v');
  matrix.println("Tri");

  delay(2000);

    matrix.fillRect(0,0,8,8, matrix.Color888(128,0,128)); //norm purp
    matrix.fillRect(8,0,8,8, matrix.Color888(253,28,0)); //tri red                       correct
    matrix.fillRect(16,0,8,8, matrix.Color888(255,244,249)); //tri yellow
    matrix.fillRect(24,0,8,8, matrix.Color888(0,0,255)); //blue
    
    matrix.fillRect(0,8,8,8, matrix.Color888(253,28,0)); // tri red                     correct
    matrix.fillRect(8,8,8,8, matrix.Color888(64, 58, 62)); // tri indigo
    matrix.fillRect(16,8,8,8, matrix.Color888(255, 192,203)); // pink
    matrix.fillRect(24,8,8,8, matrix.Color888(255, 255, 0)); // yellow
    
    matrix.fillRect(0,16,8,8, matrix.Color888(124, 237, 255)); // tri green
    matrix.fillRect(8,16,8,8, matrix.Color888(0,128,128)); //teal
    matrix.fillRect(16,16,8,8, matrix.Color888(30,133,143)); // tri teal
    matrix.fillRect(24,16,8,8, matrix.Color888(169,52,54)); // tri brown
    
    matrix.fillRect(0,24,8,8, matrix.Color888(75, 0, 130)); // indigo
    matrix.fillRect(8,24,8,8, matrix.Color888(255, 162, 71)); //tri orange
    matrix.fillRect(16,24,8,8, matrix.Color888(255, 165, 0)); // orange
    matrix.fillRect(24,24,8,8, matrix.Color888(0, 0, 255)); //red
    
      while(digitalRead(buttonPin) != HIGH);

    
    matrix.fillRect(0,0,8,8, matrix.Color888(128,0,128)); //norm purp
    matrix.fillRect(8,0,8,8, matrix.Color888(255,0,0)); //red                               correct
    matrix.fillRect(16,0,8,8, matrix.Color888(255,255,0)); //yellow
    matrix.fillRect(24,0,8,8, matrix.Color888(0,0,255)); //blue
    
    matrix.fillRect(0,8,8,8, matrix.Color888(255, 0,0)); //  red                           correct
    matrix.fillRect(8,8,8,8, matrix.Color888(128, 0, 128)); // indigo
    matrix.fillRect(16,8,8,8, matrix.Color888(255, 192,203)); // pink
    matrix.fillRect(24,8,8,8, matrix.Color888(255, 255, 0)); // yellow
    
    matrix.fillRect(0,16,8,8, matrix.Color888(0, 255,0)); // green
    matrix.fillRect(8,16,8,8, matrix.Color888(0,128,128)); //teal
    matrix.fillRect(16,16,8,8, matrix.Color888(0,128,128)); // teal
    matrix.fillRect(24,16,8,8, matrix.Color888(165,42,42)); // brown
    
    matrix.fillRect(0,24,8,8, matrix.Color888(75, 0, 130)); // indigo
    matrix.fillRect(8,24,8,8, matrix.Color888(255,165,0)); //orange
    matrix.fillRect(16,24,8,8, matrix.Color888(255, 165, 0)); // orange
    matrix.fillRect(24,24,8,8, matrix.Color888(0, 0, 255)); //red

    delay(150);
      while(digitalRead(buttonPin) != HIGH);
    delay(250);


   matrix.fillScreen(matrix.Color888(0,0,0));
  // put your main code here, to run repeatedly:

}
