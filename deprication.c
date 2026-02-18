#include <stdio.h>

int main() {
    float cost, rate, dep;
    scanf("%f %f", &cost, &rate);
    dep = cost * rate / 100;
    printf("Depreciation = %.2f", dep);
    return 0;
}
