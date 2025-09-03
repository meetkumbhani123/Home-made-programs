/*
 * Character Pattern Printer
 * This program prints a 5x5 pattern where each row contains the same character (A-E)
 */

#include <stdio.h>

int main() {
    char i, j;
    
    printf("Character Pattern:\n");
    printf("------------------\n");
    
    // Outer loop for rows (A to E)
    for (i = 'A'; i <= 'E'; i++) {
        // Inner loop for columns (print same character 5 times)
        for (j = 'A'; j <= 'E'; j++) {
            printf("%c", i);
        }
        printf("\n");  // New line after each row
    }
    
    return 0;
}