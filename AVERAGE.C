#include <stdio.h>

int main() {
    int a[5], i;
    float avg = 0;

    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
        avg += a[i];
    }

    avg /= 5;
    for (i = 0; i < 5; i++)
        printf("Deviation: %.2f\n", a[i] - avg);

    return 0;
}
