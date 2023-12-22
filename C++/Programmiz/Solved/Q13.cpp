#include <iostream>
using namespace std;

class Fact
{
    public:
    int Find_Factorial(int x)
    {
        if(x==1)
            return 1;
        else
            return x* Find_Factorial(x-1);
    }
};

int main()
{
    Fact f1;
    int a,b;
    cin>>a;
    b=f1.Find_Factorial(a);
    cout<<b;
}