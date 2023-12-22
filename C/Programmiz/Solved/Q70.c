#include <stdio.h>

int main() {
    FILE *fp;
    char line[100];

    fp = fopen(__FILE__, "r");
    if (fp) {
        while (fgets(line, 100, fp)) {
            printf("%s", line);
        }
        fclose(fp);
    }

    return 0;
}
