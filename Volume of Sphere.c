#include <stdio.h>
#include <math.h> // Include math.h for M_PI

int main() {
    int R; // Variable to hold the radius of the sphere
    
    // Read the input value for the radius of the sphere
    scanf("%d", &R);
    
    // Calculate the volume of the sphere
    double volume = (4.0 / 3.0) * M_PI * pow(R, 3);
    
    // Print the volume rounded to 2 decimal places
    printf("%.2f\n", volume);
    
    return 0;
}
