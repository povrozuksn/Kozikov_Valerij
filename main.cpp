



#include "TXLib.h"



void drawfon()

{

    //небо
    txSetColor (RGB ( 128, 255, 255));
    txSetFillColor (RGB ( 128, 255, 255));
     txRectangle (0, 0, 1200, 600);
     //

    //песок
     txSetColor (RGB ( 255, 255, 128));
    txSetFillColor (RGB ( 255, 255, 128));
txRectangle (0, 500, 1200, 600);
//
}




void Sun(int x, int y)
{
//солнце
txSetColor (RGB ( 255, 255, 0));
txSetFillColor (RGB ( 255, 255, 0));
txCircle (x, y, 50);
//
}

void drawCar(int x, int y)
{
//Машина
txSetColor (TX_WHITE);
txSetFillColor (TX_BLACK);
POINT Car[7] = {{x, y}, {x+500, y}, {x+560, y+110}, {x+800, y+110}, {x+800, y+250}, {x, y+250}, {x, y}};
txPolygon (Car, 7);
txSetColor (TX_BLACK,3);
txSetFillColor (TX_WHITE);
txCircle (x+600, y+250, 50);
txCircle (x+190, y+250, 50);
txSetColor (TX_WHITE,3);
txSetFillColor (TX_BLACK);
}
//void door(int x, int y)
//{
//POINT door[5] = {{440, 215},  {510, 215}, {560, 315}, {560, 410}, {440, 410}};
//txPolygon (door, 5);
//POINT glass[4] = {{450, 315},  {450, 235}, {505, 240},{550, 320}};
//txPolygon (glass, 4);
//txSetColor (TX_BLACK);
//}

int main()
{

   int xSun=65;
   int ySun=60;
   int xCar=40;
   int yCar=200;
   int yText=1500;



txCreateWindow (1200, 600);

while (yText > -10)
{
txBegin();
txSetColor (TX_WHITE);
txSetFillColor (TX_BLACK);
txRectangle (0, 0, 1200, 600);
txSelectFont ("Comic Sans MS", 100);
txDrawText  (0, yText-600, 1200, yText, "КПСС  СССР \n"
                                             "\n"
                                           "представляет.\n");

yText=yText-10;
txEnd();
txSleep(50);




}
yText=1500;
while (yText > -50)
{
txBegin();
txSetColor (TX_WHITE);
txSetFillColor (TX_BLACK);
txRectangle (0, 0, 1200, 600);
txSelectFont ("Comic Sans MS", 100);
txDrawText  (0, yText-600, 1200, yText, "при поддержке\n"
                                             "\n"
                                           "Ленина и Сталина .\n");

yText=yText-10;
txEnd();
txSleep(50);
}



txSelectFont ("Comic Sans MS", 50);
txDrawText  (0, 0, 1200, 600, "б/у универсал распилили на нужды КПСС");
txSleep(9000);






while(xSun<800)
{
txBegin();
drawfon();
drawCar(xCar,yCar);
Sun(xSun,ySun);
//ySun=ySun+5;
xSun=xSun+10;
xCar=xCar+5;
txSleep(50);
txEnd();
}
yText=1500;
while (yText > -50)

{
txBegin();
txSetColor (TX_WHITE);
txSetFillColor (TX_BLACK);
txRectangle (0, 0, 1200, 600);
txSelectFont ("Comic Sans MS", 50);
txDrawText  (0, yText-600, 1200, yText, "а потом он уехал в закат\n"
                                             "\n"
                                           "конец .\n");
yText=yText-10;
txEnd();
txSleep(50);
}





    return 0;
    }

