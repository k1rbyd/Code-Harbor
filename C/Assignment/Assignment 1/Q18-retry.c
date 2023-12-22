#include <stdio.h>
#include <limits.h>

int main() {
    int m, n, k;
    scanf("%d%d%d", &m, &n, &k);

    int t[m], p[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &t[i]);
    }
    for (int i = 0; i < m; i++) {
        scanf("%d", &p[i]);
    }
    int min_time = INT_MAX;
    for (int i = 0; i < (1 << m); i++) {
        int num_chestnuts = 0;
        int total_time = 0;
        for (int j = 0; j < m; j++) {
            if (i & (1 << j)) {
                int chestnuts = (n - num_chestnuts < k) ? n - num_chestnuts : k;
                num_chestnuts += chestnuts;
                total_time += (chestnuts + (num_chestnuts - 1) * p[j]) * (t[j] <= total_time);
            }
        }
        if (num_chestnuts >= k && total_time < min_time) {
            min_time = total_time;
        }
    }
    printf("%d", min_time);
}
