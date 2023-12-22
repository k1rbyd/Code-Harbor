/*

==> Polymorphism

--> fundamental to OOP

--> polymorphism
    i. compile-time/early binding/ static binding
    ii. run-time/ late binding/ dynamic binding

--> runtime polymorphism
    -> being able to assign different meanings to the same function at run time

--> allows us to program more abstractly

--> not the default in C++, run-time polymorphism is achieved via, 
    i. inheritance
    ii. Base class pointers or reference
    iii. virtual functions

--> in C++, the default is static binding

--> there are 2 types of polymorphism
    i. compile time
    ii. run time

--> Compile time
    i. function overloading
    ii. operator overloading

--> Run time
    -> Function overriding

eg:

{static binding}

                                head        account
                                part i        --> savings
                                                     --> trust
                                part ii       --> withdraw

Account a;
a.withdraw(100);        Account::withdraw()

Savings b;
b.withdraw(100);        Savings::withdraw()

Checking c;
c.withdraw(100);        Checking::withdraw()

Trust d;
d.withdraw(100);        Trust::withdraw()

Account *p = new Trust();
p->withdraw(100);               Account::withdraw()
                                but it should be, Trust::withdraw()

--> this is done becuz all the complier understands that p is a pointer to an account type, so therby it does that

--> but if we use dynamic binding, we will get what we want
but,
    ==> withdraw method is virtual in Account

--> for dynamic polymorphism we must have:
    i. inheritance
    ii. base class pointer or base class reference
    iii. virutal functions

==> using a base class pointer

Account *p1 = new Account();
Account *p2 = new Savings();
Account *p3 = new Checking();
Account *p4 = new Trust();

p1 -> withdraw(1000);       Accout::withdraw
p2 -> withdraw(1000);       Savings::withdraw
p3 -> withdraw(1000);       Checking::withdraw
p4 -> withdraw(1000);       Trust::withdraw

Account *array[] = {p1,p2,p3,p4};

for (auto i{0};i<4;i++)
    array[i]->withdraw(1000);

[then we have to delete the pointers]

:: the same can be down for vectors ::

vector <Account *> accounts {p1,p2,p3,p4};

for (auto acc_ptr : accounts)
    acc_ptr->withdraw(1000);

[then we have to delete the pointers]

==> Virtual Functions

--> Redefined functions are bound statically
--> Overridden functions are bound dynamically
--> Virtual functions are overridden
--> they allow us to treat all object generally as objects of the base class

=-> Declaring virtual functions

--> Declare the function you want to override as virtual in the base class
--> Virtual functions are virtual all the way down the hierarchy from this point
--> Dynamic polymorphism only via Account class pointer or reference

class Account
{
    public:
        virtual void withdraw (doublt amount);
        . . . . .
};

--> override the function in the derived class
--> functin signature and return type must match exactly
--> virtual keyword not required but is best practise
--> if you dont provide an overirdden version it is inherited from its base class

class Checking : public Account
{
    public:
        virtual void withdraw(double amount);
        . . . .
};

--> to make it dynamic binding, all we have to do is one keyword, VIRTUAL
==========================================================================

--> whenever we have virtual functions we must have virtual destructors.

==> Virtual Destructors

--> problems can happen when we destroy polymorphic objects
--> if a derivd class is destroyed by deleting its storage via the base class pointer and the class a non-virtual destructor
    -> then the behaviour is undefined in the C++ standard
--> derived objects must be destroyed in the correct order starting ar the correct destructor

=-> solution/rule

--> if a class has virtual functions
--> ALWAYS provide a public virutal destructor
--> if base class destructor is virutal then all derived class destructors are also virtual

class Account
{
    public:
        virutal void withdraw(double_amount);
        virutal ~Account() {};
        . . . .
};

--> virtual constructor are not allowed; they really dont make any sense

==> Using the Override Specifier

--> we can override base class virutal functions

--> the function signature and return must be exactly the same

--> if they are different then we have redefinition NOT overriding

--> redefinition is statically bound
--> overriding is dynamically bound

--> C++11 provides an override specifier to have the complier ensure overriding

class Base
{
    public:
        virtual void say_hello() const
        {
            cout<<"Base class obj"<<endl;
        }
        virtual ~Base() {};
};

class Derived : public Base
{
    public:
        virtual void say_hello() const      [if 'const' isnt typed, that will make the 2 functions different and therby,redefinition occurs and not overriding]
        {
            cout<<"Derived class obj"<<endl;
        }
        virtual ~Derived() {};
};

--> we can place the override keyword after the function and this wil make the code display an error if there and we can fix it

==> code giving error which helps us to fix

class Base
{
    public:
        virtual void say_hello() const
        {
            cout<<"Base class obj"<<endl;
        }
        virtual ~Base() {};
};

class Derived : public Base
{
    public:
        virtual void say_hello() override       [MAIN DIFFERENCE]
        {
            cout<<"Derived class obj"<<endl;
        }
        virtual ~Derived() {};
};

--> this will give us the error and we will be able to fix it ez

==> The Final Specifier

--> when used at the class level, it prevents the class from being derived from

--> when used at the method level, it prevents virtual method from being overridden in derived class

eg:

class My_class final
{
    . . . .                                     final cant be derived again
};

class Derived final : public Base
{
    . . . .                                     derived cant be derived again
}

--> if tried to derive, then we will get a compiler error

class A
{
    public:
        virtual void do_something();
        virtual ~A () {};
};

class B : public A
{
    public:
        virutal void do_something() final;      prevents further overriding
        virtual ~B(){};
};

class C: public B
{
    public:
        virtual void do_something();            compiler error
        virtual ~C(){};
}

==> Using Base Class references

--> we can also use base class references with dynamic polymorphism
--> useful when we pass objects to functions that expect a base class reference

void do_withdraw(Account &account, double amount)
{
    account.withdraw(amount);
}

Account a;
do_withdraw(a,1000);            Account::withdraw

Trust t;
do_withdraw(t,1000);            Trust::withdraw

--> when we use a base class reference, we will get the polymorphic behaviour

==> Pure virutual functions [and abstract classes]

--> Abstract class
    i. cannot instantiate objects
    ii. these classes are used as base classes in inheritance hierarchies
    iii. often referred to as abstract base classes

--> Concrete class
    i. used to instantiate objects from
    ii. all their member functions are defined
        -> checking account, savings account
        -> faculty, staff
        -> enemy, level boss

==> Abstract base class
    i. usually tooo generic to create objets from
    ii. serves as parent to Derived classes that may hae obejects
    iii. contains at least one pure virtual function

==> pure virtual function
    i. used to make a class abstract
    ii. specified with "=0" in its declaration
    iii. typically does not provide implementations

    i. Derived classes must override the base class
    ii. if the derived class does not override then the derived class is also abstract
    iii. used when it doesnt make sense for a base class to have an implementation
        [but concrete classes must implement it]

        virtual void draw() = 0;
        virtual void defend() = 0;

==> Abstract Base class

i. cannot be instantiated

Shape shape;                    error
Shape *ptr = new Shape();       error

ii. we can use pointers and references to dynamically refer to concrete classes derived from them

Shape *ptr = new Circle();
ptr->draw();
ptr->rotate();

==> Abstract Classes as Interfaces

--> an abstract class that has only pure virtual functions

--> these functions provide a general set of services to the user of the class

--> provided as public

--> each subclass is free to implement these services as needed

--> every servuce (method) must be implemented

--> the service type information is strictly enforced
[when overriding, the functios must match completely]

--> c++ doesnt provide true interfaces

--> we use abstract classes and pure virutal functions to achieve it

--> suppose we want to be able to provide printable support for any object we wish without knowing its implementation at compile time

cout<<any_object<<endl;
[any_object must conform to the printable interface]

class Printable
{
    friend ostream &operator<<(ostream &, const Printable &obj);
    public:
        virtual void print(ostream &os) const = 0;
        virtual ~printable(){};
        . . . . .
};

ostream &operator<<(ostream &os, const printable &obj)
{
    obj.print(os);
    return os;
}

class Any_Class : public printable
{
    public:
        // must override printable::print()
        virtual void print(ostream &os) override
        {
            os<<"some_text";
        }
         . . . . . 
};

eg:

Any_Class *ptr = new Any_Class();
cout<<*ptr<<endl;

void function1 (Any_Class &obj)
{
    cout <<obj<<endl;
}

void function2 (Printable &obj)
{
    cout<<obj<<endl;
}

function1(*ptr);
function2(*ptr);

another example,

class Shape
{
    public:
        virtual void draw()=0;
        virtual void rotate()=0;
        virtual ~Shape(){};
        . . . .
};

class Circle : public Shape
{
    public:
        virtual void draw() override
        {
            . . . . .
        };
        virtual void rotate() override 
        {
            . . . . .
        };
        virtual ~Circle(){};
};

class I_Shape
{
    public:
        virtual void draw()=0;
        virtual void rotate()=0;
        virtual ~I_Shape(){};
        . . . .
};

class Circle : public I_Shape
{
    public:
        virtual void draw() override
        {
            . . . . .
        };
        virtual void rotate() override 
        {
            . . . . .
        };
        virtual ~Circle(){};
};

dynamic polymorphism [another example]

vector <I_Shape *> shapes;

I_Shape *p1 = new Circle();
I_Shape *p2 = new Line();
I_Shape *p3 = new Square();

for (auto const &shape: shapes)
{
    shape->rotate();
    shape->draw();
}

// delete the pointers

*/