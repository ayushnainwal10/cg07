#include<graphics.h>  
#include<conio.h>  
#include<stdio.h> 
#include<math.h> 
int main()  
{  
    int gd = DETECT ,gm, i;  
    int x, y,dx,dy,steps,x1, x2, y1, y2;  
    initgraph(&gd, &gm, "C:\\TC\\BGI");  
    setbkcolor(WHITE);  
    printf("Enter co-ordinates of first point: ");  
    scanf("%d%d", &x1, &y1);  
    printf("Enter co-ordinates of second point: ");  
    scanf("%d%d", &x2, &y2);     
    dx = abs(x2 - x1);  
    dy = abs(y2 - y1);  
    if(dx>=dy)  
           {  
        steps = dx;  
    }  
    else  
           {  
        steps = dy;  
    }  
    dx = dx/steps;  
    dy = dy/steps;  
    x = x1;  
    y = y1;  
    i = 1;  
    while(i<= steps)  
    {  
        putpixel(x, y, RED);  
        x += dx;  
        y += dy;  
        i=i+1;  
    }  
    getch();  
    closegraph();  
    return 0;
}  
