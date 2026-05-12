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
        printf("%.2f=\n",a,b);
    }
void subtract(void){
    float d;
    printf("enter the first number:");
    scanf("%f",&d);
    float e;
    printf("enter the second number:");
    scanf("%f",&e);
    float f =(d-e);
    printf("%.2f=\n",d,e);
}
void multiply(void){
    float g;
    printf("enter the first number:");
    scanf("%f",&g);
    float h;
    printf("enter the second number:");
    scanf("%f",&h);
    float w =(g*h);
    printf("%.2f=\n",g,h);

        }
void divition(void){
    float a;
    printf("enter the first number:");
    scanf("%f",&a);
    float b;
    printf("enter the second number:");
    scanf("%f",&b);
    float c =(a/b);
    printf("%.2f=\n",a,b);

}

//esta mal y flata lo del cero




