#include <iostream>
using namespace std;

class Member{
    public:
        int roll, s[5];
};


int main() {
    int n;
    cin >> n;
    Member m[n];
    for (int i=0; i<n; i++){
        cin >> m[i].roll >> m[i].s[0] >> m[i].s[1] >> m[i].s[2] >> m[i].s[3] >> m[i].s[4];
    }
    string proj;
    int a,b,s[5];
    cin >> a >> b >> s[0] >> s[1] >> s[2] >> s[3] >> s[4];
    int mentor[5][10][2];
    for (int i=0; i<5; i++){
        for (int  j=0; j<10; j++){
            for (int k=0; k<2; k++){
                mentor[i][j][k] = 0;
            }
        }
    }
    int max_s[5][2];
    for (int i=0; i<5; i++){
        int high = 0, index = 0;
        for (int j=0; j<n; j++){
            if (m[j].s[i]>high && m[j].s[i] > s[i]){
                high = m[j].s[i];
                index = j;
            }
        }
        mentor[i][0][0] = m[index].roll;
        mentor[i][0][1] = high;
    }
    for (int i=0; i<5; i++){
        int count = 1;
        for (int j=0; j<n; j++){
            if ((m[j].s[i] >= s[i] && mentor[i][0][0] != m[j].roll) || (s[i]-m[j].s[i] == 1 && mentor[i][0][1] > s[i])){
                mentor[i][count][0] = m[j].roll;
                mentor[i][count][1] = m[j].s[i];
                count++;
            }
        }
    }
    for (int i=0; i<5; i++){
        for (int j=0; j<10; j++){
            if (mentor[i][j][0] != 0){
                cout << mentor[i][j][0] << ' ';
            }
        }
        cout << "\n";
    }
}