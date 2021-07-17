#include<stdio.h>
#include<string.h>

int specified(char ch[],char mh,int n)
{
    static int c=0;
    static int i=0;
    if(i<n)
    {
        if(ch[i]==mh)
        {
            c++;
        }
        i++;
        specified(ch,mh,n);
    }
    return c;
}
int main()
{
    char ch[100],mh;
    printf("Enter a string:");
    gets(ch);
    printf("Enter a specified character you want to search:");
    scanf("%c",&mh);
    int c=strlen(ch);
    int d=specified(ch,mh,c);
    if(d==0)
    {
        printf("The specified character has not been found");
    }
    else
    {
        printf("%c has been found %d times",mh,d);
    }
    return 0;
}
