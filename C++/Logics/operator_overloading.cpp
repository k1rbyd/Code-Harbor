/*

Operator Overloading
=====================

--> allows user defined types to behave similar to built-in types

--> makes the code more readable and writable

--> not done automatically, must be explicitly defined

--> the only one which is automatically overloaded is the "=" operator

==> RULES TO BE FOLLOWED

--> Precedence and associativity cannot be changed

--> arity cannot be changed [ if its binary, it must be binary]

--> cannot overload operators for primitive type

--> canot create new operator

--> [],(),--> and = must be declared as member methods

--> other operators can be declared as member method or global functions


eg ==> OVERLOADING COPY ASSIGNMENT

class Mystring
{
    private:
        char *str;      // c - style string
    public:
        Mystring()
            :str(nullptr)
        {
            str = new char[1];
            *str="\0";
        }
        Mystring(const char *s)
            :str(nullptr)
            {
                if (s==nullptr)
                {
                    str = new char[1];
                    *str="\0";
                }
                else
                {
                    str = new char[strlen(s)+1];
                    strcpy(str,s);
                }
            };
        Mystring(const Mystring &source)
            :str(nullptr)
            {
                str = new char[str(source.str)+1];
                strcpy(str,source.str);
            };
        ~Mystring()
        {
            delete [] str;
        };
        Mystring &Mystring::operator = (const Mystring &rhs)
        {
            cout<<"Copy assignment"<<endl;
            if (this==&rhs)
                return *this;
            delete [] this->str;
            str = new char[strlen(rhs,str)+1];
            strcpy(this->str,rhs.str);
        }
        void display() const
        {
            cout<<str<<":"<<get_length()<endl;
        };
        int get_length() const
        {
            return str;
        };
        const char *get_str() const;
};

int main()
{
    Mystring empty;
    Mystring larry("Larry");
    Mystring stooge("Berry");

    empty.display();
    larry.display();
    stooge.display();
}

==> Copy Operator

--> C++ assignment operator (=)

--> C++ provides a default assignment operator used for assigning one object to another

Mystring s1 {"Frank"};
Mystring s2 {s1}; or Mystring s2 = s1;


s2 = s1;            [assignment operator]

--> DEFAULT IS ALWAYS MEMBERWISE ARRANGEMENT [shallow copy]
[ if we were to use raw pointers, then we must use deep copy]

==> Overloading

--> overloading the copy assignment operator [deep copy]

--> syntax,

Type &Type::operator = (const Type &rhs);

Mystring &Mystring::operator=(const Mystring &rhs);

s2 = s1;
s2.operator = (s1);

-----------------------------------------------------------------------

==> MOVE OPERATOR OVERLOADING

--> if we have raw pointer we should overload the move assignent operator for efficiency

--> s1 = Mystring{"Frank"};         // move assignment

==> syntax,

Type &Type::operator=(Typ &&rhs);

Mystring &Mystring::operator=(Mystring &&rhs);

s1 = Mystring{"Jow"};       // move operator called
s1 = "Frank";               // move operator called 

==>>

Mystring &Mystring::operator=(Mystring &&rhs)
{
    if (this == &rhs)
    return *this;           return curent object

    delete [] str;          deallocating the storage
    str = rhs.str;

    rhs.str = nullptr;

    return *this;
}


==> Overloading Operators using Member Methods

--> unary methods
[they only work on one operand]

--> incase if we need to return a value, we will return using a return by value method here

==> Mystring operator-  make lowercase

Mystring larry1 {"LARRY"};
Mystring larry2;

larry1.display();

larry2 = -larry1;       // larry.operator-()

larry1.display();               LARRY
larry2.display();               larry

here, 

Mystring Mystring::operator-() const
{
    char *buff = new char[strlen(str)+1];
    strcpy(buff,str);
    for(size_t i=0;i<strlen(buff);i++)
        buff[i]=tolower(buff[i]);
    Mystring temp (buff);
    delete [] buff;
    return temp;
}

==> Binary operators , 

ReturnType Type::operatorOp(const Type &rhs);

eg:

Number Number::operator+(const Number &rhs) const;
Number Number::operator+(const Number &rhs) const;
bool Number::operator==(const Number &rhs) const;
bool Number::operator<(const Number &rhs) const;

more examples,

Number n1{100},n2{200};
Number n3 = n2+n1;                          n1.operator+(n2)
n3 = n2 - n1;                               n1.operator-(n2)
if (n1==n2)                                 n1.operator==(n2)
.
.

for ==,

bool Mystring::operator==(const Mystring &rhs) const
{
    if (strcmp(str,rhs.str)==0)
        return true;
    else
        return false;
}

for +,  [concatenation]

Mystring Mystring::operator+(const Mystring &rhs) const
{
    size_t buff_size = strlen(str)+strlen(rhs.str)+1;
    char *buff = new char[buff_size];
    strcpy(buff,str);
    strcat(buff,rhs.str);
    Mystring temp{buff};
    delete [] buff;
    return temp;
}

==> Operator Overloading using global functions

--> unary operator , --,++,-,!

--> syntax,

ReturnType operatorOp(Type &obj);

eg:

Number operator-(const Number &obj);
Number operator++(const Number &obj);          pre increment
Number operator++(const Number &obj, int);     post increment
bool operator!(const Number &obj);


exampless:

Number n1{100};
Number n2 = -n1;
n2 = ++n1;
n2 = n1++;

==> unary functions take in one operand whereas binary takes in 2

-->

Mystring operator-

Mystring operator-(const Mystring &obj)
{
    char *buff = new char[strlen)ob.str+1];
    strcpy(buff,obj.str);
    for (size_t i{0};i<strlen(buff);i++)
        buff[i] = tolower(buff[i]);
    Mystring temp {buff};
    delete [] buff;
    return temp;
}

for ==,

bool Mystring::operator==(const Mystring &lhs, const Mystring &rhs) 
{
    if (strcmp(lhs.str,rhs.str)==0)
        return true;
    else
        return false;
}

for +,  [concatenation]

Mystring Mystring::operator+(const Mystring &lhs,const Mystring &rhs)
{
    size_t buff_size = strlen(lhs.str)+strlen(rhs.str)+1;
    char *buff = new char[buff_size];
    strcpy(buff,lhs.str);
    strcat(buff,rhs.str);
    Mystring temp{buff};
    delete [] buff;
    return temp;
}

==> Stream Insertion and Extraction operators (>>,<<)

<<:stream insertion

std::ostream &operator<<(std::ostream &os, const Mystring &obj))
{
    os<<obj.str;            if friend function
    // os<<obj.get_str();   if not friend function
    return os;
}

>>:stream extraction

std::istream &operator>>(std::istream &is, Mystring &obj)
{
    char *buff = new char [1000];
    is>>buff;
    obj = Mystring(buff);   if you have copy/move assignment
    delete [] buff;
    return is;
}

*/