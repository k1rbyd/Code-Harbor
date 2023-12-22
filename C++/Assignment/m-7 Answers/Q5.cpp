#include <iostream>
using namespace std;

class Employee
{
public:
    int basic;
    int hra;
    int da;
    int wagesPerHour;
    int numberOfHours;
    int consolidatedPay;

    Employee(int b, int h, int d, int w, int n, int c) : basic(b), hra(h), da(d), wagesPerHour(w), numberOfHours(n), consolidatedPay(c) {}

    int calculateGrossPay()
    {
        if (basic > 0 && hra >= 0 && da >= 0)
        {
            return basic + hra + da;
        }
        else
        {
            return -1;
        }
    }

    int calculateGrossPay2()
    {
        if (wagesPerHour > 0 && numberOfHours > 0)
        {
            return wagesPerHour * numberOfHours;
        }
        else
        {
            return -1;
        }
    }

    int calculateGrossPay3()
    {
        if (consolidatedPay <= basic)
        {
            return consolidatedPay;
        }
        else
        {
            return -1;
        }
    }
};

int main()
{
    int basic, hra, da, wagesPerHour, numberOfHours, consolidatedPay;
    cin >> basic >> hra >> da >> wagesPerHour >> numberOfHours >> consolidatedPay;
    Employee emp(basic, hra, da, wagesPerHour, numberOfHours, consolidatedPay);
    int grossPay1 = emp.calculateGrossPay();
    int grossPay2 = emp.calculateGrossPay2();
    int grossPay3 = emp.calculateGrossPay3();

    if (grossPay1 == -1 || grossPay2 == -1 || grossPay3 == -1)
    {
        cout << "Invalid Pay Scale" << endl;
    }
    else
    {
        cout << "Regular employees: " << grossPay1 << endl;
        cout << "Daily wages: " << grossPay2 << endl;
        cout << "Consolidated: " << grossPay3 << endl;
    }

}
