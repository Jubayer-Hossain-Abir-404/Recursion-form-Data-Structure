#include<stdio.h>


int binary(int n)
{
    if(n/2==0)
    {
        return 1;
    }
    else
    {
        return 10*binary(n/2)+n%2;
    }
}
int main()
{
    int n,ans;
    printf("Enter a decimal number:");
    scanf("%d",&n);
    ans=binary(n);
    printf("The binary representation of %d is :%d",n,ans);
    return 0;
}
