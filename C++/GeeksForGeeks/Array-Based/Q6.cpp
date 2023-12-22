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
    void majority()
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
        count=count/2;
        if(count0>= count)
        cout<<"Majority:0";
        if(count1>= count)
        cout<<"Majority:1";
        if(count2>= count)
        cout<<"Majority:2";
        if(count3>= count)
        cout<<"Majority:3";
        if(count4>= count)
        cout<<"Majority:4";
        if(count5>= count)
        cout<<"Majority:5";
        if(count6>= count)
        cout<<"Majority:6";
        if(count7>= count)
        cout<<"Majority:7";
        if(count8>= count)
        cout<<"Majority:8";
        if(count9>= count)
        cout<<"Majority:9";
    }
};

int main()
{
    solution s;
    s.input();
    s.majority();
}