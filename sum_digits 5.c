#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter a Digits\n");
    scanf("%d",&n);

       int a = n%10;
       n= n/10;

       int b = n%10;
       n = n/10;

       sum = a+b+n;

    printf("Sum of Digits = %d",sum);

    return 0;
}
