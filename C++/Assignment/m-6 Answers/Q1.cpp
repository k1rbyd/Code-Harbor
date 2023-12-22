#include <iostream>
#include <string>
using namespace std;

class Student
{
    public:
    string name;
    int ID;
    Student()
    {
        cout<<"Enter the ID Number:";
        cin>>ID;
        cout<<"Enter the Name:";
        cin>>name;
    }
};

class Marks
{
    public:
    int m1;
    int m2;
    int m3;
    Marks()
    {
        cout<<"Enter your first mark:";
        cin>>m1;
        cout<<"Enter your second mark:";
        cin>>m2;
        cout<<"Enter your third mark:";
        cin>>m3;
    }
};

class Result
    : public Student, public Marks
{
    public:
    int avg;
    int total;
    Result()
    {
        total = m1+m2+m3;
        avg = total/3;
        cout<<"ID Name:"<<ID<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Mark1:"<<m1<<endl;
        cout<<"Mark2:"<<m2<<endl;
        cout<<"Mark3:"<<m3<<endl;
        cout<<"Total:"<<total<<endl;
        cout<<"Average:"<<avg<<endl;
    }
};

int main()
{
    Result r;
}