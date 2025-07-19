#include <stdio.h>
int main()
/*
Sum of numbers from 1 to N:
Take input N and print the sum of all numbers from 1 to N.
*/
{
    int sum =0;
    int i;
    int n;
    
    scanf ("%d",&n);
     
    for (i=1;i<=n;i=i+1)
    {
        sum+=i;
    }
      
printf("%d",sum);

    return 0;
}