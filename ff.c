#include<stdio.h>  
#include<conio.h>  
#include<graphics.h>  
#include<dos.h>  
void flood(int,int,int,int);  
int main()  
{  
    int gd=DETECT,gm;  
    initgraph(&gd,&gm,"C:/TURBOC3/bgi");  
    rectangle(50,50,250,250);  
    flood(55,55,10,0);  
    getch(); 
	return 0; 
}  
void flood(int x,int y,int f, int b)  
{  
    if(getpixel(x,y)==b)  
    {  
        delay(1);  
        putpixel(x,y,f);  
        flood(x+1,y,f,b);  
        flood(x-1,y,f,b);  
        flood(x,y+1,f,b);  
        flood(x,y-1,f,b);  
    }  
}  
