#include <stdio.h>

int main() {
    int side; // Variable to hold the side length of the square
    
    // Read the input value for the side of the square
    scanf("%d", &side);
    
    // Calculate the area and perimeter
    int area = side * side;
    int perimeter = 4 * side;
    
    // Print the area and perimeter
    printf("%d %d\n", area, perimeter);
    
    return 0;
}
