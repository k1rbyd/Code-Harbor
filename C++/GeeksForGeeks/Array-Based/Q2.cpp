#include <iostream>
using namespace std;

class solution
{
    int arr[100];
    int n;
    public:
    void get_data()
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
    }
    int get_max()
    {
        int max = arr[0];
        for(int i=1;i<n;i++)
        {
            if(arr[i]>max)
            {
                max = arr[i];
            }
        }
        return max;
    }
    int get_min()
    {
        int min = arr[0];
        for(int i=1;i<n;i++)
        {
            if(arr[i]<min)
            {
                min = arr[i];
            }
        }
        return min;
    }
};

int main()
{
    solution s1;
    s1.get_data();
    cout<<"MAX:"<<s1.get_max()<<endl;
    cout<<"MIN:"<<s1.get_min();
}