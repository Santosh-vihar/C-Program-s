#include <stdio.h>

int main() {
    int N, M, X;
    
    // Read input values
    scanf("%d %d %d", &N, &M, &X);
    
    // Calculate the perimeter
    int perimeter = 2 * (N + M);
    
    // Calculate the total cost
    int cost = perimeter * X;
    
    // Print the total cost
    printf("%d\n", cost);
    
    return 0;
}
