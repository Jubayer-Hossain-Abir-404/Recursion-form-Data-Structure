#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void casablanca(char ch[],int c)
{
    static int i=0;
    if(i<c-1)
    {
        if(ch[i]==ch[i+1])
        {
            ch[i]='a';
            for(int j=i+1;j<c;j++)
            {
                ch[j]=ch[j+1];
            }
        }
        i++;
        casablanca(ch,c);
    }
}
int main()
{
    char *ch;
    ch=(char*)malloc(50*sizeof(char));
    printf("Enter a word:");
    gets(ch);
    int c=strlen(ch);
    casablanca(ch,c);
    printf("After replacing:%s",ch);
    free(ch);
    return 0;
}
