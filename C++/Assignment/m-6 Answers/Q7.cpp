#include <iostream>
using namespace std;

class Vehicle {
public:
    int maxSpeed;
    int currentSpeed;
};

class Car : virtual public Vehicle {
public:
    void drive() {
        cout << "Driving!" << endl;
        cout << "Car speed: " << currentSpeed << endl;
    }
};

class Plane : virtual public Vehicle {
public:
    int altitude;
    void fly() {
        cout << "Flying!" << endl;
        cout << "Plane speed: " << currentSpeed << endl;
        cout << "Plane altitude: " << altitude << endl;
    }
};

class FlyingCar : public Car, public Plane {
public:
    void fly() {
        cout << "Flying!" << endl;
        cout << "Flying car speed: " << currentSpeed << endl;
        cout << "Flying car altitude: " << altitude << endl;
    }
};

int main() {
    FlyingCar myCar;

    int speed, altitude;
    cout << "Enter speed: ";
    cin >> speed;
    cout << "Enter altitude: ";
    cin >> altitude;

    myCar.currentSpeed = speed;
    myCar.altitude = altitude;

    myCar.fly();

}
