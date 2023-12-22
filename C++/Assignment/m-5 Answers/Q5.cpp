#include <iostream>
using namespace std;

class Rectangle
{
    int length{};
    int width{};
    public:
        Rectangle()
        {
            length=0;
            width=0;
        }
        Rectangle(int a,int b)
        {
            length = a;
            width = b;
        }
        void getArea()
        {
            if (length>0 && width>0)
            {
            int area{};
            area = length*width;
            cout<<"Area:"<<area<<endl;
            }
            else
            cout<<"Invalid"<<endl;
        }
        void getPerimeter()
        {
            if (length>0 && width>0)
            {
            int perimeter{};
            perimeter=2*(length+width);
            cout<<"Perimeter:"<<perimeter<<endl;
            }
            else
            cout<<"Invalid"<<endl;
        }
};

int main()
{
    Rectangle r1;
    r1.getArea();
    Rectangle r2(10,23);
    r2.getArea();
    r1.getPerimeter();
    r2.getPerimeter();
}