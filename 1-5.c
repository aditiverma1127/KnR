#include <stdio.h>

int main()
{
    float fahr, celsius,initial,final, step;
    
    initial =300.0;
    final = 0.0;
    step = 20.0;
    
    printf("Fahrenheit \t| Celsius\n");    
    
    for(fahr = initial; fahr >= final; fahr = initial - step) {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%3f\t|%3.3f\n", fahr, celsius);
        }
}
