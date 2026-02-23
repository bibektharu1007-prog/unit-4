#include <stdio.h>

int main() {
    float cost, rate, dep;

    printf("Enter cost and depreciation rate: ");
    scanf("%f %f", &cost, &rate);

    dep = cost * rate / 100;
    printf("Depreciation = %.2f\n", dep);

    return 0;
}

