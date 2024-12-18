#include <stdio.h>

int main() {
    int CP, SP;
    
    // Read input values
    scanf("%d %d", &CP, &SP);
    
    // Calculate the loss
    int loss = CP - SP;
    
    // Calculate the loss percentage
    double lossPercentage = ((double)loss / CP) * 100;
    
    // Print the loss percentage formatted to 2 decimal places
    printf("%.2f\n", lossPercentage);
    
    return 0;
}
