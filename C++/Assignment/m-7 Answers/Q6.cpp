#include <iostream>
using namespace std;

class Point
{
public:
    double x;
    double y;
    Point() : x(0.0), y(0.0) {}

    friend istream& operator>>(istream& input, Point& p)
    {
        input >> p.x >> p.y;
        return input;
    }

    friend ostream& operator<<(ostream& output, const Point& p)
    {
        output << "(" << p.x << ", " << p.y << ")";
        return output;
    }
};

int main()
{
    Point point1, point2;
    cout << "Enter x and y coordinates for the first point, separated by a space: ";
    cin >> point1;

    cout << "Enter x and y coordinates for the second point, separated by a space: ";
    cin >> point2;

    if (point1.x == 0 && point1.y == 0 && point2.x == 0 && point2.y == 0)
    {
        cout << "Invalid Co-ordinates" << endl;
    }
    else
    {
        cout << "First point is at " << point1 << endl;
        cout << "Second point is at " << point2 << endl;
    }
}
