#include <stdio.h>

int main() {
    char ch;
    int count = 0;

    printf("Enter text (press Enter to stop):\n");

    while ((ch = getchar()) != '\n') {
        count++;
    }

    printf("Total characters entered: %d\n", count);

    return 0;
}
