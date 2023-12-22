#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> numbers {100,89,10};
    cout<<numbers.at(0)<<endl;
    cout<<numbers.at(1)<<endl;
    cout<<numbers.at(2)<<endl;

    cout<<numbers[0]<<endl;
    cout<<numbers[1]<<endl;
    cout<<numbers[2]<<endl;

    // changing them

    cout<<"Enter 3 new numbers"<<endl;
    cin>>numbers[0]>>numbers[1]>>numbers[2];

    cout<<numbers[0]<<endl;
    cout<<numbers[1]<<endl;
    cout<<numbers[2]<<endl;

    // to see the length of the vector

    cout<<"There are now "<<numbers.size()<<"elements."<<endl;

    

}