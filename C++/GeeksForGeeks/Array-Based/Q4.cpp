#include <iostream>
using namespace std;

class solution
{
    int a[3][3];
    int b[3][3];
    int c[3][3];
    public:
    void input()
    {
        cout<<"for a"<<endl;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cin>>a[i][j];
            }
        }
        cout<<"for b"<<endl;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cin>>b[i][j];
            }
        }
    }
    void multi()
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                c[i][j] = a[i][j] * b[i][j];
            }
        }
    }

    void display()
    {
        for(int i=0;i<3;i++)
        {
            for(int k=0;k<3;k++)
            {
                cout<<c[i][k]<<" ";
            }
            cout<<endl;
        }
    }  
};

int main()
{
    solution s1;
    s1.input();
    s1.multi();
    s1.display();
}