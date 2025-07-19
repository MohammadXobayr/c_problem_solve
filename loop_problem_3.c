#include <stdio.h>

int main()
{
    int n;
    int i;
    scanf("%d", &n);  
    i = n;           

    do 
    {
        printf("%d\n", i);
        i = i - 1;     
    } 
    while (i >= 1);   

    return 0;
}
