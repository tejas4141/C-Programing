#include <stdio.h>

int main() {
    float a, b, AM, HM;

    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter second number: ");
    scanf("%f", &b);

    AM = (a + b) / 2;

    if ((a + b) != 0) {
        HM = (a * b) / (a + b);
        printf("Arithmetic Mean (AM): %.2f\n", AM);
        printf("Harmonic Mean (HM): %.2f\n", HM);
    } else {
        printf("Harmonic Mean is undefined (a + b = 0).\n");
    }

    return 0;
}
