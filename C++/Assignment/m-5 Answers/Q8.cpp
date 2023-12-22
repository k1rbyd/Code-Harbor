#include <iostream>
#include <string>
using namespace std;

class library
{
    string title;
    string author;
    string number;
    public:
        library()
        {
            title = "The Alchemist";
            author = "Paulo Coelho";
            number =  "978-006231";
        }
        library(char a, char b, char c)
        {
            title = a;
            author = b;
            number = c;
        }
        void display()
        {
            cout<<"Title:"<<title<<endl<<"Author:"<<author<<endl<<"ISBN Number:"<<number<<endl;
        }
        void display(string a)
        {
            if (a=="Author" || a == "author")
                cout<<"Author:"<<author<<endl;
            else if (a=="Title" || a == "title")
                cout<<"Title:"<<title<<endl;
            else if (a=="ISBN Number" || a == "ISBN number")
                cout<<"ISBN Number:"<<number<<endl;
            else
                cout<<"Invalid input"<<endl;
        }
};

int main()
{
    library l1;
    string c;
    cin>>c;
    l1.display(c);
}
