#include <stdio.h>
#define BLANKSPACE ' '
#define TAB '\t'
/* copy input to output,replacing each string of one or more blanks by single blank */
int main()
{
        int c;
        while((c=getchar()) != '@'){
              if(c != BLANKSPACE && c!= TAB )
                        putchar(c);
                else if ( c== BLANKSPACE || c == TAB )
                        putchar(' ');
                        
                        }
}               
        
     
