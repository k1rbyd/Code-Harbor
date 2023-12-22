#include <iostream>
#include <string>
using namespace std;

class person
{
    string name;
    int age;
    public:
        person(string n, int a)
        {
            name = n;
            age = a;
        }
        void get_age()
        {
            cout<<"Age:"<<age<<endl;
        }
        void get_name()
        {
            cout<<"Name:"<<name<<endl;
        }
};

int main()
{
    person p("kaushi",24);
    p.get_name();
    p.get_age();
}