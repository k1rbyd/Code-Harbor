#include <stdio.h>

int main()
{
    /* char ch;
    ch = getchar() ;   getch(): will not display the input
    putchar(ch) ;      getche(): will display the input
    getchar(); */      // getchar() : will wait for an enter

    /* int a = 10;
    printf("%d\n",a);       
    printf("%20d\n",a);     %nd means, n gaps from left
    printf("%-20d\n",a);    %-nd means, n gaps from right
    */

    /* int a = 5.5363;
    printf("%.2f",a)         will print only 2 decimal values
    printf("%.0f",a)         will print no decimal values
    printf("%10.2f",a)       will print 10 gaps from left and there will be only 2 decimal values
    printf("%-20.2f",a)      will print 20 gaps from the right and there will be only 2 decimal values
    */

    /* implicit type casting
    int a =10;
    float b = 2.0;
    float c;            here , the values "a" will be temporarily converted into float
    c = b/a;                    and since float and float give float, c has a float value
    printf("%f",c)
    */

    /*
    int a =10;
    int b =2;
    float c;
    c = b/a;            here, c will be float while other 2 will be int
    printf("%f",c)                   result = 0.0
    */

    /* explicit type casting
    int a = 10;
    int b = 2;
    float c;                here (float) is the explicit type casting
    c = b/(float)a;
    printf("%f",c)
    */

   /* getting multiple inputs and calulating simple interest
   float pmt,roi,sint;
   int tm;
   printf("Enter the principal amount, time, and rate of interest");
   scanf("%f%d%f",&pmt,&tm,&roi);
   sint = (pmt*roi*tm)/100
   printf("Simple interest = %.2f",sint)
   */

    // int a = 10
    // y = a++, this makes a "11" and y "10" [pre-fix notation]
    // y = ++a, this makes both a and y = "11" [post-fix notation]

    /* order od precedence
    ),(
    ++,--
    *,%,/,+,-
    ==,!=,>,<
    &&,||,! 
    */

    /* Simple IF statement
    int marks;
    float scholarship = 0.0;
    printf("Enter the marks:");
    scanf("%d",&marks);                          the most simple if statement
    if (marks>=90)
    scholarship = 1000;
    printf("Scholarship  : %.2f",scholarship)
    */

    /* relational program
    int a=10, b=5, c;
    c=a>b;                     here, "1" will be printed as 10>5 [TRUE]
    print("%d",c)
    */

    /* Simple IF-ELSE statement
    int marks;
    float scholarship = 0.0;
    printf("Enter the marks:");
    scanf("%d",&marks);                          the most simple if statement
    if (marks>=90)
    scholarship = 1000;
else
scholarship = 500;
    printf("Scholarship  : %.2f",scholarship)
    */
   
    /* Usual if-else syntax
    .....
    if(condition){
        <context>;
    } else {
        <context>;
    }
    .....
    */

    /* Nested Loop
    int marks,scholarship;
    float income;
    printf("Enter the marks and annual family income:");
    scanf("%d%f",&marks,&income);                               
    if (marks>=80)                                      loop 1 start        
    if (income<=50000)                                  loop 2 start
    scholarship = 2000;                                     
    else                                                loop 2 end
    scholarship = 1500;                                         
    else                                                loop 1 end
    scholarship = 1000;                             
    printf("Scholarship = %d",scholarship);
    */

    /* if else if ladder
    int units;
    float bill;
    printf("Enter the units of electricity power consumed:");
    scanf("%d",&units);
    if(units>=1000)
    bill = 10.0*units;
    else
    if(units>=800)
    bill = 8.5*units;
    else
    if(units>=500)
    bill = 6.5*units;
    else
    if(units>=250)
    bill = 4.0*units;
    else
    bill = 2.5*units;
    printf("Bill amount for the electricity consumed = %.2f",bill);
    */

    /* alternate if else if ladder
    int units;
    float bill;
    printf("Enter the units of electricity power consumed:");
    scanf("%d",&units);
    if(units>=1000)
    bill = 10.0*units;
    if(units>=1000 && units>=800)
    bill = 8.5*units;
    if(units>=800 && units>=500)
    bill = 6.5*units;
    if(units>==500 && units>=250)
    bill = 4.0*units;
    if(units<250)    
    bill = 2.5*units;
    printf("Bill amount for the electricity consumed = %.2f",bill);    
    */

    // toupper(variable);   this "toupper" function will allow both letters 'a' as well as 'A' [#include <ctype.h>]
    // tolower(variable);    same as "toupper" but converts everything to lower case [#include <ctype.h>]

    //even if the condition is false, the 'do-while' loop, will run the loop for the first time.

    //strlen(<string>) gives the length of a string but we gotta #include <string.h>

    //gets(variable name) gets the data of strings, but only strings
    //strcpy(x,y) is the function used to copy the data to the string x from the string y  

    //for single characters ==> toupper
    //for string characters ==> strupr
    //for single characters ==> tolower
    //for string characters ==> strlwr


    //to print base address of array, we have to type
    // int arr[]={100,200,900};
    // printf("Base Address = %u\t",arr);

    // stack - LIFO, last in first out
    // queue - FIFO, first in first out
    
    //storage classes are of 4 types
    // auto         : by default, all the variables are auto. a variable or an array that remains active in the memory, as long as the function in which it was declared is exectuing. Once the function stops, these too get removed.
    // static       : same as auto, but here, the variables/array remain even after the function they are executed in gets terminated. they dont get removed.
    // register     : the variables will be stored in cpu register and not in regular RAM, the storage and retrieval would be quickk but we can store only int and long int value variables
    // extern       : is used to have inter program accessibility of variables 

    // all these 4, are keywords/reserved words of c lang

    // atoi() function coverts string to integer

    // structures
    // a structure is a finite set of homogeneous or heterogenous elements stored in contiguous memory locations.

    // strcutres are basicall of 2 types, specification and declaration
    // struct is the keyword which will be used here

    // only after decalring a structure, in the main body content. only after this, the space will be allocated for all the data inside the structure
    
    // UNION
    // a union is a user defined data type
    // its specification may consist of multiple member variables like structures
    // BUT at one time, it can hold data only for one variable

    /*
    
    union sample
    {
        int a;
        float b;                                        here, a,b and c are members of the union.
        double c;                                                   
    };

    */

    // to store data permanently, we use file handling in c


} 