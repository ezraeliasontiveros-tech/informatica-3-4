#include <stdio.h>
//1. Prototype
void add (void);
void subtract(void);
void multiply(void);
void divition(void);

int main(void){
    printf("1. Addition \n");
    printf("2. Subtraction \n");
    printf("3. Multiplication \n");
    printf("4. Divition \n");
    printf("Cual va a querer:\n");

    int user_response;
    scanf("%d",&user_response);

if (user_response ==1){
    add();
} else if (user_response ==2){
    subtract();
}else if(user_response ==3){
    multiply();
}else if(user_response ==4){
    divition();
}else{
    printf("invalid option \n");
}
}



//2. define
    void add(void){

        float a;
        printf("enter the first number:");
        scanf("%f",&a);
        float b;
        printf("enter the second number:");
        scanf("%f",&b);
        float l =(a+b);
        printf("%.2f + %.2f =%.2f\n",a,b,l);
    }
void subtract(void){
    float d;
    printf("enter the first number:");
    scanf("%f",&d);
    float e;
    printf("enter the second number:");
    scanf("%f",&e);
    float f =(d-e);
    printf("%.2f - %.2f =%.2f\n",d,e,f);
}
void multiply(void){
    float g;
    printf("enter the first number:");
    scanf("%f",&g);
    float h;
    printf("enter the second number:");
    scanf("%f",&h);
    float w =(g*h);
    printf("%.2f * %.2f =%.2f\n",g,h,w);

        }
void divition(void){
    float a;
    printf("enter the first number:");
    scanf("%f",&a);
    float b;
    printf("enter the second number:");
    scanf("%f",&b);
    float c =(a/b);
    printf("%.2f / %.2f =%.2f\n",a,b,c);

     if (a == 0) {
        printf("The divition of %.2f and %.2f is equal to %.2f\n",a,b,divition);
    }else if(b == 0 ){
        printf("Undefined(you cannot divide by 0).\n");
    } else {
        printf("the divition of %.2f and %.2f is equal to %.2\n",a,b,divition);
    }

}






