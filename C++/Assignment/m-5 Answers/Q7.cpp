#include <iostream>
#include <iomanip>
using namespace std;

inline double circleArea(const double radius) {
    if (radius < 0) {
        cerr << "Invalid" << endl;
        return -1; 
    }
    return 3.1415 * radius * radius;
}

int main() {
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    double area = circleArea(radius);
    if (area != -1 && radius>=6)
        cout<<"The area of the circle is: "<<setprecision(5)<<area<<endl;
    else if (area != -1 && radius<6)
        cout<<"The area of the circle is: "<<setprecision(4)<<area<<endl;
}
