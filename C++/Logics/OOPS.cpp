/*

==> Object Oriented Programming

--> 2 of the most concepts in OOP is encapsulation and object hiding
--> public and private

--> By default C++ follows shallow copy

==> Procedural Programming - Limitations

--> functions need to know the structure of the data ; if the structure of the data changes many functins must be changed
--> As the program gets larger, they become more

    i. difficult to understand
    ii. difficult to maintain
    iii. difficult to extend
    iv. difficult to debug
    v. difficult to reuse code
    vi. fragile and easier to break

==> OOP:
==========

==> classes and objects

--> focus is on classes that model real world domain entities
--> allows develoers to think at a higher level of abstraction
--> its used successfully in very large problems

==> encapsulation:

--> objects contain data and operations that work on that data
--> Abstract Data Type {ADT}

==> information hiding:

--> implementation-specific logic can be hidden
--> users of the class code to the interface since they dont need to know the implementation
--> more abstraction
--> easier to test, debug, maintain and extend

==> OOP is all about reusability

--> easier to reuse classes in other applications
--> faster development
--> higher quality

==> Inheritance

--> can create new classes in terms of existing classes
--> reusability
--> polymorphic classes

==> Limitations

==> Not a panacea
--> OO programming wont make bad code better
--> not suitable for all types of problems
--> not everything decomposes to a class

==> Learning curve
--> usually a steeper learning curve, especially for C++
--> many OO languages, many variations of OO concepts

==> Design
--> usually more up-front design is neccessary to create good models and hierarchies

==> Prgrams can be
--> larger in size
--> slower
--> more complex

-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0

==> classes and objects

==> classes

--> blueprint from which objects are created
--> a user defined data-type
--> has attributes (Data)
--> has methods (Functions)
--> can hide data and functions
--> provides a public interface

==> objects

--> crated from a class
--> represents a specific instance of a class
--> can create many, many objects
--> each has its own identity
--> each can use the defined class methods

==> Declaring a Class
======================

==>Syntax,

class Class_Name
{

};

eg:

class Player
{
    string name;                            //attributes
    int health;
    int xp;

    void talk(string text_to_say);          //methods
        bool is_dead();
}

==> Creating objecs

Player frank;
Player hero;

Player *enemy = new Player();       // pointer to an object
delete enemy;

vector <Player> p1 {frank};
p1.push_back(hero);

==> accessing class members and attributes

--> there are 2 ways, dot operator and 

==> dot operator

class_name.class_member;

eg:

hero.health{100};
(*enemy).health{10};

==> arrow operator [member of pointer operator]

instead of this, (*enemy).health{10};   we can do the below operation
enemy->health{10};

=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-

example:

#include <iostream>
#include <string>
using namespace std;

class Player
{
public:
    int number;
    string name;
};

int main()
{
    Player p1;
    Player *p2 = new Player();
    p1.name = "AAAAA";
    p1.number = 2;
    (*p2).name = "BBBB";
    p2->number = 3;
    cout << "Player " << p1.number << ": " << p1.name << endl;
    cout << "Player " << p2->number << ": " << (*p2).name << endl;
    return 0;
}

=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-

==> Class Member Access Modifiers

--> there are 3 types
    i. public       [accessible anywhere]
    ii. private     [accessible only by member or friends of the class]
    iii. protected  [inheritence logic is followed here]

eg:

class class_name
{
    private:
        .
        .
        .
    public:
        .
        .
        .
};

class Player
{
    private:
        int num;
        string name;
    public:
        void talk();
        bool is_dead();
};

==> Implementing Member Methods

--> can be done inside the class

eg:

class Account
{
    private:
        double balance;
    public: 
        void set_balance(double bal)
        {
            balance = bal;
        }
        double get_balance()
        {
            return balance;
        }
}

--> can be done outside the class as well

eg:

class Account
{
    private:
        double balance;
    public: 
        void set_balance(double bal);
        double get_balance();
};

void Account::set_balance(double bal)
{
balance = bal;
}

double Account::get_balance()
{
    return balance;
}

--> Seperating specification from implementation

#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

class Account
{
    private:
        double balance;
    public: 
        void set_balance(double bal);
        double get_balance();

};

#endif

--> Many compliers support #pragma once

--> we must also use the #include "Account.h"
[we dont use the <> we use for iostream as that is system default and these arent]

--> and in the file we are gonna use it, we just gotta include it

==> CONTRUCTORS
=================

--> special member method
--> invoked during object creation
--> useful for initialization
--> same name as the class
--> no return type is specified
--> can be overloaded

eg:

class Player
{
    private:
        string name;
        int health;
        int xp;
    public:
        Player();
        Player(string name);
        Player(string name,int health,int xp);
}

==> DESTRUCTORS
================

--> Special member method
--> Same name as the class proceeded with a ~
--> Invoked automatically when an object is destroyed
--> no return type and no parameters
--> only one destructor is allowed per class - cannot be overloaded
--> useful to release memory and other resources

eg:

class Player
{
    private:
        string name;
        int health;
        int xp;
    public:
        Player();
        Player(string name);
        Player(string name,int health,int xp);
        
        ~Player();
}

--> classes can have as many constructors as neccessary

--> each must have a unique structure

==> Default Constructor

--> it has no arguments
--> if we gave no constructors, C++ automatically makes an empty one

--> if we make a constructor, we cant make a empty call, cauz a default one will no longer be made
--> C++ will ONLY make one if there are none made

________________________________________________________________________________________________
=-> DEFAULT CONSTRUCTOR IS NO LONGER COMPILER-GENERATED ONCE ANOTHER CONSTRUCTOR IS DECLARED
------------------------------------------------------------------------------------------------

==> Constructor Initialization Lists:

--> these are more efficient 
--> initializes the data members as the object is created
--> order of initialization is the order of declaration in the class

instead of, 

Player::Player(string a, int b, int c)
{
    name = a;
    health = b;
    xp = c;
}

we can do,

Player::Player(string a, int b, int c)
    : name{a}, health{b}, xp{c}
    {
    }

==> Delegating Constructors

-->often the code for constructors is very simiar

--> this can lead to duplicated code which can lead to errors

==> C++ allows delagating constructors, 
    i. code for one constuctor can call another in the initialization list
    ii. avoids duplicate code

example, 

Player::Player()
    : name{"None"}, health{0}, xp{0}
    {                                       
    }
Player::Player(string a, int b)
    : name{a}, health{b}, xp{0}
    {
    }
Player::Player(string a, int b, int c)
    : name{a}, health{b}, xp{c}
    {
    }

we can just do, 

Player::Player(string a, int b, int c)                  we can do this
    : Player{"None",0}
    {
    }

==> Default Constructor Parameters

--> can often simplify our code and reduce the number of overhead constructors

--> same rules apply as we learned with non member functions

#include <iostream>
using namespace std;
#include <string>

class Player
{
    private:
        string name;
        int health;
        int xp;
    public:
        Player(std::string name_val ="None",int health_val=0, int xp_value=0);    
};

Player::Player(std::string name_val, int health_val, int xp_val)
    :name{name_val},health{health_val},xp{xp_val}
    {
        cout<<"Done"<<endl;
    }

int main()
{
    Player frank("Frank");
    Player brank("Brank",100);
    Player franky("Franky",100,1);

}

==> Copy Constructor

--> when objects are copied C++ must create a new object from an existing object

--> C++ provides a compiler defined copy constructor if incase we forget to make/create one

eg:

Player hero{"heon",11,110};

void display_player(Player p)
{
                        here p, is a copy of hero, and it will be destroyed after use here itself

}   

display_player(hero);

==> The default copy constructor will be all we need, till use pointers

--> when we use pointers and pass them in a function, the copy constructor will be able to copy only the pointer and not the data
--> this is called shallow copying

==> Declaring the copy consructor

syntax,

class_name::class_name(const data_type &source);

==> Implementing the copy constructor

eg:

Player::Player(const Player &source)
    :name{source.name},
    health{source.health},
    xp{source.xp}
    {

    }

===============================================================

==> Deep copy

--> it creates a copy of the pointed-to data

--> each copy will have a pointer to a unique storage in the heap

--> deep copy when you have a raw pointer as a class data member

--> this must be used whenever we are using raw C++ pointers

eg:

class Deep
{
    private:
        int *data;
    public:
        Deep(int d);                    constructor
        Deep(const Deep &source);       copy constructor
        ~Deep();                        destructor
        void display_deep(Deep s)
        {
            cout<<s.get_data_value()<<endl;
        }
};

Deep::Deep(int d)
{
    data = new  int;
    *data = d;
}

Deep::Deep(const Deep &source)
    :Deep{*source.data}
    {
        cout<<"Copy Constructor"<<endl;
    }


Deep::~Deep()
{
    delete data;
    cout<<"Deleted"<<endl;
}

int main()
{
    Deep obj1 {100};
    display_deep(obj1);

    obj1.set_data_value{1000};
    Deep obj2{obj2};
}

==> Move Constructor

--> sometimes when we execute code the compiler creates unnamed temporay values

eg:

int total{0};
total = 100 + 200;

==> 300 is stored in an unnamed temp value , and then is stored in variable
==> then temp is discarded

--> this happens to objects as well
--> sometimes copy constructors are called many times automatically due to the copy semantics of C++
--> copy constructors doing deep copying can have a significant performance bottleneck

==> C++11 introduced move semantics and constructor
--> it moves the object rather then copy it

==> optional but recommended when we use raw pointers

==> copy elision- C++ may optimize copying away completely (return value optimization RVO)

==> R value references

--> used in moving semantics and perfect forwarding
--> r value reference operator &&           L value &
--> used by move constructor and move assignment operator to efficiently move an object rather than copy it

eg:

int x{100};
    int &l_ref = x;             we can access the variable x, L-Value
    l_ref = 10;                 changing x to 10

    int &&r_ref = 200;          we can access the value of x, R-Value
    r_ref = 300;                x now contains 300


    int &&x_ref = x;        compiler error

==> L-Value reference parameters

--> int x{100};             x ---> l-value

void func(int &num);            // A    :   requires L value
void fun(int &&num);            // B    :   requires R value

func(x);        // calls A, since x is an l value
func(100);          // error, as 100 is an r value

fun(x);             // error, as x is an l value
fun(100);       // calls B, since 100 is an l value


==> example:

class Move{
    private:
        int *data;
    public:
        void set_data_value(int d)  { *data = d; }
        int get_data_value()        { return *data; }
        Move(int d);                // Constructor
        Move(const Move &source);   // Copy Constructot
        ~Move;                      // Destructor
};

Move::Move(const Move &source)
{
    data = new int;
    *data = *source.data;
}

// inefficent copying

Vector <Move> vec;

vec.push_back(Move{10});
vec.push_back(Move{20});

==> What does the move constructor do

--> instead of making a deep copy it moves the resource
--> it simply copies the address of the resource from source to the current object
--> nulls out the pointer in the source pointer

--> very efficient

==>

Move::Move(Move &&source)
    : data{source.data}
    {
        source.data = nullptr;          // it steals the data and nulls out the source pointer
    }

==> This Pointer

--> this is a reserved keyword
--> it contains the address of the object
--> it can be used in class scope

--> all members access is done via the this pointer

--> they can also be dereferenced with *this

eg:

void Accout::set_balance(double bal)
{
    balance = bal;      // this-> balance is implied
}

where as , in places as such

void Accout::set_balance(double balance)
{
    balance = balance;      // this wont work, therby we use
}

void Accout::set_balance(double balance)
{
    this->balance = balance;      // unambigious
}

==> using const with classes

--> by using {some function} const;
we can get any constant values in the output as well as errors if we try changing them

==> static class members

--> class data members be declared as static
--> its useful to store class-wide information

--> class functions can be declared as static
--> independant of any objects
--> can be called using the class name

eg:

class Player
{
    private:
        static int num;
    public:
        static int get_num();
};

inside Player.cpp,

int Player::get_num()
{
    return num;
}

for updating the num,
the copy constructor

Player::Player(sring name, int health, int xp)
    : name{name}, health{health}, xp{xp}
    {
        num++;
    }

and the respective destructor

Player:~Player()
{
    num--;
}

.....

void display()
{
    cout<<Player::get_num()<<endl;
}

int main()
{
    Player obj1{"Frank"};
    display();
}

==> Struct VS Classes

--> in addition to define a class we can declare a struct
--> struct comes from C

--> in structs, by default the members are public
--> in classes, by default the members are private

==> summary,

--> struct
    i. use struct for passive objcets with public access
    ii. dont declare methods in struct

--> class
    i. use class for active objects with private access
    ii. implement getters/setters as needed
    iii. implement member methods as needed

==> Friends

--> Friend
    i. a function or class that has access to private class members
    ii. that function of or class is not a member of the class its accessing

--> Function
    i. can be regular non-member functions
    ii. can be member methods of another class

--> class
    i. another class can have access to private class members

--> friendship must be granted not taken
    i. declared explicity in the class that is granting friendship
    ii. declared in the function prototype with the keyword frien

--> friendship is not symmetric
    i. must be explicitly granted
        =-> if a is a frnd of b, then its not compulsory that b is a frnd of a

--> friendship is not transitive
    ==-> if a is a frnd of b, and a is a frnd of c, its not a must that b and c are friends unless explicitly given

--> friendship isnt inherited

eg:

class Player
{
    friend void display_player(Player &p);
    string name;
    int health;
    int xp;

    public:
    . 
    . 
    . 
    . 
}

==:

void display_player(Player &p)
{
    cout<<p.name<<endl;
    cout<<p.health<<endl;
    cout<<p.xp<<endl;
}
        // this function can also change private data members

==> member function of another class
friend void {other_class}::display_player(Player &p);

this results in

class other_class
{
    .
    .
    .
    public:
        void display_player(Player &p)
        {
            cout<<p.name<<endl;
            cout<<p.health<<endl;
            cout<<p.xp<<endl;
        }
        .
        .
        .
}




*/