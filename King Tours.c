#include <stdio.h>

int main() {
    int N, M; // N is the number of 5-seater cars, M is the number of 7-seater cars
    // Read the input values
    scanf("%d %d", &N, &M);
    
    // Calculate the maximum number of people that can travel
    int max_people = (N * 5) + (M * 7);
    
    // Print the result
    printf("%d\n", max_people);
    
    return 0;
}
