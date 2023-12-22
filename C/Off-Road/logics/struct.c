#include <stdio.h>

struct students
{
unsigned long reg_no;
char address[100];
float fee;
};

struct students block;                // here, "block" is the structure variable
                                        // "block" is whats stored in the memory, which contains reg_no, address and fee

// there are 2 important operators here
//  [memory access operators]
// dot operator [.] : 
// arrow operator [->] : 

int main()
{
    struct students
    {
        unsigned long reg_no;
        float mk1,mk2,mk3;
    };
    struct students varc;
    float pc;
    printf("Enter the registration number, marks in 3 subjects:");
    scanf("%lu%f%f%f",&varc.reg_no,&varc.mk1,&varc.mk2,&varc.mk3);              // the dot operator is used to access a particular variable in a structure
    pc = (varc.mk1+varc.mk2+varc.mk3)/300 *100;                                 // here too, dot operator is used to access the variables
    printf("Percentage = %.2f.",pc);                                            // to initialze the members of the structure instead of getting the user input, we just have to type varc.mk1=1224;


// structures are user defined variables
// there can be multiple structure variables for one structure specification , example , struct students a,b,c;

// to print out data in a specific structure variable
    printf("The registration number = %lu\n The students marks are %f\t%f\t%f",varc.reg_no,varc.mk1,varc.mk2,varc.mk3);

// arrow operator is used when we need a pointer to structure usage/need

struct sales
{
    char salesman_code[10];
    float jan_sales,feb_sales,mar_sales;
};
struct sales sv;                // declaration of structure variables
struct sales *pt;               // declaration of pointer to structure
pt = &sv;                       // assigning address of structures sv into pt

// accessing members of a structre using pointer to structure

strcpy(pt->salesman_code,"NY001");
pt->jan_sales=12000.00;
pt->feb_sales=10000.00;
pt->mar_sales=9000.00;

puts(pt->salesman_code);
printf("January Sales = %10.2f",pt->jan_sales);
printf("Feburay Sales = %10.2f",pt->feb_sales);
printf("March Sales = %10.2f",pt->mar_sales);

// array of structures

struct laptops
{
    int RAM;
    int HDD_SPACE;
    int PRICE;
};
struct laptops lap[3];           // declaration of array of 3 structures

// reading the values from the user

int n;
for(n=0;n<3;n++)
{
    printf("Enter the RAM, Hard Disk Space and Price for the [%d] laptop are :\n",n+1);
    scanf("%d%d%f",&lap[n].RAM,&lap[n].HDD_SPACE,&lap[n].PRICE);
}

// to display the values in lap

for(n=0;n<3;n++)
{
printf("RAM = %d\t Hard Disk Space = %d\t Price = %f\n",lap[n].RAM,lap[n].HDD_SPACE,lap[n].PRICE);
}

}

// ALTERNATIVE METHOD TO DECLARE STRUCTURE VARIABLE, POINTER TO STRUCTURE AND ARRAY OF STRUCTURES

int main()
{
    struct students
    {
        unsigned long reg_no;
        float mk1,mk2,mk3;                    // this also works and is similar to, struct students student1;
    } student1;                                      //         these both give the same output

    
    struct students
    {
        unsigned long reg_no;
        float mk1,mk2,mk3;        // for declaring the pointer to structure we could give, struct students *pt; 
    } *pt;                                  //              or also, we could just   [use the command on the left]

    struct students
    {
        unsigned long reg_no;
        float mk1,mk2,mk3;                    // this also works and is similar to, struct students arr[5];
    } arr[5];                                   // these both give the same output [use the command on the left]
    
}
