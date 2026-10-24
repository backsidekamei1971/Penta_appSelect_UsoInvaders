/*
 Name:		TouchTest.ino
 Created:	2019-12-25 12:52:14 AM
 Author:	Michael
*/

// the setup function runs once when you press reset or power the board

#include <Arduino.h>

#include <SPI.h>

#include <Adafruit_GFX.h>
#include <Waveshare4InchTftShield.h>

// Assign human-readable names to some common 16-bit color values:
#define	BLACK   0x0000
#define	BLUE    0x001F
#define	RED     0xF800
#define	GREEN   0x07E0
#define CYAN    0x07FF
#define MAGENTA 0xF81F
#define YELLOW  0xFFE0
#define WHITE   0xFFFF

int j=0;
//int xxx=0;


namespace
{
    Waveshare4InchTftShield Waveshield;
}

void setup() 
{
    SPI.begin();
    Waveshield.begin();

    Waveshield.setRotation(1);
    Waveshield.setTextSize(2);
    //Waveshield.print("Let's Draw!");

    Waveshield.setRotation(0);

    Waveshield.fillRect(0, 0, 80, 80, YELLOW); 
    Waveshield.setCursor(5,5);
    Waveshield.setTextColor(BLACK);
    Waveshield.print("CLEAR");

    Waveshield.fillRect(0, 80, 80, 80, MAGENTA);
    Waveshield.fillRect(0, 160, 80, 80, GREEN);
    Waveshield.fillRect(80,0,88,80, WHITE);
    Waveshield.fillRect(160, 0, 80, 80, BLUE);
    Waveshield.fillRect(240, 0, 80, 80, CYAN);
}

int i = 0;
int k = 0;
int app_select=0;

