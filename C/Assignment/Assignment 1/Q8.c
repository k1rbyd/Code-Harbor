#include <stdio.h>
#include <string.h>

int main() {
    int roll[20];
    char name[20][20]; 
    char course[20][20]; 
    int n, i;

    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &roll[i]);
        scanf("%s", name[i]);
        scanf("%s", course[i]);

        int j;
        for(j = 0; j < strlen(course[i]); j++) {
            if (course[i][j] >= '0' && course[i][j] <= '9') {
                strcpy(course[i], "Enter a valid course name");
                break;
            }
        }
    }    

    for(i = 0; i < n; i++) {
        printf("%d\n", roll[i]);
        printf("%s\n", name[i]);
        printf("%s\n", course[i]);
    }

    return 0;
}
