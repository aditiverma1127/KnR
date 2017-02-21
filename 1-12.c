#include <stdio.h>

#define IN 1 /*inside a word */
#define OUT 0 /*outside a word */

int main()
{
        int c, newline, newword, newcharacter, state; 
        
        while((c=getchar())!='@') {
             
                if(c==' ' || c== '\t'){
                 printf("\n");
                        putchar(c); 
                }
                else
                putchar(c);
        }
}
       
                
        
