#include <stdio.h>
int main()
{
    float centrigrade, fahrenheit;
    printf("Centrigrate to Fahrenheit converter \n");
    printf("Enter the temparature convert:");
    scanf("%f", &centrigrade);
    fahrenheit = (centrigrade * 9 / 5) + 32;
    printf("Value of given temparature in farenheit is %f",  fahrenheit);
}