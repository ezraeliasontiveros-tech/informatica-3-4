#include <stdio.h>

int main(void)
{
    int length;
    printf("Enter the length of the rectangle: ");
    scanf("%d", &width);
    int area = width*length;
    int perimeter = (width+length)*2;
    printf("\nThe area of the rectangle is: %d\nThe perimeter of the rectangle is %d.\n", area, perimeter);
}
