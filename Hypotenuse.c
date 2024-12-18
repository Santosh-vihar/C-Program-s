#include <stdio.h>
#include <math.h>

int main() {
    int X, Y;
    
    // Read input values
    scanf("%d %d", &X, &Y);
    
    // Calculate the hypotenuse using the Pythagorean theorem
    double hypotenuse = sqrt(X * X + Y * Y);
    
    // Print the result formatted to 2 decimal places
    printf("%.2f\n", hypotenuse);
    
    return 0;
}
