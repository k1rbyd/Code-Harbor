#include <iostream>
using namespace std;

class Student {
    private:
        int scores[5];
    public:
        void input() {
            for (int i = 0; i < 5; i++) {
                cin >> scores[i];
            }
        }
        int calculateTotalScore() {
            int total = 0;
            for (int i = 0; i < 5; i++) {
                total += scores[i];
            }
            return total;
        }
};

int main() {
    int n;
    cin >> n;
    Student students[n];
    for (int i = 0; i < n; i++) {
        students[i].input();
    }
    int kristenScore = students[0].calculateTotalScore();
    int count = 0;
    for (int i = 1; i < n; i++) {
        int total = students[i].calculateTotalScore();
        if (total > kristenScore) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
