#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;



void plot(int xc, int yc, int x, int y)
{
    putpixel(xc+x, yc+y, WHITE);
    putpixel(xc-x, yc+y, WHITE);
    putpixel(xc+x, yc-y, WHITE);
    putpixel(xc+x, yc-y, WHITE);
    putpixel(xc+x, yc+y, WHITE);
    putpixel(xc+x, yc-y, WHITE);
    putpixel(xc-x, yc+y, WHITE);
    putpixel(xc-x, yc-y, WHITE);
}

int main()
{

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    float xc = 100, yc = 100, r = 50, x, y;
    float i;

    for(i=0; i<=90; i=i+0.5)
    {
        x = r * cos(Convert(i));
        y = r * sin(Convert(i));
        //putpixel(round(x), round(y), 7);
        plot(xc, yc, round(x), round(y));
        cout << i << " " << cos(Convert(i)) << " " <<  sin(Convert(i)) << endl;;
    }

    getch();
    closegraph();
    return 0;
}







