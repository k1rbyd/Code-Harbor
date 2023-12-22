#include <iostream>
using namespace std;

int main()
{
    int x;
    cin>>x;
    if(x==1)
        cout<<0<<endl;
    else if(x==2)
        cout<<0<<" "<<1<<endl;
    else if(x>2)
    {
        cout<<0<<" "<<1<<" ";
        int a=0;
        int b=1;
        for(int i=0;i<x-2;i++)
        {
            int c;
            c=a+b;
            cout<<c<<" ";
            a = b;
            b = c;
        }
    }
}