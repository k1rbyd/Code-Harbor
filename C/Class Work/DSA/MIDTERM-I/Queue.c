#include <stdio.h>
#include <stdlib.h>
#define max 10

int queue[max];
int rear=-1;

void enqueue(int n)
{
if(rear==max-1)
printf("Queue Overflow");
else
{
rear++;
queue[rear]=n;
}
}

void dequeue()
{
if(rear==-1)
printf("Queue Underflow");
else
{
for(int i=0;i<rear+1;i++)
{
queue[i]=queue[i+1];
}	 	  	 	  	  	 		 	  	   	 	
rear--;
}
}

void display()
{
for(int i=0;i<rear+1;i++)
{
printf("%d ",queue[i]);
}
}

int main()
{
int x=1;
while(x==1)
{
int y, choice;
scanf("%d",&choice);
switch(choice)
{
case 1:
{
scanf("%d",&y);
enqueue(y);
break;
}
case 2:
{
dequeue();
break;
}
case 3:
{
display();
break;
}	 	  	 	  	  	 		 	  	   	 	
case 4:
{
x=2;
break;
}
default:
break;
}
}
}