#include <iostream>
#include <string>
using namespace std;

class Car
{
    string make{};
    string model{};
    int year{};
    int flag{0};
    public:
        Car()
        {
            make="";
            model="";
            year=0;
            flag=1;
        }
        Car(string a, string b, int x)
        {
            make = a;
            model = b;
            year = x;
            if (x<0)
            flag=1;

            if (flag==0)
            cout<<"Make:"<<make<<",Model:"<<model<<",Year:"<<year;
            else
            cout<<"Invalid";
        }
};

int main()
{
    // enter the code here
    // sample one below
    Car("Suzuki", "Swift", 2020);
}