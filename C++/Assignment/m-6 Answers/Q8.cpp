#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student {
protected:
    string name;
    int rollNo;
public:
    Student(string n, int r) : name(n), rollNo(r) {}
    virtual void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
    }
};

class JuniorStudent : public Student {
public:
    JuniorStudent(string n, int r) : Student(n, r) {}
};

class Grade {
private:
    int marks;
public:
    Grade(int m) : marks(m) {}
    int getMarks() { return marks; }
};

class SeniorStudent : public JuniorStudent, public Grade {
public:
    SeniorStudent(string n, int r, int m) : JuniorStudent(n, r), Grade(m) {}
    void displayDetails() override {
        JuniorStudent::displayDetails();
        cout << "Marks: " << getMarks() << endl;
    }
};

int main() {
    vector<Student*> students;
    string name;
    int rollNo, grade;

    cout << "Enter name:" << endl;
    cin >> name ; 
    cout<<"Enter roll number:"<<endl;
    cin>> rollNo;
    cout<<"Enter grade (0 for junior student, 1-10 for senior student):"<<endl;
    cin>> grade;

    if (grade == 0) {
        JuniorStudent* junior = new JuniorStudent(name, rollNo);
        students.push_back(junior);
    }
    else if (grade >= 1 && grade <= 10) {
        SeniorStudent* senior = new SeniorStudent(name, rollNo, grade);
        students.push_back(senior);
    }
    else {
        cout << "Error: Invalid grade" << endl;
        return 0;
    }

    cout << endl << "Student Details:" << endl;
    students[0]->displayDetails();

}
