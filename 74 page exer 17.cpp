#include<stdio.h>
#include<string.h>
void reverse_string(char ch[],int c)
{
    if(c-1>=0)
    {
        printf("%c",ch[c-1]);
        reverse_string(ch,c-1);
    }
}

int main()
{
    char ch[100];
    printf("Enter a string:");
    gets(ch);
    int c=strlen(ch);
    printf("The string in reversed:");
    reverse_string(ch,c);
}
