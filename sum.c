//program to find the sum of first 10 natural numbers
#include<stdio.h>
int main()
{
    int x,sum=0;
    for(x=0;x<=10;x++)
    {
        printf("%d ",x);
        sum=sum+x;
    }
    printf("\n the sum is %d",sum);
    return 0;
}
