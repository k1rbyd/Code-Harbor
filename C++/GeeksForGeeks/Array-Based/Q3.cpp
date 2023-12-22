#include <iostream>
using namespace std;

class solution
{
    int x[100];
    int n;
    int count = 0;
    int flag = 0;
    public:
    void input()
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>x[i];
        }
    }
    void search(int d)
    {
        if(count==n)
            return;
        if(x[count]==d)
            flag++;
        else
        {
            count++;
            search(d);
        }
    }
    void result()
    {
        if(flag==0)
        cout<<"False";
        else 
        cout<<"True";
    }
};

int main()
{
    solution s1;
    s1.input();
    int d;
    cin>>d;
    s1.search(d);
    s1.result();
}