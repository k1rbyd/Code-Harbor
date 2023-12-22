/*

--> There are basically 2 types of errors in C++:
i. Syntax Error     [format issue]
ii. Semantic Error  [not making sense]

--> Compiler warnings are just warning and not errors, it gives us the wanted output, but it just lets us know that there is an issue with our code that could lead to a potential problem

--> linker errors are when the linker is having trouble linking all the object files together to create an executable

--> Runtime errors are those errors which occur when the program is executing
some typical errors:
i. divide by 0
ii. file not found
iii. Out of memory
these errors might lead your program to crash

--> logic errors are errors or bugs that cause a program to run incorrectly, these are made by a programmer

for an if statement, just use
--------------------------------

if (condition)
{
    content;
}

--> identifiers and keywords are not the same.
--> Identifiers are those the programmer names

<< : stream insertion operator      [to output]
>> : string extraction operator     [from output]
::  : scope resolution operator

--> the C++ preprocessor does not understand C++, but the compiler understands

--> naming conflicts occur when two or more libraries have a function with the same name.

values can be initialized by both,
-----------------------------------

{type} {name} (value);
        or
{type} {name} = value;

--> the size and precision of the primitive data types depends on the largely dependant on the platform we are using 
--> they are also called fundamental data types
--> fundamental data types are implemented directly by the C++ language

in C++, 0 ==> False
        anything else ==> True

\n  :   new line
\r  :   return 
\t  :   tab
\b  :   backspace
\'  :   single quote
\"  :   double quote
\\  :   backslash

arrays and vectors
-------------------

--> arrays are fixed in size
--> arrays are stored continuously in memory

declaration of array:
---------------------

{data type} {array name} [no. of elements];
int number [100];

initialzing an array
---------------------

int number [100] {1,2,3,4}      (rest are all 0)
int number [] {1,2,3}           (size is automatically calculated)

--> accessing and modeling array elements
        (same as every language before)
--> array_name[index value].....this calls that element

--> like, number[1]=6;
cout<<"the new number"<<number[1]<<endl;

--> "The name of the array is the location of the arry"
cout<<"Array location"<<number<<endl;

multidimensional arrays
------------------------

{data type} {array name} [dimension 1 size] [dimension 2 size];
example,
int rows [3];
int column [3];
int movie [row][column];

getting and giving values
cin>>movie[1][2];
cout<<movie[1][2];

vectors
-------

--> dynamic array
--> its contained in the C++ standard template library
--> its an array that can grow and shrink in size at execution time
--> we should use
#include <vector>                                       {in the code}

declaring a vector (and initializing too)
------------------

vector <int> numbers;                   numbers is a vector of integers which is currently empty

vector <char> name (10);                name is a vector of characters which will have the first 10 set to 0

vector <int> no {1,2,3,4};              understandable

vector <double> count (10,20.0)         this will make the count vector contain 20.0 ~~ 10 times

Accessing and modifying vector elements
----------------------------------------

for, vector <int> num {1,2,3,4,5};

num[0] ===> 1
num[1] ===> 2
.
.
.
and so on

we can also access using .at

num.at(0) ==> 1
num.at(1) ==> 2
.
.
.
and so on

we can assign values like, 

num.at(0) = 10;
this will make the num vector now contain {10,2,3,4,5}

.push_back
----------

a new element is added to the end of the existing vector

example,

vector <int> letters {'a','b','c'};

letters.push_back('d');
letters.push_back('e');

letters ==> {'a','b','c','d','e'}

--> if we go out of bounds, then there will be an exception and error message

2-Dimensional Vector
--------------------

--> basically its a vector of vectors

vector <vector <int>> movie_rating
{
        {1,2,3,4},
        {1,2,3,4},
        {1,2,3,4}
};

cout<<movie_rating[0][0]<<endl;
cout<<movie_rating[0][1]<<endl;
cout<<movie_rating[0][2]<<endl;
cout<<movie_rating[0][3]<<endl;

cout<<movie_rating[1][0]<<endl;
cout<<movie_rating[1][1]<<endl;
cout<<movie_rating[1][2]<<endl;
cout<<movie_rating[1][3]<<endl;

cout<<movie_rating[2][0]<<endl;
cout<<movie_rating[2][1]<<endl;
cout<<movie_rating[2][2]<<endl;
cout<<movie_rating[2][3]<<endl;

operators
---------

--> assignment
--> arithmetic
--> increment & decrement
--> equality
--> relational
--> logical
--> compound assignment
--> precedence

Expressions
------------

--> the most basic building blocks of a program
--> computes a value from a number of operands

Statements
-----------

--> expression
--> null                {;}
--> compound
--> selection
--> iteration
--> declaration         {int x;}
--> assignment          { x = 5;}
--> jump
--> if statement
--> try blocks
--> --> --> --> --> --> --> --> aaandd manyy morreee

Operators       {unary,binary,ternary}
---------

--> assignment
--> arithmetic
--> increment/decrement
--> relational
--> logical
--> memory access
--> other


--> assignment operator works from Right->Left

--> arithmetic operator

 + addition
 - subtraction                  these 4 are all overloaded
 * multiplication                       {they will work for all diff types}
 / divison

 % modulo/remainder             {only works on int}

--> C++ will autoremove all the zeros after the decimal point
i.e
9.01000000000 ==> 9.01
10.0000000000000000000000100 ==> 10.00000000000000000000001

--> OPERATIONS FOLLOW THE PEMDAS RULE   {similar to BODMAS}

[parenthesis,
exponents,
multiplication,
division,
addition,
subtraction]

==> cout<<5/10<<endl;
==> cout<<5.0/10/0<<endl;

==> increment and decrement will almost be the same, ++ and -- [post and pre]

==> Type conversions

--> lower types can always be stored in higher types
--> short and char types are always converted to int

--> promotion   : conversion to a higher type
--> demotion    : onversion to a lower type

--> type coercion       : conversion of one operand to another data type

eg:     2 * 5.2         {here 2 is promoted to 2.0}

eg:     int num {0};
        numb = 100.2;   {here 100.2 will be demoted to 100}

==> Explicit type casting

-->     int t1 {100};
        int t2 {8};
        double avg {0.0};

        avg = t1/t2;
        cout<<avg<<endl;        {this will display 12}

        avg = static_cast<double> (t1)/t2;
        cout<<avg<<endl;        {this will display 12.5}

---------------------------------------
static_cast <data type> (variable name)
----------------------------------------

==> old conversion used to be just the data type in brackets before the variable and its not that efficient cauz it doesnt double check before it converts
eg : int num{0};
     .
     .
     a = (float)num;

==> Equality Operators

--> == & =!
--> its givens True or False, 1 or 0

eg:

bool result {false};
result = (100==50+50);
result = (num1 != num2);

cout<<(num1==num2)<<endl;
cout<< boolalpha;               // 0 or 1

cout<<(num1 == num2)<<endl;     
cout<<noboolalpha;              // true or false

==> logical Operators
 
--> not     : negation {!}
--> and     : logical and {&&}
--> or      : logical or {||}

==> compound operators

--> +=
--> -=
--> *=                          {mathematic operators}
--> /=
--> %=

--> >>==
--> <<==
--> &=                      {bitwise operators}
--> ^=
--> |=

==> C++ doesnt need intendation, its just for us to understannd the code

If statement
-------------

syntax :-  usual,
        if (condition)
        {
                .
                .
                statements
                .
                .
        }
        else if (condition)
        {
                .
                .
                statements
                .
                .
        }
        else
        {
                .
                .
                statements
                .
                .
        }


==> Just like other ptogramming languages , C++ also has nested if statements

==> to make only 2 digits after . get printed
we need to,

#include <iomanip>

cout<<fixed<<precession{2};

Switch statement
-----------------

==> syntax,

switch (variable)
{
        case '(condition)' : .
                             .
                             .
                             break;
        case '(condition)' : .
                             .
                             .
                             break;
        default : cout<< "Failed";
}

==> conditional operator        {ternary operator}

(condition) ? (expression1) : (expression2);

if the conditon is true , then expression1 will execute
if its false, then expression2 will execute

eg:

result = (a>b) ? a:b;
result = (b != 0) ? a/b : 0;
cout << ((score>90))? "Excellent" : "Good");

==> SCOPE

--> C++ uses static and lexical scoping
--> C++ has 2 scopes, local and global

--> local is basicall when something is initialised inside a function
--> thy are active only when the function is executing

--> global is given outside the functions
--> they wil always exist
--> they are active as long as the program is executing

REFERENCE
==========

==> An alias for a variable

==> must be initialized to a variable when declared; it cant be null

eg:

vector <string> stooged{"AAA","BBB","CCC"};

for(auto i:stooges)
        i = "Funny";            // this will make a copy and then change

for(auto a:stooges)
        cout<<a<<endl;

-------------------------------------------------

vector <string> stooged{"AAA","BBB","CCC"};

for(auto i:stooges)
        i = "Funny";            // this will change the string stooged itself

for(auto a:stooges)
        cout<<a<<endl;           // Funny Funny Funny

L-value & R-Value
===================

==> L-Values

--> values that have names and are addressable
--> they can be modified unless they are constants
--> it will be on the LHS

int x{100};
x +=20;

==> here, x is a L-Value

100 = x;

==> here, 100 is not a L-Value


==> R-Values

--> Whatevers not an L-Value is an R-Value
--> it will be on the RHS
--> R-values can be assigned to L-values explicitly

int x{100};
int &ref = x;

--> here, ref is an L-value , as it points to an L-value

==> Pointers and References Parameters

--> pass-by-value
        
        i. when the function does not modift the actual parameter
        ii. the parameter is small and efficient to copy like simple types

--> pass-by-reference using a pointer

        i. when the function does modify the actual parameter
        ii. the parameter is expensive to copy
        iii. its OK to the pointer to be contain a nullptr value

--> pass-by-reference using a pointer to const

        i. when the function does NOT modify the actual parameter
        ii. the parameter is expensive to copy
        iii. its OK to the pointer to be contain a nullptr value

--> pass-by-reference using a const pointer to const

        i. when the function does NOT modify the actual parameter
        ii. the parameter is expensive to copy
        iii. its OK to the pointer to be contain a nullptr value
        iv. you dont want to modify the pointer itself

--> pass by reference using a reference

        i. when the function does modify the actual parameter
        ii. the parameter is expensive to copy
        iii. the paramenter will never be nullptr

--> pass by reference using a const reference

        i. when the function does NOT modify the actual parameter
        ii. the parameter is expensive to copy
        iii. the paramenter will never be nullptr

*/