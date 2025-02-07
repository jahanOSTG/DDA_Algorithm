#include <graphics.h> 
#include <iostream> 
#include <cmath> 
 
void drawLineDDA(int x1, int y1, int x2, int y2) { 
    int dx = x2 - x1; 
    int dy = y2 - y1; 
 
    int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy); 
 
    float Xinc = dx / (float)steps; 
    float Yinc = dy / (float)steps; 
 
    float X = x1; 
    float Y = y1; 
       // Draw pixels 
    for (int i = 0; i <= steps; i++) { 
        putpixel(round(X), round(Y), BLACK); // Draw pixel in Yellow 
        X += Xinc;  
        Y += Yinc;  
    } 
} 
 
int main() { 
    int gd = DETECT, gm; 
    initgraph(&gd, &gm, ""); // Initialize graphics mode 
 
    setbkcolor(WHITE); // Set background color to White 
    cleardevice();     // Apply the background color 
 
    int x1 = 100, y1 = 100, x2 = 200, y2 = 210; 
    drawLineDDA(x1, y1, x2, y2); 
 
    getch();  
    closegraph();  
    return 0; 
} 
 

