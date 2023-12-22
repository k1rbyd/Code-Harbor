#include <stdio.h>
int main()
{
    char x;
    printf("Enter the Alphabet: ");
    scanf("%c",&x);
    char func(char);
    func(x);
}

char func(char a){
    printf("The ASCII Value of %c is %d",a,a);
}
