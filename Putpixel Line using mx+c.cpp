#include<iostream>
#include<graphics.h>
#include<cmath>
using namespace std;

int main()
{
    int gd = DETECT, gm, color;
    initgraph(&gd, &gm, "");

    int x1, y1, x2, y2, i, x, y;
    float m, c;

    cout << "Enter x1 point: ";
    cin >> x1;
    cout << "Enter y1 point: ";
    cin >> y1;
    cout << "Enter x2 point: ";
    cin >> x2;
    cout << "Enter y2 point: ";
    cin >> y2;


    //x1 = 10; y1 = 15;
    //x2 = 300; y2 = 100;

    m = float(y2-y1)/float(x2-x1);
    c = y1 - m;
    //cout << m << endl << x2-x1 << endl;

    for(i=x1; i<x2; i++)
    {
        x = x1+i;
        y = round(m*x + c);
        //delay(1);
        //cout << y << " ";
        putpixel(x, y, WHITE);
    }

    //putpixel(100,200,WHITE);



    getch();
    closegraph();
}


