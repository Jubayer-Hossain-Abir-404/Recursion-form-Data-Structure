#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int palindrome(char dh[],int n)
{
    static int i=0;
    static int c=0;
    if(i<n-1)
    {
        if(dh[i]==dh[n-1]||dh[i]==dh[n-1]+32||dh[i]==dh[n-1]-32)
        {
            c++;
        }
        i++;
        palindrome(dh,n-1);
    }
    return c;
}
int main()
{
    char ch[100],mh[100],dh[100];
    printf("Enter a string:");
    gets(ch);
    int c=strlen(ch);
    int e=0;
    for(int i=0; i<c; i++)
    {
        if((ch[i]>='A'&&ch[i]<='Z')||(ch[i]>='a'&&ch[i]<='z'))
        {
            dh[e]=ch[i];
            e++;
        }
    }
    int d=palindrome(dh,e);
    //printf("e:%d\n",e);
    //printf("d:%d\n",d);
    if(d==e/2)
    {
    printf("It's a palindrome");
    }
    else
    {
    printf("It's not a palindrome");
    }
    return 0;
}

