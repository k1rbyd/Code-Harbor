#include<iostream>
using namespace std;

class Student {
public:
    int rollno;
    void getdata() {
        cout<<"Enter rollno: ";
        cin>>rollno;
    }
    void putdata() {
        cout<<"RollNO: "<<rollno<<endl;
    }
};

class Test : public Student {
public:
    int marks1, marks2;
    void getmark() {
        cout<<"Enter marks1 and marks2:"<<endl;
        cin>>marks1>>marks2;
    }
    void putmark() {
        cout<<"Marks1: "<<marks1<<endl;
        cout<<"Marks2: "<<marks2<<endl;
    }
};

class Grade : public Test {
public:
    char grade;
    void computeGrade() {
        int total = marks1 + marks2;
        if(total >= 90) {
            grade = 'A';
        }
        else if(total >= 80) {
            grade = 'B';
        }
        else if(total >= 70) {
            grade = 'C';
        }
        else if(total >= 60) {
            grade = 'D';
        }
        else if(total >= 40) {
            grade = 'E';
        }
        else {
            grade = 'F';
        }
    }
    void putGrade() {
        cout<<"Grade"<<grade<<endl;
    }
};

class Result : public Grade {
public:
    void computeTotal() {
        int total = marks1 + marks2;
        cout<<"Total: "<<total<<endl;
    }
};

int main() {
    Result res;
    char g;

    res.getdata();
    res.getmark();
    cout<<"Enter Grade ";
    cin>>g;
    res.computeGrade();

    if(g==res.grade) {
        res.putdata();
        res.putmark();
        res.putGrade();
        res.computeTotal();
    }
    else {
        cout<<"Error"<<endl;
    }
    return 0;
}
