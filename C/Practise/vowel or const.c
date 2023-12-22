#include <stdio.h>
#include <ctype.h>
int main()
{
char test;
printf("Enter the alphabet:");
scanf("%c",&test);
if(tolower(test)=='a' || tolower(test)=='e' || tolower(test)=='i' || tolower(test)=='o' || tolower(test)=='u'){
    printf("Its a vowel.");
}else{
    printf("Its not a vowel.");
}
}