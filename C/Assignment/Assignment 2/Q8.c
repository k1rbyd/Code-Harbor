#include <stdio.h>

int main() {
    int responses[10] = {0};
    int englishDaily = 0, upperTabloid = 0, regionalReaders = 0;
    
    for (int i = 0; i < 10; i++) {
        printf("Enter data for respondent %d:\n", i+1);
        printf("Economic status (0=upper, 1=middle, 2=lower): ");
        int economicStatus;
        scanf("%d", &economicStatus);
        printf("Language preference (0=English, 1=Hindi, 2=Regional Language): ");
        int languagePreference;
        scanf("%d", &languagePreference);
        printf("Category of paper (0=Daily, 1=Supplement, 2=Tabloid): ");
        int paperCategory;
        scanf("%d", &paperCategory);
        
        // Set corresponding bits in integer
        responses[i] |= (1 << economicStatus);
        responses[i] |= (1 << (languagePreference + 3));
        responses[i] |= (1 << (paperCategory + 6));
    }
    
    for (int i = 0; i < 10; i++) {
        if ((responses[i] & (1 << 3)) && (responses[i] & (1 << 6))) {
            englishDaily++;
        }
        if ((responses[i] & 1) && (responses[i] & (1 << 8))) {
            upperTabloid++;
        }
        if (responses[i] & (1 << 5)) {
            regionalReaders++;
        }
    }
    
    printf("\nStatistical data:\n");
    printf("Number of persons who read English daily: %d\n", englishDaily);
    printf("Number of Upper class people who read Tabloid: %d\n", upperTabloid);
    printf("Number of Regional Language readers: %d\n", regionalReaders);
    
    return 0;
}
