#include <iostream>
#include <climits>

class MaximumSubarray {
public:
    int maxSubArraySum(int a[], int size) {
        int max_so_far = INT_MIN, max_ending_here = 0;

        for (int i = 0; i < size; i++) {
            max_ending_here = std::max(a[i], max_ending_here + a[i]);
            max_so_far = std::max(max_so_far, max_ending_here);
        }
        return max_so_far;
    }
};

int main() {
    int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(a) / sizeof(a[0]);

    MaximumSubarray ms;
    int max_sum = ms.maxSubArraySum(a, n);
    std::cout << "Maximum contiguous sum is " << max_sum << std::endl;

    return 0;
}
