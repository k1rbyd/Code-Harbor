#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter value of a:";
    cin>>a;
    cout<<"Enter value of b:";
    cin>>b;
    int temp{0};
    a = a+b;
    b = a-b;
    a = a-b;
    cout<<"Value of a:"<<a<<endl<<"Value of b:"<<b; 
}