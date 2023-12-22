#include <iostream>
using namespace std;

class Function
{
    public:
    int x;
    Function()
    {
        cin>>x;
    }
    void operator ++()
    {
        cout<<x+2<<endl;
    }
    void operator --()
    {
        cout<<x-2<<endl;
    }
};

int main()
{
    Function f1;
    string c;
    cin>>c;
    if(c=="++")
    ++f1;
    else if(c=="--")
    --f1;
}