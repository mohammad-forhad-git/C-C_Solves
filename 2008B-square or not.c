#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// Function to check if the binary string can form a beautiful square matrix
bool is_beautiful_square(char* s, int n) {
    int r = (int)sqrt(n);  // Size of the matrix (r x r)

    // Check first and last rows
    for (int i = 0; i < r; i++) {
        if (s[i] != '1' || s[(r-1)*r + i] != '1') {  // First and last rows
            return false;
        }
    }

    // Check first and last columns, and interior elements in middle rows
    for (int i = 1; i < r - 1; i++) {  // Exclude first and last rows
        if (s[i*r] != '1' || s[(i+1)*r - 1] != '1') {  // First and last column in row i
            return false;
        }
        // Check interior elements (should all be '0')
        for (int j = 1; j < r - 1; j++) {
            if (s[i*r + j] != '0') {
                return false;
            }
        }
    }

    return true;
}

int main() {
    int t;
    scanf("%d", &t);  // Read the number of test cases

    while (t--) {
        int n;
        scanf("%d", &n);  // Read the length of the binary string

        char s[n + 1];  // Binary string, with space for null terminator
        scanf("%s", s);  // Read the binary string

        // Check if n is a perfect square
        int sqrt_n = (int)sqrt(n);
        if (sqrt_n * sqrt_n != n) {
            printf("No\n");
        } else {
            if (is_beautiful_square(s, n)) {
                printf("Yes\n");
            } else {
                printf("No\n");
            }
        }
    }

    return 0;
}

