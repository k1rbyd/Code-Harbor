#include <iostream>
using namespace std;

int main()
{
    bool equal_result {false};
    bool not_equal_result {false};

    int num1{},num2{};

    // cout<<boolalpha;         {this gives result as true/false instead of 1/0}

    cout<<"Enter 2 integers";
    cin>>num1>>num2;
    equal_result=(num1==num2);
    not_equal_result=(num1!=num2);
    cout<<"Comparision result(equal):"<<equal_result<<endl;
    cout<<"Comparision result(not equal):"<<not_equal_result<<endl;

    // we can use the same code for all data types
    // for the C++ compiler, it stores 12.0 and 11.9999999999999999 the same

    // we can also convert stuff and compare different data types

}