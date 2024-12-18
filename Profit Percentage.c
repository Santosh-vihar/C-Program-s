#include <stdio.h>

int main() {
    int CP, SP; // Cost Price and Selling Price
    // Read the input values
    scanf("%d %d", &CP, &SP);
    
    // Calculate the profit percentage
    double profit_percentage = ((double)(SP - CP) / CP) * 100;
    
    // Print the result with 2 decimal places
    printf("%.2f\n", profit_percentage);
    
    return 0;
}
