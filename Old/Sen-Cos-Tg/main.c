#include <stdio.h>
#include <math.h>

int main() {
    double angle = 45; // angle in degrees

    // Convert angle to radians
    double radians = angle * (M_PI / 180.0);

    // Calculate sine
    double sine = sin(radians);

    // Calculate cosine
    double cosine = cos(radians);

    // Calculate tangent
    double tangent = tan(radians);

    printf("Angle: %f degrees\n", angle);
    printf("Sine: %f\n", sine);
    printf("Cosine: %f\n", cosine);
    printf("Tangent: %f\n", tangent);

    return 0;
}
