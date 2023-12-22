#include <iostream>
using namespace std;

int leap(int);

int main()
{
    int check{0};
    cout<<"Enter the year you want to check:";
    cin>>check;
    int result{0};
    result = leap(check);
    if (result==0)
        cout<<"It's not a leap year."<<endl;
    else
        cout<<"It's a leap year."<<endl;
}

int leap(int year)
{
    if (year % 100 == 0)
    {
        if (year % 400 == 0)
            return 1;
        else
            return 0;
    }
    else if (year < 100)
    {
        if (year % 4 == 0)
            return 1;
        else
            return 0;
    }
    else
    {
        if (year % 4 == 0 && year % 100 != 0)
            return 1;
        else
            return 0;
    }
}
