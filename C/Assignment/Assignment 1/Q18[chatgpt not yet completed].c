#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n, k;
    scanf("%d %d %d", &m, &n, &k); // read in m, n, k from input

    // allocate memory for arrays T and P
    int *T = (int*) malloc(m * sizeof(int)); 
    int *P = (int*) malloc(m * sizeof(int)); 

    // read in m integers and store them in array T
    for (int i = 0; i < m; i++) {
        scanf("%d", &T[i]);
    }

    // read in m integers and store them in array P
    for (int i = 0; i < m; i++) {
        scanf("%d", &P[i]);
    }

    int min_time = T[0]; // initialize min_time to the first element of T
    int total_chestnuts = 0; // initialize total_chestnuts to 0

    // loop until the squirrels have gathered enough chestnuts or it's impossible to do so
    while (1) {
        total_chestnuts = 0; // reset total_chestnuts to 0
        // calculate the number of chestnuts gathered by each squirrel at the current time
        for (int i = 0; i < m; i++) {
            int num_chestnuts = (min_time - T[i]) / P[i] + 1; // calculate the number of chestnuts gathered by the i-th squirrel
            if (num_chestnuts > 0) {
                total_chestnuts += num_chestnuts; // add the number of chestnuts gathered by the i-th squirrel to the total number of chestnuts
            }
        }
        // if the total number of chestnuts is greater than or equal to k, print the current time and break out of the loop
        if (total_chestnuts >= k) {
            printf("%lld\n", min_time);
            break;
        }
        // if it's impossible to gather enough chestnuts, print -1 and break out of the loop
        if (min_time > T[0] + (long long)n * P[0]) {
            printf("-1\n");
            break;
        }
        min_time++; // increment min_time
    }

    free(T); // free memory allocated for array T
    free(P); // free memory allocated for array P

    return 0; // exit program
}