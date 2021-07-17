#include<stdio.h>

float sum=0;
int add(float i,int n)
{
    if(i<=n)
    {
        sum=sum+(1/i);
        add(i+1,n);
    }
    else
    {
        printf("The sum of the series is:%f",sum);
    }
}
int main()
{
    int n;
    printf("How many elements of the series do you want to add:");
    scanf("%d",&n);
    add(1.0,n);
    return 0;
}
