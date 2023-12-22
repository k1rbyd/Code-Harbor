/*

==>  One of the most important features in OOPS is inheritance

[protected , the one apart from public and private will be used here]

==> Inheritance 
=================

--> Inheritance provides a method for creating new classes from existing classes

--> the new class contains the data and behaivours of the existing class

--> it allows the reuse if existing classes

--> it allows us to focus on the common attributes among a set of classes

==> inheritance reduces code duplicacy

--> base class ==> parent class/super class
--> derived class ==> child class/sub class

==> when classical or public inheritance is used, the derived classes are sub types of their base clases

==> Generalization, combining similar classes into a single, more general class based on common attributes

==> Specialization, creating new classes from existing classes proving more specialized attributes or operations

==> inheritance or class hierarchies

[most used is the combo of generalization and specialization]


==> Composition
================

--> Both inheritance and composition allow the reuse of existing classes

--> public inheritance
    i. is a relationship
[employee is a person, circle is a shape]

--> composition
    i. has a relationship
[person has a account, circle has a shape]

{inheritance, it uses arrows, child----->parent}
{composition uses dash, ---------}

--> if the "is a" language doesnt make sense, then dont use it with inheritance

--> inheritance adds more complexity, so we could use composition

class Person
{
    private:
        string name;                has-a name
        Account account;            has-a account
};

--> the combo of inheritance and composition can create strogng frameworks

==> C++ syntax for deriving classes from existing classes

--> 
class Base
{
    // Base class members
};
class Derived: {access_specifier} Base
{
    // Derived class members
};

    {ACCESS SPECIFIER CAN BE PUBLIC, PRIVATE OR PROTECTED}

--> If an access specifier isnt denoted, then automatically, it will use private inheritance

i. public:
    a. most common
    b. establishes 'is-a' relationship between derived and base classes

ii. private and protected:
    a. establishes 'derived class has a base class' relationship
    b. 'is implemented in terms of' relationship
    c. different from composition

eg:

class Account
{
    // Account class members
};

class Savings_Account : public Account
{
    // Savings_Account class members
};

Savings_Account 'is-a' Account

--> here everything is shared and the derived class has all access

==> protected class memebers are members that are accessibile to all class functions
--> they are also accessible to all the derived class from the base class

--> but they act like private members, so they cant be accessed openly like public

eg:

class Base
{
    public:
        int a;
                //public class members
    protected:
        int b;
                //protected class members
    private:
        int c;
                //private class members
};

here, 
[most common]
i. in the case of public inheritance, the public class members are inherited and they are also public in the derived class
protected members are inherited and they are also protected in the derived class, there is access
private members are inherited and they are also private in the derived class and there is no access


[its a 'has-a' type]
ii. in the case of protected inheritance, the public and protected base class members are protected in the drived class
private members are not accessible from the derived class

iii. in case of private inheritance, the public and protected base class members are kept private in the derived class
private members are not accessible from the derived class

=====================================================================================

==> Constructors and Destructors

=-> Constructors and class initialization  

--> a derived class inherits from its base class
--> the base part of the derived class must be initialized before the derived class is initialized
--> when a derived object is created, base class constructor executes and then derived class constructor executes

class Base
{
    public:
        Base()
        {
            cout<<"Base"<<endl;
        }
};

class Derived : public Base
{
    public:
        Derived()
        {
            cout<<"Derived"<<endl;
        }
};

--> whereas in destructors, first the derived class destructor is invoked and then the base class is invoked

--> A derived class does not inherit
    i. Base class constructor
    ii. Base class destructor
    iii. Base class overloaded assignment operators
    iv. Base class friend functions

--> whereas, a derived class can invoke i, ii, and iii.

--> C++11 allows explicit inheritane of base 'non-special' constructors using
    i. using Base::Base ; anywhere in the derived class declaration
    ii. lots of rules involved, often better to define constructors yourself

==> passing arugements to base class constructors

--> the base part of a derived class must be initialized first
--> we can invoke the whichever base class constructor we wish in the initialization list of the derived class

class Base
{
    int value;
    public:
        Base() : value{0}
        {
            cout<<"Base no-arg"<<endl;
        }
        Base(int x) : value{x}
        {
            cout<<"Base int"<<endl;
        } 
};

class Derived : public Base
{
    int double_value;
    public:
        Derived(): Base{},double_value{0}
        {
            cout<<"Derived no-arg"<<endl;
        }
        Derived(int x) : Base{x}, double_value{2*x}
        {
            cout<<"Derived int"<<endl;
        }
};

eg output:          Base b;                     Base no-arg
.
.                   Base b{10};                 Base int
.
.                    Derived d;                  Base no-arg
.                                                Derived no-arg
.
.                    Derived d{10};              Base int
.                                                Derived int

==> Copy/Move constructor and overloaded operator=

--> They are not inherited from the Base class

--> but we can explicitly invoke the base class versions from the derived class

--> if we do not define them in derived, then the complier will create them and automatically call the base class's version

--> if we do define them , then we have to invoke the Base version explicitly

--> we have to be careful with raw pointers

--> if both base and derived classes have raw pointers
--> then we must provide them with a deep copy semantics

=-> COPY CONSTRUCTOR

Derived::Derived (const Derived &other)
    : Base(other), {Derived initialization list}
{
    // code
}

--> here derived object 'other' will be sliced

eg:

class Base
{
    int value;
    public:
        Base (const Base &other) : value{other.value}
        {
            cout<<"Base copy"<<endl;
        }
};

class Derived : public Base
{
    int double_value;
    public:
        Derived(const Derived &other)
            :Base(other),double_value{other.double_value}
        {
            cout<<"Derived copy"<<endl;
        }
};

--> MOVE CONSTRUCTOR WORKS IN THE SAME MANNER

--> Operator=

class Base
{
    int value;
    public:
        Base &operator=(const Base &rhs)
        {
            if (this!=&rhs)
                value = rhs.value;
            return *this;
        }
};

class Derived : public Base
{
    int double_value;
    public:
        Derived &operator=(const Derived &rhs)
        {
            if (this!=&rhs)
            {
                Base::operator=(rhs);
                double_value = rhs.double_value;
            }
            return *this;
        }
};

==> Redefining Base class methods

--> Derived class can directly invoke base class methods

--> derived class can override or redefine base class methods

eg:

class Account
{
    public:
        void deposit(double amount)
        {
            balance += amount;
        }
};

class Savings_Account : public Account
{
    public:
        void deposit(double amount)     redefining base class method
        {   
            amount+= some_interest; 
            Account::deposit(amount);   invoking call base class method
        }
};

=-> Static binding of method calls

--> Binding of which method to use is done at compile time
    i. Default binding for C++ is static
    ii. Derived class objects will use Derived::deposit
    iii. but, we can explicitly invoke Base::deposit from Derived::deposit
    iv. ok, but limited - much more powerful approach is dynamic binding

--> Base b;
    b.deposit(100.0);           Base::deposit

--> Derived d;
    d.deposit(100.0);           Derived::deposit

--> Base *ptr = new Derived();
    ptr->deposit(100.0);        Base::deposit

==> Multiple Inheritance

--> A derived clas inherits from two or more Base classes at the same time

--> the base classes may belong to unrelated class hierarchies

--> syntax,

class Derived:
    public Base1, public Base2
    {
        // codes
    };

--> can be easily misued and it can be very complex

*/