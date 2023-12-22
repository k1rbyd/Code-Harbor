#include <iostream>
#include <vector>
using namespace std;

class Member {
public:
    int roll;
    vector<int> s;
};

int main() {
    int n;
    cin >> n;
    vector<Member> m(n);

    for (int i = 0; i < n; i++) {
        cin >> m[i].roll;
        m[i].s.resize(5);
        for (int j = 0; j < 5; j++) {
            cin >> m[i].s[j];
        }
    }

    string proj;
    int a, b;
    vector<int> s(5);

    cin >> a >> b;
    s.resize(5);
    for (int i = 0; i < 5; i++) {
        cin >> s[i];
    }

    vector<vector<vector<int>>> mentor(5, vector<vector<int>>(10, vector<int>(2, 0)));

    for (int i = 0; i < 5; i++) {
        int high = 0, index = 0;

        for (int j = 0; j < n; j++) {
            if (m[j].s[i] > high && m[j].s[i] > s[i]) {
                high = m[j].s[i];
                index = j;
            }
        }

        mentor[i][0][0] = m[index].roll;
        mentor[i][0][1] = high;
    }

    for (int i = 0; i < 5; i++) {
        int count = 1;

        for (int j = 0; j < n; j++) {
            if ((m[j].s[i] >= s[i] && mentor[i][0][0] != m[j].roll) || (s[i] - m[j].s[i] == 1 && mentor[i][0][1] > s[i])) {
                mentor[i][count][0] = m[j].roll;
                mentor[i][count][1] = m[j].s[i];
                count++;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 10; j++) {
            if (mentor[i][j][0] != 0) {
                cout << mentor[i][j][0] << ' ';
            }
        }
        cout << "\n";
    }

    return 0;
}
