#include<iostream>
#include<graphics.h>
using namespace std;


int main()
{

    int gd = DETECT, gm;
	initgraph(&gd, &gm, "");

    int x1 = 20, y1 = 10, x2 = 30, y2 = 18;
    int del_y, del_x, pk, i, pk1, x, y;

    del_y = y2-y1;
    del_x = x2-x1;
    pk = 2*del_y - del_x;
    putpixel(x1,y1,RED);

    cout << del_y << endl << del_x << endl;

    x = x1; y = y1;

    for(i=1; i<=del_x; i++)
    {
        //pk = pk1;
        cout << pk << endl;
        if(pk<0)
        {
            pk = pk + 2*del_y;
            x = x+1; //y = y;
            putpixel(x, y, RED);
        }
        else
        {
            pk = pk + 2*del_y - 2*del_x;
            x = x+1; y = y+1;
            putpixel(x, y, RED);
        }

        //cout << pk << endl;
        delay(100);
    }

    getch();
	closegraph();
    return 0;
}


