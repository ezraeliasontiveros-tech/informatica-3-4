#include <stdio.h>
int main (void)
{
int a = 5; //equal sign means assigment
int b = 5;
int c = 10;

printf("%d == %d is %d \n", a,b,a==b); //Equal sign means comparison
printf("%d != %d is %d \n", a,c,a!=c); //!= means "not equal"

//create a progam to check if a number is negative
int number;
printf("Enter a number:");
scanf("%d",&number);

if(number <0){ // si esto es menor a cero
printf("%d is negative number.\n",number);

} else{ // amenos que
    printf("%d is positive number.\n",number);
}


}
