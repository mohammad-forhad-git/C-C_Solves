#include<stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    for(int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            // For odd rows, print all '#'
            for(int j = 1; j <= m; j++) {
                printf("#");
            }
        } else {
            // For even rows, alternate between printing '#' at the end and the beginning
            if ((i / 2) % 2 == 0) {
                // For the first even row, print '#' at the end
                for(int j = 1; j < m; j++) {
                    printf(".");
                }
                printf("#");
            } else {
                // For the next even row, print '#' at the beginning
                printf("#");
                for(int j = 2; j <= m; j++) {
                    printf(".");
                }
            }
        }
        printf("\n"); // Move to the next line
    }

    return 0;
}
