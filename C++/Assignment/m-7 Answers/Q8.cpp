#include <iostream>
using namespace std;

class Test
{
private:
    int a, b, c;

public:
    Test(int x, int y, int z) : a(x), b(y), c(z) {}

    void display()
    {
        cout << a << ", " << b << ", " << c << endl;
    }

    void operator++()
    {
        ++a;
        ++b;
        ++c;
    }
};

int main()
{
    int x, y, z;
    cout << "Enter three numbers: ";
    cin >> x >> y >> z;

    Test obj(x, y, z);
    obj.display();

    ++obj;
    obj.display();

    ++obj;
    obj.display();

}
