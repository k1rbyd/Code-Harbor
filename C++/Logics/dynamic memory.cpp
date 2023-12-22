#include <iostream>
using namespace std;

int main()
{
    int *ptr{nullptr};
    ptr = new int;          // if we lose the pointer, we will face a memory leak
    cout<<ptr<<endl;
    delete ptr;

    cout<<"-------------------------------"<<endl;

    int size{0};
    cout<<"Enter the size:";
    cin>>size;

    double *ptr1{nullptr};
    ptr1 = new double[size];

    
    delete [] ptr1;


}