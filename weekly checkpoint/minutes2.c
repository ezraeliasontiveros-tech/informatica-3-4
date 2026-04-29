#include <stdio.h>

int main(void)
{


    int total_minutes;
    printf("movie running time:");
    scanf("%d", &total_minutes);

    int hours = total_minutes / 60; //hours
    int minutes = total_minutes % 60; //minutes

    printf("Equals:%d h %d min\n",hours,minutes);

    int start_h ,start_m;
    printf("enter start hour:");
    scanf("%d",&start_h, &start_m);

    int end_h = start_h + hours;
    int end_m = start_m + minutes;
    printf("End time: %d:%d\n",end_h,end_m);

}
