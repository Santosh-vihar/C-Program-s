#include <stdio.h>

int main() {
    int X, Y, Z;
    
    // Read input values
    scanf("%d %d %d", &X, &Y, &Z);
    
    // Calculate the remaining weight that can be loaded onto the truck
    int remainingWeight = Z - Y;
    
    // Calculate the maximum number of mangoes
    int maxMangoes = remainingWeight / X;
    
    // Print the result
    printf("%d\n", maxMangoes);
    
    return 0;
}
