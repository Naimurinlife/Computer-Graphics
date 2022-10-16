//done final
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

    int x1=100, y1=250, xn=200, yn=250;
    int x, y;
    double theta = 30, rad_theta;
    rad_theta = Convert(theta);

    x = xn*cos(rad_theta) - yn*sin(rad_theta);
    y = xn*sin(rad_theta) + yn*cos(rad_theta);

    cout << x << endl << y;

    line(x1, y1, xn, yn);
    line(x1, y1, x, y);



    getch();
    closegraph();
    return 0;
}









