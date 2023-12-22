#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Car {
    string make;
    string model;
    int year;
    int rentalPrice;
public:
    Car()
    {
        make = "Maruthi";
        model = "Swift";
        year = 2022;
        rentalPrice = 15000;
    }
    Car(string make, string model, int year, double rentalPrice) 
    {
        this->make = make;
        this->model = model;
        this->year = year;
        this->rentalPrice = rentalPrice;
    }
    void display(string a)
    {
        if (a== "Make" || a=="make")
        cout<<"Make:"<<make<<endl;
        else if (a=="Model" || a=="model")
        cout<<"Model:"<<model<<endl;
        else if (a=="Year" || a=="year")
        cout<<"Year:"<<year<<endl;
        else if (a=="Rental" || a=="retal")
        cout<<"Rental Price:"<<rentalPrice<<endl;
        else
        cout<<"Invalid";
    }
};

int main() 
{
    Car c1;
    string i;
    cin>>i;
    c1.display(i);
}
