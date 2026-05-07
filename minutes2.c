#include <stdio.h>

int main(void)
{


    int total_minutes;
    printf("movie running time:");
    scanf("%d", &total_minutes);

    int start_h;
    int start_m;
    printf("start time:");
    scanf("%d:%d", &start_h,&start_m);


    int hours = total_minutes / 60; //hours
    int minutes = total_minutes % 60; //minutes

    int end_h = start_h + hours;
    int end_m = start_m + minutes;

if(end_m>=60){
    end_h = end_h + (end_m/60); // update variable value usamos el mismo valor acual
    end_m = end_m %60;
}

    printf("The movie will last %d h and %d min\n",hours,minutes);
    printf("End time: %d:%02d\n",end_h,end_m);





}
