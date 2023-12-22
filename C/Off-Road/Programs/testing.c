#include <stdio.h>
#include <stdlib.h>

int main() {
    int* array = malloc(5 * sizeof(int));
    if (array == NULL) {
        printf("Failed to allocate memory.\n");
        return 1;
    }
    
    for (int i = 0; i < 5; i++) {
        array[i] = i;
    }
    
    printf("Original array:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    int* resized_array = realloc(array, 10 * sizeof(int));
    if (resized_array == NULL) {
        printf("Failed to resize memory.\n");
        free(array);
        return 1;
    }
    
    for (int i = 5; i < 10; i++) {
        resized_array[i] = i;
    }
    
    printf("Resized array:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", resized_array[i]);
    }
    printf("\n");
    
    free(resized_array);
    
    return 0;
}
