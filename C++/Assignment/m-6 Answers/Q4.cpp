#include<iostream>
#include<string.h>
using namespace std;

class employee
{
    int empno;
    char name[20];
    char desig[20];
    public:
        void get_employee_details()
        {
            cout<<"\nEnter employee number: ";
            cin>>empno;
            cout<<"Enter name: ";
            cin>>name;
            cout<<"Enter designation: ";
            cin>>desig;
        }
        void display_employee_details()
        {
            cout<<"\nEmployee number: "<<empno;
            cout<<"\nName: "<<name;
            cout<<"\nDesignation: "<<desig;
        }
};

class salary : private employee
{
    float hra, da, pf, net_pay;
    public:
        void get_salary_details()
        {
            get_employee_details();
            cout<<"Enter HRA: ";
            cin>>hra;
            cout<<"Enter DA: ";
            cin>>da;
            cout<<"Enter PF: ";
            cin>>pf;
        }
        void display_salary_details()
        {
            display_employee_details();
            cout<<"\nHRA: "<<hra;
            cout<<"\nDA: "<<da;
            cout<<"\nPF: "<<pf;
        }
};

class bank_details : private salary
{
    char bank_name[20];
    int acc_no;
    public:
        void get_bank_details()
        {
            get_salary_details();
            cout<<"Enter bank name: ";
            cin>>bank_name;
            cout<<"Enter account number: ";
            cin>>acc_no;
        }
        void display_bank_details()
        {
            display_salary_details();
            cout<<"\nBank name: "<<bank_name;
            cout<<"\nAccount number: "<<acc_no;
        }
};

int main()
{
    bank_details emp;
    emp.get_bank_details();
    cout<<endl;
    emp.display_bank_details();
}
