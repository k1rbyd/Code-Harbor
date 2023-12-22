#include <iostream>
using namespace std;

class DB;

class DM {
public:
    double meters;
    double centimeters;
    DM() {
        meters = 0;
        centimeters = 0;
    }
    void getdata() {
        cout << "Enter distance in meters and centimeters:" << endl;
        cout << "Meters: ";
        cin >> meters;
        cout << "Centimeters: ";
        cin >> centimeters;
    }
    friend void add(DM& d, DB& b);
};

class DB : public DM {
public:
    double feet;
    double inches;
    DB() {
        feet = 0;
        inches = 0;
    }
    void getdata() {
        cout << "Enter distance in feet and inches:" << endl;
        cout << "Feet: ";
        cin >> feet;
        cout << "Inches: ";
        cin >> inches;
    }
    friend void add(DM& d, DB& b);
};

void add(DM& d, DB& b) {
    double sum;
    sum = d.meters + (d.centimeters/100) + (b.feet/3.2) + (b.inches/12*2.54);
    cout<<"Sum: "<<sum<<endl;
}

int main() {
    DM d;
    DB b;
    d.getdata();
    b.getdata();
    add(d, b);
}
