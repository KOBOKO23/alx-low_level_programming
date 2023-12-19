#include <stdio.h>

int main() {
    int a = 1, b = 2;
    
    /* Print the first two Fibonacci numbers */
    printf("%d, %d", a, b);

    for (int i = 3; i <= 98; ++i) {
        /* Calculate the next Fibonacci number */
        int next = a + b;

        /* Print the Fibonacci number */
        printf(", %d", next);

        /* Update values for the next iteration */
        a = b;
        b = next;
    }

    printf("\n");

    return 0;
}
