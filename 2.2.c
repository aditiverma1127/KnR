#include "stdio.h"
#define LIM 1000
void main()
{/* without using && */
        char s[LIM];
        int i,j,c;    
        for(i=0; ( i < LIM-1) * ((c=getchar())!= '@') * c !='\n' ; ++i)
        s[i] = c;
        s[i] = '\0';
                for(j=0 ; j !='\0' ; j++)
                printf("%c",s[j]);
                
/*without using || */
        for(i=0; (i < LIM-1) + ((c=getchar())!= '@') + c != '\n'; ++i)
        s[i] = c;
        s[i] = '\0';
        for(j=0 ; j != '\0' ; j++)
        printf("%c", s[j]);
        
        }
