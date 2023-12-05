#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

void circle_sym(int x, int y, int p, int h, int k, int c){
    putpixel(h+x, p-k+y, c);
    putpixel(h+y, p-k+x, c);
    putpixel(h-y, p-k+x, c);
    putpixel(h-x, p-k+y, c);
    putpixel(h-x, p-k-y, c);
    putpixel(h-y, p-k-x, c);
    putpixel(h+y, p-k-x, c);
    putpixel(h+x, p-k-y, c);
}

int main(){
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");

    int r, x, y, h, k, OA;
    cout << "Enter the co-ordinate of Circle's Center (h,k): ";
    cin >> h >> k;
    cout << "Enter the radius: ";
    cin >> r;
    int p = getmaxy();

    OA = r / sqrt(2);
    for(x=0; x<=OA; x++){
        y = sqrt(r*r - x*x);
        circle_sym(x, y, p, h, k, 12);
        delay(20);
    }
    getch();
    closegraph();
    return 0;
}
