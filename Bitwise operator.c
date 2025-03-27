#include <stdio.h>

// Function to calculate the maximum AND, OR, and XOR values
void calculate_the_maximum(int n, int k) {
    int max_and = 0, max_or = 0, max_xor = 0;

    // Loop through all pairs (i, j) where 1 <= i < j <= n
    for (int i = 1; i < n; i++) {
        for (int j = i + 1; j <= n; j++) {
            // Calculate AND, OR, and XOR
            int temp_and = i & j;
            int temp_or = i | j;
            int temp_xor = i ^ j;

            // Update max_and if conditions are met
            if (temp_and < k && temp_and > max_and) {
                max_and = temp_and;
            }
            // Update max_or if conditions are met
            if (temp_or < k && temp_or > max_or) {
                max_or = temp_or;
            }
            // Update max_xor if conditions are met
            if (temp_xor < k && temp_xor > max_xor) {
                max_xor = temp_xor;
            }
        }
    }
    printf("%d\n", max_and);
    printf("%d\n", max_or);
    printf("%d\n", max_xor);
}
int main() {
    int n, k;
    // Read input values for n and k
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    return 0;
}
