#include <stdio.h>

int main(void)
{
float Fahrenheit;
printf("Enter the temperature in Fahrenheit:\n");
scanf("%f",&Fahrenheit);
float celcius = (Fahrenheit-32)/1.8;
printf ("%.2f°F = %.2f°C\n", Fahrenheit, celcius);
// -40 grados needed for Fahrenheit to be the same as Celsius.









}
