#include <stdio.h>

/* count blanks,tabs and newlines */
int main()
{
        int c,cb,ct,cnl;
        
        cb=ct=cnl=0;
        while ((c=getchar()) != '@')
               if(c==' ')
               ++cb;
               else if(c=='\t')
               ++ct;
               else if(c=='\n')
               ++cnl;
        printf("Number of blanks %d\nNumber of tabs %d \n Number of newlines %d",cb,ct,cnl);
}
