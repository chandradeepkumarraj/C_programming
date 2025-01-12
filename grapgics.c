
#include<stdlib.h>
#include<stdio.h>
#include<graphics.h>
int main() {
 int gd = DETECT, gm;
 initgraph(&gd, &gm, "");
 if (graphresult() != 0) {
 printf("Graphics initialization failed\n");
 return 1;
 }
 // Draw a circle
 circle(200, 200, 50);
 // Draw a rectangle
 rectangle(100, 300, 300, 400);
 getch();
 closegraph();
 return 0;
}

