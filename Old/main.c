#include <stdio.h>
#include <math.h>

double integralDefinida(double a) {
    double sum = 0.0;

    sum = -a/0.3 * (cos((0.3*a)) - cos(0));

    return sum;
}

int main() {

    double a = 6.0;

    double result = integralDefinida(a);

    printf("\tOutput: %lf\n", result);

    return 0;
}

//https://pt.khanacademy.org/math/integral-calculus/ic-integration/ic-integral-calc-intro/a/accumulation-and-net-change-in-context