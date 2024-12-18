#include <stdio.h>

int main() {
    int A, B; // A is the cost of each special attack, B is the total points
    
    // Read the input values
    scanf("%d %d", &A, &B);
    
    // Calculate the number of special attacks
    int special_attacks = B / A; // Integer division
    
    // Print the result
    printf("%d\n", special_attacks);
    
    return 0;
}
