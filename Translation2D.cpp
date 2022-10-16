
#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;

int main()
{

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x1=100, y1=250, xn=200, yn=200;
    int x = 50, y = 50;

    line(x1, y1, xn, yn);
    line(x1, y1, xn+x, yn+y);



    getch();
    closegraph();
    return 0;
}









