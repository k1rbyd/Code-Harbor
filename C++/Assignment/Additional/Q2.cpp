#include <iostream>
#include <cstring>
using namespace std;

class Student
{
public:
    int id;
    char name[20];
    bool getsu()
    {
        if (!(cin >> id))
            return false;
        cin.ignore();
        cin.getline(name, 20);
        return true;
    }
    void putsu()
    {
        cout << id << endl;
        cout << name << endl;
    }
};

class Mark : public Student
{
public:
    int m1;
    int m2;
    int m3;
    bool valid;
    bool getmarks()
    {
        if (!(cin >> m1 >> m2 >> m3))
            return false;
        valid = true;
        return true;
    }
    void putmarks()
    {
        if (valid)
        {
            cout << m1 << endl;
            cout << m2 << endl;
            cout << m3 << endl;
        }
        else
        {
            cout << "Invalid Input" << endl;
        }
    }
};

class Result : public Mark
{
public:
    int sum;
    int avg;
    void show()
    {
        if (valid)
        {
            sum = m1 + m2 + m3;
            avg = sum / 3;
            cout << sum << endl;
            cout << avg << endl;
        }
    }
};

int main()
{
    Result s;
    if (s.getsu())
    {
        s.putsu();
        if (s.getmarks())
        {
            s.putmarks();
            s.show();
        }
        else
        {
            cout << "Invalid Input" << endl;
        }
    }
    else
    {
        cout << "Invalid Input" << endl;
    }
    return 0;
}
