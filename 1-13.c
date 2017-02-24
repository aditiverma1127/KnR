#include <stdio.h>
#include <stdlib.h>

#define END 7
#define BEGIN 1
#define ON 1
#define OFF 0

int main()
{
        int c, i, state = 1;
        

        
        
        while((c = getchar()) != EOF)
        {
                if(c == ' ' || c == '\n' || c == '\t') {
                        printf("\n");  
                         if(c == '\n') 
                         state = ON;   
                         printf("\t ");
                }
                else {
                        if(state == ON) {
                                printf("\t");
                                for(i = BEGIN; i <= END; i++) printf("%3d", i);
                                printf("\n\t ");   state = OFF;
                        }
                        printf("*  ");
                }
        }
        
        return 0;
}

