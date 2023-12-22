#include <iostream>
using namespace std;

class Rectangle
{
    int length;
    int breadth;
    public:
        Rectangle()
        {
            cout<<"Invalid"<<endl;
        }
        
        Rectangle(int x, int y)
        {
            length = x;
            breadth = y;
        }
        void calculateArea()
        {
            if (length>0 && breadth>0)
            {
                int area{length*breadth};
                cout<<"Area : "<<area<<endl;
            }
            else
            cout<<"Invalid";
        }
};

int main()
{

    Rectangle t1;
    t1.calculateArea();
    Rectangle t2(2,5);
    t2.calculateArea();
}
