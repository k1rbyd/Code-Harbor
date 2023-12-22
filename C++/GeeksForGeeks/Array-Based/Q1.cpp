#include <iostream>
using namespace std;

class solution
{
    int x[100];
    int n;
    public:
    void get_data()
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>x[i];
        }
    }
    int get_sum()
    {
        int sum=0;
        for(int j=0;j<n;j++)
        {
            sum+=x[j];
        }
        return sum;
    }
};

int main()
{
    solution s1;
    s1.get_data();
    cout<<s1.get_sum();
}