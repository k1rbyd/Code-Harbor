#include <iostream>
#include <vector>
using namespace std;

class Solution {
private:
    vector<int> numbers;
public:
    Solution(const vector<int>& arr) : numbers(arr) {}

    bool checkPair(int x) {
        for (int i = 0; i < numbers.size() - 1; i++) {
            for (int j = i + 1; j < numbers.size(); j++) {
                if (numbers[i] + numbers[j] == x) {
                    return true;
                }
            }
        }
        return false;
    }
};

int main() 
{
    vector<int> arr = { 0, -1, 2, -3, 1 };
    int x = -2;

    Solution s(arr);
    if (s.checkPair(x)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
