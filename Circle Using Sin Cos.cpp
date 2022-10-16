#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;

double Convert(double degree)
{
    double pi = 3.14159;
    return (degree * (pi / 180));
}

int main()
{

    int gd = DETECT, gm;
	initgraph(&gd, &gm, "");

    float xc = 200, yc = 200, r = 100, x, y;
    float i;

    for(i=0; i<=360; i=i+0.5)
    {
        x = xc + r * cos(Convert(i));
        y = yc + r * sin(Convert(i));
        putpixel(round(x), round(y), 7);
        cout << i << " " << cos(Convert(i)) << " " <<  sin(Convert(i)) << endl;;
    }

    getch();
	closegraph();
    return 0;
}



