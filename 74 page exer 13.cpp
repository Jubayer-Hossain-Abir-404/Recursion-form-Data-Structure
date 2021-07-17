#include<stdio.h>
#include<string.h>


int occurence(char ch[],char mh[],int c,int d)
{
    int e=0;
    static int i=0;
    static int f=0;
    int dj=0;
    if(i<c)
    {
        while(ch[i]!=' ')
        {
            if(ch[i]=='\0')
            {
                break;
            }
            else if(ch[i]==mh[dj])
            {
                e++;
            }
            i++;
            dj++;
        }
        i++;
        //printf("\ne:%d\n",e);
        if(e==d)
        {
            f++;
        }
        occurence(ch,mh,c,d);
    }
    return f;
}
int main()
{
    char ch[100],mh[100];
    printf("Enter a string:");
    gets(ch);
    printf("Enter a substring you want to search:");
    gets(mh);
    int c=strlen(ch);
    int d=strlen(mh);
    //printf("c:%d\n",c);
    //printf("d:%d\n",d);
    int g=occurence(ch,mh,c,d);
    if(g==0)
    {
        printf("The substring has occurred none");
    }
    else
    {
        printf("%s has occurred %d times",mh,g);
    }
    return 0;
}
