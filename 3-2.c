#include<stdio.h>
int escape1(char line[],int p);
void escape(char s[],char t[]);
void escape(char s[],char t[])
{
    int i,j;

    i=j=0;

    while(t[i] != '\0')
    {
        switch(t[i])
        {
    case '\t':
                    s[j]='\\';
                    ++j;
                    s[j]='t';
                    break;
                            case '\n':
                    s[j]='\\';
                    ++j;
                    s[j]='n';
            break;
            default:
                    s[j]=t[i];
                    break;
     }
        ++i;
++j;
    }
    
    s[j]='\0';
}

int escape1(char s[],int b)
{
            int i,c;

    for(i=0;i<b-1 && (c=getchar())!='@';++i)
s[i]=c;

s[i]='\0';
}

int main(void)
{
char s[100],t[100];

escape1(t,100);

escape(s,t);

printf("%s",s);

    return 0;
}
