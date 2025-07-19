#include <stdio.h>

int main() {
    /*
    Print even numbers from 1 to N:
Take an integer input N and print all even numbers from 1 to N using a while loop.
    */
    int n,
    i = 1;
    scanf("%d", &n);

    while (i <= n) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
        i++;
    }

    return 0;
}
