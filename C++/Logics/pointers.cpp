/*

POINTERS
=========

==> C++ is mostly used to design OS and programs, thereby it has pointers

--> and thats why other languages like python, java dont

==> there are 2 types of pointers, raw and smart

==> a pointer points to a variable or a function

--> to use a pointer we must know the type of element it points out to

==> syntax,
    {variable_type} *{pointer_name}

eg:
    int *p1{};
    char *co{nullptr};      this means the pointer is pointing to no where

--> if we dont intialize a pointer, then we get a garbage value and here it might actually point to something random

==> Accessing pointer address;

--> adress of anything ========> &

--> if we store an double variable address to a int pointer, that will bring in a complier error
[type conflict]

eg:

double high{100.7};
double low{37.2};

double *ptr;

ptr = &high;
cout<<ptr<<endl;

ptr = &low;
cout<<ptr<<endl;

ptr = nullptr;

==> Dereferencing a pointer

--> to access a pointer we need to use *

--> its used to both declare and access a pointer

eg:

int score{100};
int *ptr{&score};

cout<<score<<endl;
cout<<*ptr<<endl;

==> accessing a vector thro a pointer

vector <string> stooges{"AAA","BBB","CCC"};
vector <string> *v{nullptr};

v = &stooges;

cout<<(*v).at(0)<<endl;
cout<<(*v).at(1)<<endl;
cout<<(*v).at(2)<<endl;

we can also,

for(auto i:*v)
    cout<<i<<" ";
cout<<endl;


==========================
DYNAMIC MEMORY ALLOCATION
==========================

==> allocating storage from heap at runtime

==> we can use pointers to access newly allocated heap storage


==> using new to allocate storage
==================================

eg:

int *ptr {nullptr};
ptr = new int;          // allocating an integer on the heap
cout<<ptr<<endl;        
cout<<*ptr<<endl;       // it has a garbage value now
*ptr = 100;     
cout<<*ptr<<endl;       // and now its 100

delete ptr;             // it frees the allocated storage now


==> using new[] to allocate storage
====================================

int size{};
int *arr{nullptr};

cout<<"Enter the size:";
cin>>size;
arr = new int[size];        // allocates array on the heap
.
.
delete [] arr;              // frees the allocated storage

==> Arrays and Pointers

--> the value of the array name is the location or address of the first element in that array

--> and the value of a pointer is an address

==> lookiee lookiee,

eg:

int scores[] {100,95,98};

cout<<scores<<endl;     // we get the address of the first element
cout<<*scores<<endl;    // 100

int *ptr{scores};       [remember here, a & isnt required]
cout<<ptr<<endl;        // address of the first element
cout<<*ptr<<endl;       // 100

[for printing the entire array]

cout<<ptr[0]<<endl;     // 100
cout<<ptr[1]<<endl;     // 95
cout<<ptr[2]<<endl;     // 98

cout<<score[0]<<endl;     // 100
cout<<score[1]<<endl;     // 95
cout<<score[2]<<endl;     // 98

// we can also use,

cout<<*ptr<<endl;         // 100
cout<<*(ptr+1)<<endl;     // 95
cout<<*(ptr+2)<<endl;     // 98

cout<<*score<<endl;         // 100
cout<<*(score+1)<<endl;     // 95
cout<<*(score+2)<<endl;     // 98

==> Pointers can be used in 
    --> Assignment expressions
    --> Arithmetic expressions
    --> Comparision expressions

==> C++ allows pointers arithmetic

==> ptr++, this increments the pointer to point to the next array
==> ptr--, this decremenrs the pointer to point to the previous array

==> we can use == , != to compare pointers
[ for this, the data thats contained isnt compared, all thats compared is, if they point to the same address or not]

eg:

string s1{"Frank"};
string s2{"Frank"};

string *p1{&s1};
string *p2{&s2};
string *p3{&s1};

cout<<boolalpha;
cout<<(p1=p2)<<endl;        // false
cout<<(p1==p3)<<endl;       // true

--> even though they point to the same value, the address are different 

==> for accessing an array of pointers, i.e. array

#include <iostream>
using namespace std;

int main()
{
int abc[]{1,2,3};
cout<<*abc<<endl;        

int *ptr{abc};
for(int i{0};i<3;i++)
{
    cout<<*ptr+i<<endl;   or we can also type         cout<<*ptr<<endl;
}                                                     ptr++;
}

// we can also use

for (int t{0};t<3;t++)
{
    cout<<*ptr<<endl;           ||      cout<<*ptr++<<endl;
    ptr++;                      ||      
}

==> Constant Pointer

==> if we use a const to a pointer, then the value of the pointer cant be changed (i.e. it cant point to another variable)

int high{100};
int low{65};

int *const ptr{&high};

*ptr = 86;
ptr = &low;         // error

==> Constant Pointer to Pointer

==> the value it points to as well as the value it contains cant be changed

int high{100};
int low{65};

const int *const ptr{&high};

*ptr = 86;          // error
ptr = &low;         // error

==> Pass By Reference
=======================

--> passing a pointer to a function

void twice(int *ptr);

int main()
{
    int value{10};
    int *p{&value};
    twice(p);
    cout<<value;
}

void twice(int *ptr)
{
    *ptr *=2;
}

RETURNING DYNAMIC MEMORY
=========================

int *create(int size,int value{0})
{
    int *new_storage{nullptr};

    new_storage = new int[size];
    for(int i{0};i<size;i++)
        *(new_storage+i) = value;
    return new_storage;
}

int main()
{
    int *array;
    array = create(100,20)

    delete [] array;
}

==> Potential Pitfalls

--> Uninitialized pointers

--> Dangling pointers
[pointers pointing to a variable that no longer exists]

--> Leaking memory
[forgetting to release allocated memory]
[one of the most common pointer problems]


*/