#include <iostream>
#include <string>
using namespace std;

class STRING
{
public:
    string a;
    string b;

    STRING()
    {
        cin >> a;
        cin >> b;
    }

    void compare()
    {
        int x = a.length();  
        int y = b.length();

        if (x > y)
            cout << "String s1 is larger than String s2.";
        else if (y > x)
            cout << "String s2 is larger than String s1.";
        else
            cout << "Both Strings s1 and s2 are equal.";
    }
};

int main()
{
    STRING s1;
    s1.compare();
}
