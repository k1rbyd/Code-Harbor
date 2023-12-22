#include <stdio.h>

int main() {
    int n;
    int oddPlayers[100] = {0};
    int evenPlayers[100] = {0};
    int oddIndex = 0, evenIndex = 0;

    printf("Enter the player numbers: ");

    // Read the input numbers
    while (scanf("%d", &n) == 1 && n > 0) {
        if (n % 2 == 0) {
            evenPlayers[evenIndex++] = n;
        } else {
            oddPlayers[oddIndex++] = n;
        }
    }

    // Print error message if negative number is entered
    if (n < 0) {
        printf("Invalid input, all input must be positive numbers\n");
        return 0;
    }

    // Sort the odd players in ascending order
    for (int i = 0; i < oddIndex - 1; i++) {
        for (int j = i + 1; j < oddIndex; j++) {
            if (oddPlayers[i] > oddPlayers[j]) {
                int temp = oddPlayers[i];
                oddPlayers[i] = oddPlayers[j];
                oddPlayers[j] = temp;
            }
        }
    }

    // Sort the even players in ascending order
    for (int i = 0; i < evenIndex - 1; i++) {
        for (int j = i + 1; j < evenIndex; j++) {
            if (evenPlayers[i] > evenPlayers[j]) {
                int temp = evenPlayers[i];
                evenPlayers[i] = evenPlayers[j];
                evenPlayers[j] = temp;
            }
        }
    }

    // Print the odd and even players
    printf("OddPlayers[] = ");
    for (int i = 0; i < oddIndex; i++) {
        printf("%d ", oddPlayers[i]);
    }
    printf("\nEvenPlayers[] = ");
    for (int i = 0; i < evenIndex; i++) {
        printf("%d ", evenPlayers[i]);
    }
    printf("\n");
}
