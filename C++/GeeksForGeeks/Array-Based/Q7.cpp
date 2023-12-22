#include <iostream>
using namespace std;

class solution
{
    public:
    int count0=0;
    int count1=0;
    int count2=0;
    int count3=0;
    int count4=0;
    int count5=0;
    int count6=0;
    int count7=0;
    int count8=0;
    int count9=0;
    int count=0;
    int a[100];
    int n;
    void input()
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
    }
    void result()
    {
        for(int j=0;j<n;j++)
        {
            if(a[j]==0)
            count0++;
            if(a[j]==1)
            count1++;
            if(a[j]==2)
            count2++;
            if(a[j]==3)
            count3++;
            if(a[j]==4)
            count4++;
            if(a[j]==5)
            count5++;
            if(a[j]==6)
            count6++;
            if(a[j]==7)
            count7++;
            if(a[j]==8)
            count8++;
            if(a[j]==9)
            count9++;
            count++;
        }
        if(count0%2!=0)
        cout<<"0"<<endl;
        if(count1%2!=0)
        cout<<"1"<<endl;
        if(count2%2!=0)
        cout<<"2"<<endl;
        if(count3%2!=0)
        cout<<"3"<<endl;
        if(count4%2!=0)
        cout<<"4"<<endl;
        if(count5%2!=0)
        cout<<"5"<<endl;
        if(count6%2!=0)
        cout<<"6"<<endl;
        if(count7%2!=0)
        cout<<"7"<<endl;
        if(count8%2!=0)
        cout<<"8"<<endl;
        if(count9%2!=0)
        cout<<"9"<<endl;
    }
};

int main()
{
    solution s;
    s.input();
    s.result();
}