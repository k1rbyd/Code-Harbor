#include <iostream>
using namespace std;

class MathSymbol
{
public:
    virtual int doOperation(int x, int y) = 0;
};

class Plus : public MathSymbol
{
public:
    int doOperation(int x, int y)
    {
        return x + y;
    }
};

class Minus : public MathSymbol
{
public:
    int doOperation(int x, int y)
    {
        return x - y;
    }
};

int main()
{
    int x, y;
    cout << "Enter the value of x and y: " << endl;
    cin >> x >> y;

    MathSymbol *symbol1 = new Plus();
    int additionResult = symbol1->doOperation(x, y);
    cout << "Addition: " << additionResult << endl;

    MathSymbol *symbol2 = new Minus();
    int subtractionResult = symbol2->doOperation(x, y);
    cout << "Subtraction: " << subtractionResult << endl;

    delete symbol1;
    delete symbol2;

}
