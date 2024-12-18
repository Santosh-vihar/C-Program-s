#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    
    // Read input values
    scanf("%d %d %d", &a, &b, &c);
    
    // Check for valid triangle using triangle inequality theorem
    if (a + b > c && a + c > b && b + c > a) {
        // Calculate the semi-perimeter
        double s = (a + b + c) / 2.0;
        
        // Calculate the area using Heron's formula
        double area = sqrt(s * (s - a) * (s - b) * (s - c));
        
        // Print the area formatted to 4 decimal places
        printf("%.4f\n", area);
    } else {
        // If not a valid triangle, print area as 0.0000
        printf("0.0000\n");
    }
    
    return 0;
}
