#include<stdio.h>
#include<string.h>

int convert_string(char ch[],int n)
{
    static int i=0;
    static int sum=0;
    if(i<n)
    {
        if(ch[i]=='1')
        {
            sum=sum*10+1;
        }
        else if(ch[i]=='2')
        {
            sum=sum*10+2;
        }
        else if(ch[i]=='3')
        {
            sum=sum*10+3;
        }
        else if(ch[i]=='4')
        {
            sum=sum*10+4;
        }
        else if(ch[i]=='5')
        {
            sum=sum*10+5;
        }
        else if(ch[i]=='6')
        {
            sum=sum*10+6;
        }
        else if(ch[i]=='7')
        {
            sum=sum*10+7;
        }
        else if(ch[i]=='8')
        {
            sum=sum*10+8;
        }
        else if(ch[i]=='9')
        {
            sum=sum*10+9;
        }
        else if(ch[i]=='0')
        {
            sum=sum*10+0;
        }
        i+=1;
        //printf("%d\n",sum);
        convert_string(ch,n);
    }
    return sum;
}
int main()
{
    char ch[100];
    printf("Enter a string:");
    gets(ch);
    int c=strlen(ch);
    int sum=convert_string(ch,c);
    printf("After converting the string into integer:%d",sum);
    return 0;
}
