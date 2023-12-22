#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, q;
    scanf("%d %d", &n, &q);

    double **masterarray = (double **)malloc(n * sizeof(double *));
    if (!masterarray) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    int mp = 0;
    while (n--) {
        int arraysize;
        scanf("%d", &arraysize);
        masterarray[mp] = (double *)malloc(arraysize * sizeof(double));
        if (!masterarray[mp]) {
            printf("Memory allocation failed!\n");
            return 1;
        }

        for (int i = 0; i < arraysize; i++) {
            scanf("%lf", &masterarray[mp][i]);
        }
        mp++;
    }

    double result[q];
    int k = 0;
    while (q--) {
        int i, j;
        scanf("%d %d", &i, &j);
        if (i < 0 || i >= mp || j < 0 || j >= sizeof(masterarray[i])/sizeof(masterarray[i][0])) {
            printf("Index out of bounds!\n");
            return 1;
        }
        result[k++] = masterarray[i][j];
    }

    for (int i = 0; i < k; i++) {
        printf("%.0lf\n", result[i]);
    }

    for (int i = 0; i < mp; i++) {
        free(masterarray[i]);
    }
    free(masterarray);

}
