#include <stdio.h>

int main()
{    
    float fahr, celsius;
    
    printf("Enter the Celsius temperature\n");
    scanf("%f",&celsius);
   
    fahr = ((9.0 * celsius) / 5.0) + 32.0;
    printf("Temperature in Farenheit = %3.5f", fahr);
     
     
}
