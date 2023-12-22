#include <iostream>
using namespace std;

class Student {
    protected:
        string name;
        string id;
        int age;

    public:
        void getstu() {
            cout << "Enter Name: ";
            getline(cin, name);
            cout << "Enter ID: ";
            getline(cin, id);
            cout << "Enter Age: ";
            cin >> age;
            cin.ignore();
        }

        void putstu() {
            cout << "Name: " << name << endl;
            cout << "ID: " << id << endl;
            cout << "Age: " << age << endl;
        }
};

class UnderGraduate : virtual public Student {
    protected:
        int ugCourses;

    public:
        void getUGCourses() {
            cout << "Enter Number of UG courses offered: ";
            cin >> ugCourses;
        }

        void putUGCourses() {
            cout << "Number of UG courses offered: " << ugCourses << endl;
        }
};

class PostGraduate : virtual public Student, virtual public UnderGraduate {
    protected:
        int pgCourses;

    public:
        void getPGCourses() {
            cout << "Enter Number of PG courses offered: ";
            cin >> pgCourses;
        }

        void putPGCourses() {
            cout << "Number of PG courses offered: " << pgCourses << endl;
        }
};

int main() {

    PostGraduate pg;
    pg.getstu();
    pg.getUGCourses();
    pg.getPGCourses();

    cout << "\nOutput:" << endl;
    pg.putstu();
    pg.putUGCourses();
    pg.putPGCourses();

    return 0;
}
