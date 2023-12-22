/*

FUNCTIONS
===========

==> we have to declare as well as define a function

==> inorder to use functions, we need to include the library that contains that function

eg:
for sqrt, pow and all those, we need to include
#include <cmath>

==> its not always neccessary for a function to return something

==> syntax,

[return data type] [name] (arguments)
{
    .
    .
    statements
    .
    .
}

--> void requires no return

--> function call, definiton and declaration
all are done in the same method as C

==> in the function call, the elements passed in the function are called arugments

==> in the function defintion, the arguments are called parameters
==> the parameters are a copy for the actual arguments

==> in the function , if the data types are wrong. the compiler will try its best to auto fix it by using promotion of lower classes to upper classes

==> when a function is called, all arguments must be supplied

also,

int add(int num,int extra=1);

int add(int num,int extra);
{
    .
    .
    statements
    .
    .
}

int main()
{
    int a{1},b{2};
    int x{2};
    add(a);             here extra value will be the default value , 1
    add(b,x);           here x will overwrite extra value and its now 2
}

==> Function Overloading

--> its basically giving the function options

--> depending on the arugment(s) passed, the undergoing body will change

--> this is an example of polymorhpism

eg:

int add(int,int);
double add(double,double);

int add(int a, int b)
{
    return a+b;
}

double add(double a, double b)
{
    return a+b;
}

int main()
{
    int a,b,c,d;
    a=1;
    b=2.3;
    c=3;
    d=6.7;
    cout<<add(a,c);
    cout<<add(b,d);
}

another example,

void display(int n);
void display(double n);
void display(string s);
void display(string s,string t);
void display(vector <int> c);

==> if the compiler cant find a proper match for the arugments, then that will result in a compiler error

==> in simple words, overloading a function is just mutiple functions having the same name which have different arguments

==> if we pass nothing thro the function then it will automatically run the default function

==> we can pass arrays by just add [] at the end of the arguments

eg:

#include <iostream>
using namespace std;

int add(int [],int );

int main()
{
    int a[] {1,2,3,4};
    add(a,4);
}

int add(int x[],int y)
{
    for(int i{0};i<y;i++)
    {
        cout<<x[i]+1<<endl;
    }
    return 0;
}

==> Pass by reference

--> sometimes we want to be able to change the actual parameter from within the function body

--> inorder to do this, we need to pass the location/address to the function

example:

void scale(int &num);

int main()
{
    int number{1000};
    scale(number);
    cout<<number<<endl;
}

void scale(int &num)
{
    if (num>1)
        num=1;
}

==> advantages: i. no need for a second copy
                ii. we get the answer out directly

another example,

void swap(int &a, int &b);

int main()
{
    int x{10},y{20};
    cout<<x<<endl<<y<<endl;
    swap(x,y);
    cout<<x<<endl<<y<<endl;
}

void swap(int &a, int &b)
{
    int temp {a};
    a = b;
    b = temp;
}

==> VECTORS ARE AN EXAMPLE OF POINTERS

example here,

void print(vector <int> &v);

int main()
{
    vector <int> data {1,2,3,4,5};
    print(data);
}

void print(vector <int> &v)
{
    for(auto i:v)
        cout<<i<<endl;
}

==> inorder to prevent from any modification of data , we can make it

void print(const vector <int> &v);

int main()
{
    vector <int> data {1,2,3,4,5};
    print(data);
}

void print(const vector <int> &v)
{
    for(auto i:v)
        cout<<i<<endl;
}

=========================================

==> How do functions work

--> functions use the function call stack
{LIFO, push & pop}

--> stach frame or activation record

--> stack size is finite - stack overflow
[when these errors come, the program will crash]

--> they work just like a stack, the main function gets in the stack first and then the respective functions get in next and we then pop from the top and at the end we come to the end of the main function and this is how function call works

==> Inline functions

--> function calls have a certain amount of overhead

--> all the steps occur, but they dont take a lot of time

--> sometimes for small functions, the stack job is more time consuming

--> in places like this, we can suggest the complier to compile them 'inline'
{avoid function call overhead
generate inline assembly code
faster
could cause code bloat if we mess it up, it will call call call call}

--> compilers optimazations are very sophisticated
{they will likely inline without our suggestion}

eg:

inline int add(int a,int b)
{
    return a+b;                         // definition
}

int main()
{
    int result{0};
    result = add{10,20};                //call
    cout<<result;
}

==> Recursive Function

--> a function that calls itself under a condition

eg:

unsigned long long fact(unsigned long long n)
{
    if (n==0)                   // base case
        return 1;
    return n*fact(n-1);
}

int main()
{
    cout<<fact(8)<<endl;
}
*/