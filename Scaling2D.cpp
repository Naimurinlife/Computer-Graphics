//done final
#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;

int main()
{

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x1=50, y1=250, xn=150, yn=200;
    int x = 5, y = 1, newx, newy;

    newx = xn*x;
    newy = yn*y;

    cout << newx << endl << newy;

    line(x1, y1, xn, yn);
    line(x1, y1, newx, newy);



    getch();
    closegraph();
    return 0;
}










