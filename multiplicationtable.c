/*
 * Multiplication Table Generator
 * This program prompts the user for a number and displays its multiplication table from 1 to 10
 */

#include <stdio.h>

int main() {
    int i, n;
    
    // Prompt user for input
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    // Generate and display multiplication table
    printf("\nMultiplication table for %d:\n", n);
    printf("-------------------------\n");
    
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, i * n);
    }
    
    return 0;
}