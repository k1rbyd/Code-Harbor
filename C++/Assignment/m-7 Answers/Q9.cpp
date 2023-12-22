#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    int empNo;
    string empName;

public:
    Employee(int no, const string& name) : empNo(no), empName(name) {}

    virtual void display() {
        cout << "Employee No: " << empNo << endl;
        cout << "Employee name: " << empName << endl;
    }

    virtual bool isValidPayScale() {
        return false;
    }

    virtual ~Employee() {}
};

class RegularEmployee : public Employee {
private:
    int salary;

public:
    RegularEmployee(int no, const string& name, int sal) : Employee(no, name), salary(sal) {}

    void display() override {
        Employee::display();
        cout << "Salary: " << salary << endl;
    }

    bool isValidPayScale() override {
        return salary >= 40000;
    }
};

void runTestCases(int empNo, const string& empName, int salary) {
    Employee* emp = new RegularEmployee(18982, "Gobinath", 60000);
    cout << "Derived class:" << endl;
    emp->display();
    cout << "Base class:" << endl;
    Employee* baseEmp = emp;
    baseEmp->display();
    delete emp;
    cout << endl;

    emp = new RegularEmployee(empNo, empName, salary);
    emp->display();
    if (emp->isValidPayScale()) {
        cout << "Valid Pay Scale" << endl;
    } else {
        cout << "Invalid Pay Scale" << endl;
        cout << "Minimum Pay Scale for employee is 40000" << endl;
    }
    delete emp;
}

int main() {
    int empNo, salary;
    string empName;

    cout << "Enter Employee No: ";
    cin >> empNo;
    cout << "Enter Employee Name: ";
    cin.ignore();
    getline(cin, empName);
    cout << "Enter Salary: ";
    cin >> salary;

    runTestCases(empNo, empName, salary);
}
