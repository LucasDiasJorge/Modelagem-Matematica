#include <stdio.h>

double euler_method(double x0, double y0, double h, double x_target) {
    double x = x0;
    double y = y0;

    while (x < x_target) {
        double y_prime = y + 3; // Derivada y' = y + 3
        y = y + h * y_prime;
        x = x + h;
    }

    return y;
}

int main() {
    double x0 = 0;
    double y0 = 3;
    double h = 0.1;
    double x_target = 0.4;

    double result = euler_method(x0, y0, h, x_target);
    printf("y(%lf) = %lf\n", x_target, result);

    return 0;
}
