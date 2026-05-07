#include <stdio.h>

int main(void)
{

float Celsius;
printf("print the temperature in celsius:\n");
scanf("%f",&Celsius);
float fahrenheit = (Celsius*1.8)+32;
printf ("%.2f°c = %.2f°f\n", Celsius, fahrenheit);

if(Celsius < 0){
    printf("❄️ Freezing weather\n");
}else if(Celsius < 10){
    printf("🥶 Very cold weather\n");
}else if(Celsius <20){
    printf("🧥 Chilly weather\n");
}else if(Celsius <30){
   printf("🖼️ Normal weather\n");
}else if (Celsius <40){
    printf("☀️ Hot weather\n");
}else {
    printf("🔥 Very hot weather\n");
}




}








