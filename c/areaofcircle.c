#include <stdio.h>
int main(){
    float r, area;
    printf("Enter the radius: ");
    scanf("%f",&r);
    area=r*r*3.14159;
    printf("area of circle with radiu is: %f", area);
    return 0;
}