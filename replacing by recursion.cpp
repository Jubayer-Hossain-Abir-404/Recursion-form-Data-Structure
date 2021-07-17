#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void casablanca(char ch[],char x,int c)
{
    static int i=0;
    if(i<c)
    {
        if(ch[i]==x)
        {
            ch[i]='a';
        }
        i++;
        casablanca(ch,x,c);
    }
}
int main()
{
    char *ch,x,y;
    ch=(char*)malloc(50*sizeof(char));
    printf("Enter any word:");
    gets(ch);
    int c=strlen(ch);
    printf("Enter the character you want to replace:");
    scanf("%c",&x);
    casablanca(ch,x,c);
    printf("After being replaced:%s",ch);
    free(ch);
    return 0;

}
