#include <stdio.h>
#include <math.h>

double rssi_to_distance(int rssi, int A, double n) {
    return pow(10, (A - rssi) / (10 * n));
}

int main() {
    int rssi;
    int A = -40; // RSSI at 1 meter (example value)
    double n = 2.0;

    // Input RSSI value
    printf("Enter RSSI value (in dBm): ");
    scanf("%d", &rssi);

    // Calculate distance
    double distance = rssi_to_distance(rssi, A, n);
    printf("Estimated distance: %.2f meters\n", distance);

    return 0;
}
