#include<stdio.h>
int main()
{
    int digit;
    printf("Enter a digit\n");
    scanf("%d",&digit);

    int a = digit%10;
    digit = digit/10;
    printf("right rotate = %d%d",a,digit);

    return 0;
}
