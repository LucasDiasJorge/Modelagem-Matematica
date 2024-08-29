#include <stdio.h>
#include <math.h>

// Function to calculate RSSI
double calculateRSSI(double signalPower, double noisePower) {
    // RSSI = Signal Power - Noise Power
    return signalPower - noisePower;
}

int main() {
    // Example signal and noise power values
    double signalPower = -50.0; // in dBm
    double noisePower = -90.0;  // in dBm

    // Calculate RSSI
    double rssi = calculateRSSI(signalPower, noisePower);

    // Output the result
    printf("RSSI: %.2f dBm\n", rssi);

    return 0;
}
