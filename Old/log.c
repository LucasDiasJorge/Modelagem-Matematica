#include <stdio.h>
#include <math.h>

int main() {
    double log_base_2 = 3.0;  // Replace this with your desired base-2 logarithm.
    double log_base_10;

    // Convert log_base_2 to log_base_10 using the formula.
    log_base_10 = log10(pow(2, log_base_2));

    printf("Log base 2: %.2lf\n", log_base_2);
    printf("Log base 10: %.2lf\n", log_base_10);

    return 0;
}
