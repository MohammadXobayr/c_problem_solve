#include <stdio.h>

int main()

/*Multiplication table of a number:
Take input N and print the multiplication table of that number up to 10.
*/

{
    int n;
    scanf("%d", &n); // Input number N

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}