// the loop function runs over and over again until power down or reset
void loop()
{
    Waveshield.setRotation(0);
    //  Get raw touchscreen values.
    TSPoint p = Waveshield.getPoint();

    //  Remaps raw touchscreen values to screen co-ordinates.  Automatically handles
    //  rotation!
    Waveshield.normalizeTsPoint(p);



    //  Now that we have a point in screen co-ordinates, draw something there.
    //Waveshield.fillCircle(p.x, p.y, 3, BLUE);

    Waveshield.setRotation(0);

    if (p.x <= 80 && p.y <= 80 && p.x > 0 ) { //Clear button
      j=1;
      j=2;
    Waveshield.fillScreen(BLACK);
    app_select=0;

    Waveshield.setRotation(1);
    Waveshield.setTextSize(2);
    Waveshield.setCursor(5,5);
    Waveshield.setTextColor(WHITE);
    //Waveshield.print("Let's Draw!");

    Waveshield.setRotation(0);
    Waveshield.fillRect(0, 0, 80, 80, YELLOW); 

    Waveshield.setRotation(0);
    Waveshield.setCursor(5,5);
    Waveshield.setTextColor(BLACK);
    Waveshield.print("CLEAR");
    Waveshield.fillRect(0, 80, 80, 80, MAGENTA);
    Waveshield.fillRect(0, 160, 80, 80, GREEN);
    Waveshield.fillRect(80, 0, 80, 80, WHITE);
    Waveshield.fillRect(160, 0, 80, 80, BLUE);
    Waveshield.fillRect(240, 0, 80, 80, CYAN);
    }

    if (p.x <= 80 && p.y <= 160 && p.x > 0 && p.y >= 80 ) {  ////Cat`s EYE MAGENTA
    j=1;
    j=2;
      app_select=4;
    Waveshield.fillScreen(BLACK);

        Waveshield.setRotation(0);
    Waveshield.fillRect(0, 0, 80, 80, YELLOW); 

    Waveshield.setRotation(0);
    Waveshield.setCursor(5,5);
    Waveshield.setTextColor(BLACK);
    Waveshield.print("CLEAR");
    Waveshield.fillRect(0, 80, 80, 80, MAGENTA);
    Waveshield.fillRect(0, 160, 80, 80, GREEN);
    Waveshield.fillRect(80, 0, 80, 80, WHITE);
    Waveshield.fillRect(160, 0, 80, 80, BLUE);
    Waveshield.fillRect(240, 0, 80, 80, CYAN);

    Waveshield.fillRect(0, 80, 80, 80, MAGENTA);


    Waveshield.fillRect(95, 190, 10, 10, MAGENTA);
    Waveshield.fillRect(95, 230, 10, 10, MAGENTA);
    Waveshield.fillRect(105, 200, 10, 30, MAGENTA);
    Waveshield.fillRect(115, 190, 10, 10, MAGENTA);
    Waveshield.fillRect(115, 200, 10, 10, BLACK);
    Waveshield.fillRect(115, 210, 10, 10, MAGENTA);
    Waveshield.fillRect(115, 220, 10, 10, BLACK);
    Waveshield.fillRect(115, 230, 10, 10, MAGENTA);
    Waveshield.fillRect(125, 190, 10, 50, MAGENTA);
    Waveshield.fillRect(145, 190, 10, 10, MAGENTA);
    Waveshield.fillRect(145, 230, 10, 10, MAGENTA);
    Waveshield.fillRect(135, 200, 10, 10, MAGENTA);
    Waveshield.fillRect(135, 220, 10, 10, MAGENTA);

    Waveshield.fillRect(95, 250, 10, 10, MAGENTA);
    Waveshield.fillRect(95, 290, 10, 10, MAGENTA);
    Waveshield.fillRect(105, 260, 10, 30, MAGENTA);
    Waveshield.fillRect(115, 250, 10, 10, MAGENTA);
    Waveshield.fillRect(115, 260, 10, 10, BLACK);
    Waveshield.fillRect(115, 270, 10, 10, MAGENTA);
    Waveshield.fillRect(115, 280, 10, 10, BLACK);
    Waveshield.fillRect(115, 290, 10, 10, MAGENTA);
    Waveshield.fillRect(125, 250, 10, 50, MAGENTA);
    Waveshield.fillRect(145, 250, 10, 10, MAGENTA);
    Waveshield.fillRect(145, 290, 10, 10, MAGENTA);
    Waveshield.fillRect(135, 260, 10, 10, MAGENTA);
    Waveshield.fillRect(135, 280, 10, 10, MAGENTA);

    Waveshield.fillRect(95, 310, 10, 10, MAGENTA);
    Waveshield.fillRect(95, 350, 10, 10, MAGENTA);
    Waveshield.fillRect(105, 320, 10, 30, MAGENTA);
    Waveshield.fillRect(115, 310, 10, 10, MAGENTA);
    Waveshield.fillRect(115, 320, 10, 10, BLACK);
    Waveshield.fillRect(115, 330, 10, 10, MAGENTA);
    Waveshield.fillRect(115, 340, 10, 10, BLACK);
    Waveshield.fillRect(115, 350, 10, 10, MAGENTA);
    Waveshield.fillRect(125, 310, 10, 50, MAGENTA);
    Waveshield.fillRect(145, 310, 10, 10, MAGENTA);
    Waveshield.fillRect(145, 350, 10, 10, MAGENTA);
    Waveshield.fillRect(135, 320, 10, 10, MAGENTA);
    Waveshield.fillRect(135, 340, 10, 10, MAGENTA);
    k=0;
    }

        if (app_select==4){
    if (p.x <= 380 && p.y <= 450 && p.x > 70 && p.y >= 290){
    k=k+8;
    }
    if (p.x <= 380 && p.y <= 270 && p.x > 70 && p.y >= 110){
    k=k-8;
    }
    Waveshield.fillRect(280, 220+k, 35, 100, MAGENTA);
    Waveshield.fillRect(255, 253+k, 25, 33, MAGENTA);
    delay(100);
    Waveshield.fillRect(280, 220+k, 35, 100, BLACK);
    Waveshield.fillRect(255, 253+k, 25, 33, BLACK);


        }


    

    if (p.x <= 80 && p.y <= 240 && p.x > 0 && p.y >= 160 ) {   ////Cat`s EYE GREEN
    j=1;
    j=2;
      app_select=3;
    Waveshield.fillScreen(BLACK);

        Waveshield.setRotation(0);
    Waveshield.fillRect(0, 0, 80, 80, YELLOW); 

    Waveshield.setRotation(0);
    Waveshield.setCursor(5,5);
    Waveshield.setTextSize(2);
    Waveshield.setTextColor(BLACK);
    Waveshield.print("CLEAR");
    Waveshield.fillRect(0, 80, 80, 80, MAGENTA);
    Waveshield.fillRect(0, 160, 80, 80, GREEN);
    Waveshield.fillRect(80, 0, 80, 80, WHITE);
    Waveshield.fillRect(160, 0, 80, 80, BLUE);
    Waveshield.fillRect(240, 0, 80, 80, CYAN);

    Waveshield.fillRect(0, 160, 80, 80, GREEN);

    Waveshield.fillRect(180, 190, 10, 10, GREEN);
    Waveshield.fillRect(180, 230, 10, 10, GREEN);
    Waveshield.fillRect(190, 200, 10, 30, GREEN);
    Waveshield.fillRect(200, 190, 10, 10, GREEN);
    Waveshield.fillRect(200, 200, 10, 10, BLACK);
    Waveshield.fillRect(200, 210, 10, 10, GREEN);
    Waveshield.fillRect(200, 220, 10, 10, BLACK);
    Waveshield.fillRect(200, 230, 10, 10, GREEN);
    Waveshield.fillRect(210, 190, 10, 50, GREEN);
    Waveshield.fillRect(230, 190, 10, 10, GREEN);
    Waveshield.fillRect(230, 230, 10, 10, GREEN);
    Waveshield.fillRect(220, 200, 10, 10, GREEN);
    Waveshield.fillRect(220, 220, 10, 10, GREEN);

    Waveshield.fillRect(180, 250, 10, 10, GREEN);
    Waveshield.fillRect(180, 290, 10, 10, GREEN);
    Waveshield.fillRect(190, 260, 10, 30, GREEN);
    Waveshield.fillRect(200, 250, 10, 10, GREEN);
    Waveshield.fillRect(200, 260, 10, 10, BLACK);
    Waveshield.fillRect(200, 270, 10, 10, GREEN);
    Waveshield.fillRect(200, 280, 10, 10, BLACK);
    Waveshield.fillRect(200, 290, 10, 10, GREEN);
    Waveshield.fillRect(210, 250, 10, 50, GREEN);
    Waveshield.fillRect(230, 250, 10, 10, GREEN);
    Waveshield.fillRect(230, 290, 10, 10, GREEN);
    Waveshield.fillRect(220, 260, 10, 10, GREEN);
    Waveshield.fillRect(220, 280, 10, 10, GREEN);

    Waveshield.fillRect(180, 310, 10, 10, GREEN);
    Waveshield.fillRect(180, 350, 10, 10, GREEN);
    Waveshield.fillRect(190, 320, 10, 30, GREEN);
    Waveshield.fillRect(200, 310, 10, 10, GREEN);
    Waveshield.fillRect(200, 320, 10, 10, BLACK);
    Waveshield.fillRect(200, 330, 10, 10, GREEN);
    Waveshield.fillRect(200, 340, 10, 10, BLACK);
    Waveshield.fillRect(200, 350, 10, 10, GREEN);
    Waveshield.fillRect(210, 310, 10, 50, GREEN);
    Waveshield.fillRect(230, 310, 10, 10, GREEN);
    Waveshield.fillRect(230, 350, 10, 10, GREEN);
    Waveshield.fillRect(220, 320, 10, 10, GREEN);
    Waveshield.fillRect(220, 340, 10, 10, GREEN);

    Waveshield.fillRect(180, 370, 10, 10, GREEN);
    Waveshield.fillRect(180, 410, 10, 10, GREEN);
    Waveshield.fillRect(190, 380, 10, 30, GREEN);
    Waveshield.fillRect(200, 370, 10, 10, GREEN);
    Waveshield.fillRect(200, 380, 10, 10, BLACK);
    Waveshield.fillRect(200, 390, 10, 10, GREEN);
    Waveshield.fillRect(200, 400, 10, 10, BLACK);
    Waveshield.fillRect(200, 410, 10, 10, GREEN);
    Waveshield.fillRect(210, 370, 10, 50, GREEN);
    Waveshield.fillRect(230, 370, 10, 10, GREEN);
    Waveshield.fillRect(230, 410, 10, 10, GREEN);
    Waveshield.fillRect(220, 380, 10, 10, GREEN);
    Waveshield.fillRect(220, 400, 10, 10, GREEN);
    }

    if (p.x <= 160 && p.y <= 80 && p.x > 80 && p.y >= 0 ) {   ///Si is wonderful original Gamen
   // Waveshield.fillRect(80, 0, 80, 80, WHITE);
   //Waveshield.fillCircle(200, 200, 40, WHITE);
   // Waveshield.fillCircle(200, 400, 40, WHITE);
   j=0;
   app_select=1;
    Waveshield.fillRect(100, 100, 400, 400, WHITE);
    Waveshield.setRotation(1);
    Waveshield.fillRect(60, 230, 100, 50, CYAN);

    Waveshield.setCursor(50, 150);
    Waveshield.setTextColor(BLACK);
    Waveshield.setTextSize(3);
    Waveshield.print("Si is Wonderful!");

    Waveshield.setTextSize(2);
    Waveshield.setCursor(100, 250);
    Waveshield.setTextColor(BLACK);
    Waveshield.print("OK");
    Waveshield.setCursor(200, 250);
    Waveshield.fillRect(185, 230, 100, 50, CYAN);
    Waveshield.setTextColor(BLACK);
    Waveshield.print("Cancel");
    }
    if (app_select==1){
    if (p.x <= 295 && p.y <= 300 && p.x > 235 && p.y >= 200){  ///Si Wonderful Select menu gamen
        
        Waveshield.setRotation(1);



        if(j==2){

      Waveshield.setCursor(70, 150);
      Waveshield.setTextColor(WHITE);
      Waveshield.setTextSize(3);
      Waveshield.print("Sustainable!");
        }

      
      Waveshield.setTextSize(3);
      Waveshield.setCursor(50, 150);
      Waveshield.setTextColor(WHITE);
      Waveshield.print("Si is Wonderful!");
      Waveshield.setCursor(30, 150);
      Waveshield.setTextColor(BLACK);
      Waveshield.print("Let`s Start WWIII !");
      j=1;

    }
    }
    if (app_select==1){
      if (p.x <= 295 && p.y <= 450 && p.x > 235 && p.y >= 350){  ///Si Wonderful Select menu gamen
     Waveshield.setRotation(1);


        if(j==1){
      Waveshield.setCursor(30, 150);
      Waveshield.setTextColor(WHITE);
      Waveshield.setTextSize(3);
      Waveshield.print("Let`s Start WWIII !");    
        }

      
      Waveshield.setTextSize(3);
      Waveshield.setCursor(50, 150);
      Waveshield.setTextColor(WHITE);
      Waveshield.print("Si is Wonderful!");
      Waveshield.setCursor(70, 150);
      Waveshield.setTextColor(BLACK);
      Waveshield.print("Sustainable!");
      j=2;
      }
    }
    

      Waveshield.setRotation(0);
    if (p.x <= 240 && p.y <= 80 && p.x > 160 && p.y >= 0 ) {  ////Block Kuzushi Gamen
    j=1;
    j=2;
     app_select=2;
    Waveshield.fillScreen(BLACK);

    Waveshield.fillRect(0, 0, 80, 80, YELLOW); 
    Waveshield.setRotation(0);
    Waveshield.setCursor(5,5);
    Waveshield.setTextSize(2);
    Waveshield.setTextColor(BLACK);
    Waveshield.print("CLEAR");
    Waveshield.fillRect(0, 80, 80, 80, MAGENTA);
    Waveshield.fillRect(0, 160, 80, 80, GREEN);
    Waveshield.fillRect(80, 0, 80, 80, WHITE);
    Waveshield.fillRect(160, 0, 80, 80, BLUE);
    Waveshield.fillRect(240, 0, 80, 80, CYAN);

    Waveshield.fillRect(90, 370, 20, 80, RED);
    Waveshield.fillRect(90, 280, 20, 80, MAGENTA);
    Waveshield.fillRect(90, 190, 20, 80, YELLOW);
    Waveshield.fillRect(90, 100, 20, 80, GREEN);

    Waveshield.fillRect(120, 370, 20, 80, RED);
    Waveshield.fillRect(120, 280, 20, 80, MAGENTA);
    Waveshield.fillRect(120, 190, 20, 80, YELLOW);
    Waveshield.fillRect(120, 100, 20, 80, GREEN);

    Waveshield.fillRect(150, 370, 20, 80, RED);
    Waveshield.fillRect(150, 280, 20, 80, MAGENTA);
    Waveshield.fillRect(150, 190, 20, 80, YELLOW);
    Waveshield.fillRect(150, 100, 20, 80, GREEN);

    Waveshield.fillCircle(190, 230, 9, WHITE);
    k=0;
    }
    if (app_select==2){
    if (p.x <= 380 && p.y <= 450 && p.x > 70 && p.y >= 290){
    k=k+8;
    }
    if (p.x <= 380 && p.y <= 270 && p.x > 70 && p.y >= 110){
    k=k-8;
    }
    //Waveshield.fillRect(250, 230+k, 20, 80, WHITE);
    //Waveshield.fillRect(250, 230+k, 20, 80, BLACK);
    //delay(100);
    //Waveshield.fillRect(280, 130+k, 20, 80, WHITE);
    //Waveshield.fillRect(280, 130+k, 20, 80, BLACK);
    //delay(100);
    Waveshield.fillRect(280, 330+k, 20, 80, WHITE);
    delay(200);
    Waveshield.fillRect(280, 330+k, 20, 80, BLACK);
    //delay(100);
    }
    

  if (p.x <= 320 && p.y <= 80 && p.x > 240 && p.y >= 0 ){  //touch calculator gamen
   j=1;
   j=2;

    app_select=5;


    Waveshield.fillScreen(BLACK);

            Waveshield.setRotation(0);
    Waveshield.fillRect(0, 0, 80, 80, YELLOW); 

    Waveshield.setRotation(0);
    Waveshield.setCursor(5,5);
    Waveshield.setTextSize(2);
    Waveshield.setTextColor(BLACK);
    Waveshield.print("CLEAR");
    //Waveshield.fillRect(0, 80, 80, 80, MAGENTA);
    //Waveshield.fillRect(0, 160, 80, 80, GREEN);
    Waveshield.fillRect(80, 0, 80, 80, WHITE);
    Waveshield.fillRect(160, 0, 80, 80, BLUE);
    Waveshield.fillRect(240, 0, 80, 80, CYAN);

    Waveshield.drawRect(0,150,60,240, MAGENTA);

    Waveshield.fillRect(80,160,60,60, WHITE);
    Waveshield.setCursor(280,90);
    Waveshield.setRotation(1);
    Waveshield.setTextSize(5);
    Waveshield.setTextColor(BLACK);
    Waveshield.print("3");
    Waveshield.setRotation(0);

    Waveshield.fillRect(80,240,60,60, WHITE);
    Waveshield.setCursor(200,90);
    Waveshield.setRotation(1);
    Waveshield.setTextSize(5);
    Waveshield.setTextColor(BLACK);
    Waveshield.print("2");
    Waveshield.setRotation(0);

    Waveshield.fillRect(80,320,60,60, WHITE);
    Waveshield.setCursor(120,90);
    Waveshield.setRotation(1);
    Waveshield.setTextSize(5);
    Waveshield.setTextColor(BLACK);
    Waveshield.print("1");
    Waveshield.setRotation(0);

    Waveshield.fillRect(160,160,60,60, WHITE);
    Waveshield.setCursor(280,170);
    Waveshield.setRotation(1);
    Waveshield.setTextSize(5);
    Waveshield.setTextColor(BLACK);
    Waveshield.print("6");
    Waveshield.setRotation(0);

    Waveshield.fillRect(160,240,60,60, WHITE);
    Waveshield.setCursor(200,170);
    Waveshield.setRotation(1);
    Waveshield.setTextSize(5);
    Waveshield.setTextColor(BLACK);
    Waveshield.print("5");
    Waveshield.setRotation(0);

    Waveshield.fillRect(160,320,60,60, WHITE);
    Waveshield.setCursor(120,170);
    Waveshield.setRotation(1);
    Waveshield.setTextSize(5);
    Waveshield.setTextColor(BLACK);
    Waveshield.print("4");
    Waveshield.setRotation(0);

    Waveshield.fillRect(240,160,60,60, WHITE);
    Waveshield.setCursor(280,250);
    Waveshield.setRotation(1);
    Waveshield.setTextSize(5);
    Waveshield.setTextColor(BLACK);
    Waveshield.print("9");
    Waveshield.setRotation(0);


    Waveshield.fillRect(240,240,60,60, WHITE);
    Waveshield.setCursor(200,250);
    Waveshield.setRotation(1);
    Waveshield.setTextSize(5);
    Waveshield.setTextColor(BLACK);
    Waveshield.print("8");
    Waveshield.setRotation(0);

    Waveshield.fillRect(240,320,60,60, WHITE);
    Waveshield.setCursor(120,250);
    Waveshield.setRotation(1);
    Waveshield.setTextSize(5);
    Waveshield.setTextColor(BLACK);
    Waveshield.print("7");
  }
   
   if (app_select==5){
    if (p.x <= 140 && p.y <= 400 && p.x > 80 && p.y > 340) {    //80,320,60,60
    //Waveshield.fillScreen(BLACK);
    Waveshield.drawRect(0,150,60,250, MAGENTA);
    Waveshield.fillRect(0,150,60,240, BLACK);
    Waveshield.drawRect(0,150,60,250, MAGENTA);
    Waveshield.setRotation(1);
    Waveshield.setTextSize(5);
    Waveshield.setCursor(200,8);
    Waveshield.setTextColor(WHITE);
    Waveshield.print("1");
   }

   if (p.x <= 140 && p.y <= 320 && p.x > 80 && p.y > 260) {    //80,320,60,60
    //Waveshield.fillScreen(BLACK);
    Waveshield.drawRect(0,150,60,250, MAGENTA);
    Waveshield.fillRect(0,150,60,240, BLACK);
    Waveshield.drawRect(0,150,60,250, MAGENTA);
    Waveshield.setRotation(1);
    Waveshield.setTextSize(5);
    Waveshield.setCursor(200,8);
    Waveshield.setTextColor(WHITE);
    Waveshield.print("2");
   }

    if (p.x <= 140 && p.y <= 220 && p.x > 80 && p.y > 160) {    //80,320,60,60
    //Waveshield.fillScreen(BLACK);
    Waveshield.drawRect(0,150,60,250, MAGENTA);
    Waveshield.fillRect(0,150,60,240, BLACK);
    Waveshield.drawRect(0,150,60,250, MAGENTA);
    Waveshield.setRotation(1);
    Waveshield.setTextSize(5);
    Waveshield.setCursor(200,8);
    Waveshield.setTextColor(WHITE);
    Waveshield.print("3");
   }

    if (p.x <= 240 && p.y <= 380 && p.x > 180 && p.y > 320) {    //80,320,60,60
    //Waveshield.fillScreen(BLACK);
    Waveshield.drawRect(0,150,60,250, MAGENTA);
    Waveshield.fillRect(0,150,60,240, BLACK);
    Waveshield.drawRect(0,150,60,250, MAGENTA);
    Waveshield.setRotation(1);
    Waveshield.setTextSize(5);
    Waveshield.setCursor(200,8);
    Waveshield.setTextColor(WHITE);
    Waveshield.print("4");
   }

    if (p.x <= 240 && p.y <= 300 && p.x > 180 && p.y > 240) {    //80,320,60,60
    //Waveshield.fillScreen(BLACK);
    Waveshield.drawRect(0,150,60,250, MAGENTA);
    Waveshield.fillRect(0,150,60,240, BLACK);
    Waveshield.drawRect(0,150,60,250, MAGENTA);
    Waveshield.setRotation(1);
    Waveshield.setTextSize(5);
    Waveshield.setCursor(200,8);
    Waveshield.setTextColor(WHITE);
    Waveshield.print("5");
   }

    if (p.x <= 240 && p.y <= 220 && p.x > 180 && p.y > 160) {    //80,320,60,60
    //Waveshield.fillScreen(BLACK);
    Waveshield.drawRect(0,150,60,250, MAGENTA);
    Waveshield.fillRect(0,150,60,240, BLACK);
    Waveshield.drawRect(0,150,60,250, MAGENTA);
    Waveshield.setRotation(1);
    Waveshield.setTextSize(5);
    Waveshield.setCursor(200,8);
    Waveshield.setTextColor(WHITE);
    Waveshield.print("6");
   }

    if (p.x <= 320 && p.y <= 360 && p.x > 260 && p.y > 300) {    //80,320,60,60
    //Waveshield.fillScreen(BLACK);
    Waveshield.drawRect(0,150,60,250, MAGENTA);
    Waveshield.fillRect(0,150,60,240, BLACK);
    Waveshield.drawRect(0,150,60,250, MAGENTA);
    Waveshield.setRotation(1);
    Waveshield.setTextSize(5);
    Waveshield.setCursor(200,8);
    Waveshield.setTextColor(WHITE);
    Waveshield.print("7");
   }

    if (p.x <= 320 && p.y <= 300 && p.x > 260 && p.y > 240) {    //80,320,60,60
    //Waveshield.fillScreen(BLACK);
    Waveshield.drawRect(0,150,60,250, MAGENTA);
    Waveshield.fillRect(0,150,60,240, BLACK);
    Waveshield.drawRect(0,150,60,250, MAGENTA);
    Waveshield.setRotation(1);
    Waveshield.setTextSize(5);
    Waveshield.setCursor(200,8);
    Waveshield.setTextColor(WHITE);
    Waveshield.print("8");
   }

    if (p.x <= 320 && p.y <= 220 && p.x > 260 && p.y > 160) {    //80,320,60,60
    //Waveshield.fillScreen(BLACK);
    Waveshield.drawRect(0,150,60,250, MAGENTA);
    Waveshield.fillRect(0,150,60,240, BLACK);
    Waveshield.drawRect(0,150,60,250, MAGENTA);
    Waveshield.setRotation(1);
    Waveshield.setTextSize(5);
    Waveshield.setCursor(200,8);
    Waveshield.setTextColor(WHITE);
    Waveshield.print("9");
    }
   
   
  }
  

    }
