#include <stdio.h>
#include <string.h>
int main()
{
char name[1000];
printf("Enter the city name:");
gets(name);                         //this gets the input from the program scanf("%s",name)

int l;
l=strlen(name);               //to get the length
printf("%d",l);
char empty[50];

strcpy(empty,name);             //to copy the data inside name to empty
printf("%s",empty);

strcat(name,empty);             //this function combines both the string 'name' and 'empty'

puts(name);                     //this displays the value of the string name, simialr to scanf("%s",name)

strrev(name);                   //this reverses the data inside the string

strupr(name);                   //this converts every aplhabet to upper case

strlwr(name);                   //this coverts every alphabet to lower case
}