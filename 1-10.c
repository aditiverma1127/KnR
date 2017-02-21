#include <stdio.h>

#define BACKSPACE '\b'
#define TAB '\t'
#define BACKSLASH '\\'
/* copy input to output,replacing each tab by \t,each backslash by \b and each backslash by \\ */
int main(void)
{
        int c;
        while((c=getchar()) != '@') {
                 if(c == BACKSPACE) {
                        printf("\\b");
                }
                else if(c== TAB) {
                        printf("\\t");
                }
                else if(c==BACKSLASH) {
                        printf("\\\\");
                }
                else {
                        putchar(c);
                }
        }
        return 0;
                        
                        
}               
        
     
