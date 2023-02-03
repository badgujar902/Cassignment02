#include<stdio.h>
int main()
{
    int n;
    printf("Enter a Number\n");
    scanf("%d",&n);

    if((n&1)==0)
    {
        printf("Number is even \n");
    }
    else
        printf("Number is odd \n");

    return 0;
}
