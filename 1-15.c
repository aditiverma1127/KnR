#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20
void temperature();



int main()
{
    float fahr, celsius;

    fahr =LOWER;
    
   printf("Fahrenheit \t| Celsius\n");   
    temperature();
    
    return 0;
}

void temperature()
{
        float fahr, celsius;

   while(fahr <= UPPER) {
        celsius = 5 * (fahr - 32) / 9;
        printf("%3.3f\t|%3.1f\n", fahr, celsius);
        fahr = fahr + STEP;
    }
    
}

    


