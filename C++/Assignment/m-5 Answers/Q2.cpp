#include <iostream>
using namespace std;

int main()
{
    int x{0};
    cin>>x;
    if (x>=0)
    {
        if (x%2==0)
            cout<<"Even"<<endl;
        else
            cout<<"Odd"<<endl;
    }
    else
        cout<<"Invalid"<<endl;
}