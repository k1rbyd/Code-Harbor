/* 

draing a line

#include <graphics.h>
int main()
{
    int i=DETECT,j;
    initgraph(&i,&j,"");     // first argument will autodetect the graphics card, second will put the graphics mode resolution and thirld will look for BGI files path
    line(10,60,200,300);
    getch();    // to halt the graphics cscreen

#drawing a circle

    int i=DETECT,j;
    initgraph(&i,&j,"");
    circle(100,120,150);    // draws a circle with 100,120 as central points and 150 as radius
    getch();                //to halt the graphics screen

#to get full screen
we must include #include <windows.h>
===>
#include <graphics.h>
#include <windows.h>
int main()
{
    unsigned screenWidth=GetSystemMetrics(SM_CXSCREEN);
    unsigned screenHeight=GetSystemMetrics(SM_CYSCREEN);
    initwindow(screenWidth,screenHeight);       //this will turn the graphics mode on with full screen
    int mx,my;
    mx=getmaxx();   //returns max width
    my=getmaxy();   //returns max height
[ ] line(0,0,mx,my);        // 0,0 is starting coordinates and mx,my is the ending coordinates 
    getch();
    closegraph();   //closes the graphics mode
}

to print an "x"
replace the line command as

    line(mx,0,0,my);

to print a rectange
replace the line command with

    rectange(100,120,200,300);

to print an ellipse
replace the line command with
    ellipse(mx/2,my/2,120,120,100,250);

    to get a filled ellipse . just use
    fillellipse(mx/2,my/2,120,120,100,250);

to draw concentric circles

#include <graphics.h>
#include <windows.h>
int main()
{
    unsigned screenWidth=GetSystemMetrics(SM_CXSCREEN);
    unsigned screenHeight=GetSystemMetrics(SM_CYSCREEN);
    initwindow(screenWidth,screenHeight);       //this will turn the graphics mode on with full screen
    int mx,my,rad;
    mx=getmaxx();   //returns max width
    my=getmaxy();   //returns max height
    for(rad=10;rad<=mx-150;rad+=10)
    {
        circle(mx/2,my/2,rad);
    }
    getch();
    closegraph();
}

to change the colour
type in the colour in CAPS

#include <graphics.h>
#include <windows.h>
int main()
{
    unsigned screenWidth=GetSystemMetrics(SM_CXSCREEN);
    unsigned screenHeight=GetSystemMetrics(SM_CYSCREEN);
    initwindow(screenWidth,screenHeight);       //this will turn the graphics mode on with full screen
    int mx,my;
    mx=getmaxx();   //returns max width
    my=getmaxy();   //returns max height
[]  setcolor(RED);
    line(0,0,mx,my);        // 0,0 is starting coordinates and mx,my is the ending coordinates 
    getch();
    closegraph();   //closes the graphics mode
}

color also have values
range is from 0 to 15
example:

#include <graphics.h>
#include <windows.h>
int main()
{
    unsigned screenWidth=GetSystemMetrics(SM_CXSCREEN);
    unsigned screenHeight=GetSystemMetrics(SM_CYSCREEN);
    initwindow(screenWidth,screenHeight);       //this will turn the graphics mode on with full screen
    int mx,my,rad,col=0;
    mx=getmaxx();   //returns max width
    my=getmaxy();   //returns max height
    for(rad=10;rad<=mx-150;rad+=10)
    {
        setcolor(col);
        circle(mx/2,my/2,rad);
        col++;
        if (col==16)
        col=0;
    }
    getch();
    closegraph();
}

setfillstyle(SOLID_FILL,RED);       this fills the inside of the shape fully red
floodfill([range],WHITE);           this fills the outside border white
setfillstyle(HATCH_FILL,RED);       this fills the inside of the shape with holes      

to print text on graphics screen
==>
outtextxy({x-coordinate},{y-coordinate},"{the string}");
example:

#include <graphics.h>
#include <windows.h>
int main()
{
    unsigned screenWidth=GetSystemMetrics(SM_CXSCREEN);
    unsigned screenHeight=GetSystemMetrics(SM_CYSCREEN);
    initwindow(screenWidth,screenHeight);
    outtextxy(10,20,"hellloo");
    getch();
    closegraph();
}

for the text to have colour, just type setcolour above the outtextxy

example:
setcolor(RED);
outtextxy({x-coordinate},{y-coordinate},"{the string}");

we can change the text style too, with
==>
settextstyle({style name},HORIZ_DIR,{size});

        [the second one represents horizontal, we could use it as vertical too]

we can also play with pixels
function ==>

putpixel({x-coordinate},{y-coordinate},{color});


delay()
delay() function is used to delay the command by a time of milliseconds

eg: delay(5) : this is for a delay of 5 ms

to print something as the title

#include <graphics.h>
#include <windows.h>
int main()
{
    unsigned screenWidth=GetSystemMetrics(SM_CXSCREEN);
    unsigned screenHeight=GetSystemMetrics(SM_CYSCREEN);
    initwindow(screenWidth,screenHeight,"{Title Name}");
    getch();
    closegraph()
}

to print random random shapes with time lag

#include <graphics.h>
#include <window.h>
int main()
{
    unsigned screenWidth=GetSystemMetrics(SM_CXSCREEN);
    unsigned screenHeight=GetSystemMetrics(SM_CYSCREEN);
    initwindow(screenWidth,screenHeight);       
    int mx,my,rad,col=0,fig;
    mx=getmaxx();   
    my=getmaxy();   
    while(!kbhit())
    {
        fig=ran()%2;        generates random number between 0 and 1
        x=rand() %mx;       generates random number between 0 and mx-1
        y=rand() %my;       generates random number between 0 and my-1
        if (fig==1)
            circle(x,y,25);
            else
                rectange(x,y,x+25,y+35);
    delay(25);
    }
}
_________________________________________________________________________________________
)*/