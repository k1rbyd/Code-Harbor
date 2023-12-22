#include <stdio.h>

int main()
{
int *pt;                    //declaration of pointer to int
int n=100;                      
pt=&n;                      //assigning address of n into pointer varable pt

float *fp;                  //declaration of pointer to float
float temp = 24.535;            
fp=&temp;                   //assigning address of temp into pointer varibale fp

char *cp;                   //declaration of pointer to char                    
char ch='A';                            
cp=&ch;                     //assigning address of ch into pointer variable cp

//there are only 3 operators for pointer variables
// & : address operator
// * : value at address operator
// ** : pointer to pointer operator

printf("Adress of ch: %u",cp);          /* %u should be used to extract data that are stored in the unsigned thingies
                                         %u is for unsigned and %lu is for unsigned long int */

printf("The value of ch: %c",*cp);        // here *cp gives the data value stored in "cp"...here 'A'

int **ppnf;                     // using ** makes it not an ordinary pointer but a pointer to pointer variable

// quite confusing...lemme write the whole command

    int val=1000,*pnt,**ppnt;
    pnt=&val;
    ppnt=&pnt;
    printf("Address of val : %u\n",pnt);                            //gets the address of variable
    printf("Value of val : %d\n",*pnt);                             //gets the value of variable                            
    printf("Address of pointer variable pnt : %u\n",ppnt);          //gets the address of pointer                        
    printf("Address of val : %u\n",*ppnt);                          //gets the address of variable                                
    printf("Value of val : %d\n",**ppnt);                           //gets the value of variable                                        

//pointer arithmetic

float a=100.0;
float *pt;
pt=&a;
printf("Address : %u\t value : %5.2f\n",pt,*pt);
++pt;
printf("Address : %u\t value : %5.2f\n",pt,*pt);

//pointer subtraction

int arr[]={100,200,300,400,500,600,700};
int n=&arr[4]-&arr[2];                                  // so basically its subtraction/data type size
printf("n = %d\n",n);                                   // here its, &arr[4]-&arr[2]/4

double amount[]={100.0,200.15,9000.99,1000.11,2500.55};
n=&amount[4]-&amount[0];                                 // here its, &amount[4]-&amount[0]/8 
printf("n = %d\n",n);

///////////////////////////////////////////////////////////////////////

/*
when we declare an array, a pointer variable with the same name as the array name is automatically created in the memory, and that is assigned the base address of this array
*/

///////////////////////////////////////////////////////////////////////

//to print base address of array, we have to type
// int arr[]={100,200,900};
// printf("Base Address = %u\t",arr);

int arr[]={100,200,900};
printf("Base address : %u\n",arr);                                  // prints the base address
printf("Address of second element arr[1] : %u\n",arr+1);            // base address + 4 bits, as its "int"            
printf("Address of third element arr[2] : %u\n",arr+2);             // base address + 8 bits, as there are 2 "int"        
printf("Value of the first element : %d\n",*arr);                   // prints out 100 ==> Value of the first element : 100       
printf("Value of the second element : %d\n",*(arr+1));              // prints out 200 ==> Value of the second element : 200         
printf("Value of the thirf element : %d\n",*(arr+2));               // prints out 900 ==> Value of the third element : 900  

//using a loop statement to print out both the address and value

int arre[]={100,200,900},i;
for(i=0;i<3;i++)
{
    printf("%u = %d\n",(arre+i),*(arre+i));
}

// an array name is always pointer to base address


}