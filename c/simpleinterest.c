#include <stdio.h>
int main(){
    float P,R,T,SI;//P=principle amount, R=rate of interest, T=time period, SI=simple interest
    printf("Enter the value of P, R & T: ");
    scanf("%f%f%f",&P,&R,&T);
    SI=(P*R*T)/100;
    printf("simple interest is: %f", SI);
    return 0;
}