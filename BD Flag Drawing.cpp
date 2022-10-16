#include<iostream>
#include<graphics.h>
int main()
{
    int gd = DETECT, gm, color;
    initgraph(&gd, &gm, "");

    setcolor(GREEN);
    setfillstyle(SOLID_FILL, GREEN);
    line(100,200,500,200);
    line(100,200,100,440);
    line(500,200,500,440);
    line(100,440,500,440);
    floodfill(101,201,GREEN);

    setcolor(RED);
    setfillstyle(SOLID_FILL, RED);
    circle(280,320,80);
    floodfill(280,320,RED);



    getch();
    closegraph();
}
