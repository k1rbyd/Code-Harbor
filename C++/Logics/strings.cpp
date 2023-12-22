/*

Character Functions
--------------------

==> we must include cctype library in the code
i.e.
#include <cctype>

==> some functions being, 

--> isalpha(c)  : checks if its a letter                    
--> isalnum(c)  : checks if its a digit or letter           
--> isdigit(c)  : checks if its a digit                     
--> islower(c)  : checks if its lowercase                   {conversion}
--> isupper(c)  : checks if its uppercase                   {conversion}
--> isprint(c)  : checks if its a printable character       
--> ispunct(c)  : checks if its a punctuation character     
--> isspace(c)  : checks if its a whitespace                

C-Style String
---------------

{Sequence Of Characters}
==> like vectors, they are contigous in memory
==> they are implemented as an array of characters
==> terminated by a null character
==> they are also reffered to as zero or null terminated strings

{string literal}
==> sequence of characters in double quotes, eg: "Hello"
==> terminated with null character {done automatically}

==> to copy string we cant use normal assignment operations
==>we have to use, strcpy
{ strcpy(new_string,old_string);}

==> we must include the <cstring> library for these
----------------------------------------------------    {include <cstring}

==> C++ also has a library to convert c-style strings to other types
{#include <cstdlib>}
---------------------------------------------------------

{but for all those we need a null terminated string}

Working with Strings
---------------------

#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
    char first_name[20];
    char last_name[20];
    char ful_name[50];
    char temp[50];

    cout<<first_name;       // we will get a garbage value as we didnt initialize it

    cin>>first_name;        // and thats how we get and show the value
    cout<<first_name;

    { strlen(string) : this gives the length of the string }

    cin>>last_name;     // now we have both parts of our name

    strcpy(full_name,first_name);   //it copies
    strcat(full_name," ");          // it adds a space at the end
    strcat(full_name,last_name);    // it adds the second string right after the space

    cout<<full_name;

    strcpy(temp,full_name);

    if(strcmp(temp,full_name)==0)           // this is the comparison function
        cout<<"They are the same"<<end;     // 0 if same    {first and next}
    else                                       1 if larger and -1 if smaller
        cout<<"They are different"<<endl;

    for traversing thro a string

    for(auto i{0};i<strlen(full_name);i++)
    {
        if(isalpha(full_name[i]))
            full_name[i]=toupper(full_name[i]);
        cout<<full_name.at(i)<<" ";
    }
}

C++ Strings
===========

==> we must include <string> inorder to use them
==> these are dynamic in size
==> these are safer
==> we can easily convert them to c-style strings if needed


==> Declaring

--> string s1;                      empty
--> string s2 {"hellloo"};          hello
--> string s3 {s2};                 hello
--> string s4 {s3,3};               hel
--> string s5 {s3,0,2};             he
--> string s6 (3,'X');              XXX

==> Assigning

--> string s1;
    s1 = "C++ Rocks";
    string s2 {"hii"};
    s1=s2;                  it will now contain hii

--> concatenation

    string s1 {"oii"};
    string s2 {"iio"};
    
    string sentence;

    sentence = s1 + " " + s2;       oii iio

--> iterating thro a string

    string s1 {"hiii"};
    for(char c:s1)
        cout<<c<<endl;
    
==> Substrings

--> it extracts a substring from an existing string

eg: string s1{"abcde"};
    s1.substr(0,3);         abc
    s1.substr(1,2);         bc

==> Searching

--> it returns the index of a substring in a standard string

eg: string s1{"AEIOU"};

    cout<<s1.find('A');         0
    cout<<s1.find('U');         4
    cout<<s1.find('L');         string::npos

==> Removing

--> we can use erase() and clear()
--> erase() removes only a few

    object.erase(start_index,length);

--> clear() makes the string empty

    object.clear();

==> we can also add random strigs       {COMPOUND OPERATOR}

string s1 {"abcd"};
s1 += "efgh";
cout<<s1<<endl;         abcdefgh


======================
==> Getting the input
======================

string s1;
cin>>s1;                this takes in the input till space

getline(cin,c1);        this takes in the input till \n

getline(cin,c1,'X');    this takes in the input till 'X' appears

eg: input: abcdeX
    output: abcde
.

*/