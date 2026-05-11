#include <stdio.h>
//1. Prototype
void c_to_f(void);
void f_to_c(void);


int main(void){
printf("Temperture Converter \n");
printf("1. Celsius to Fahrenheit \n");
printf("2. Farenheit to Celsius \n");
printf("Enter your option: ");
int user_response;
scanf("%d", &user_response);

if(user_response ==1){
    //3. Call
    c_to_f();
 } else if (user_response ==2){
    f_to_c();
 }else{
    printf("Invalid option \n");
 }

}


//2.Define
void c_to_f(void){
    float c;
    printf("enter the temperature in celsius:");
    scanf("%f",&c);
    float f = (c * 1.8) + 32;
    printf("%.2f°c =%.2f°F \n",c,f);
}
void f_to_c(void){
    float f;
    printf("enter the temperature in Fahrenheit:");
    scanf("%f",&f);
    float c = (f - 32) / 1.8;
    printf("%.2f°c =%.2f°F \n",f,c);
    // falla lo ultimo
}
