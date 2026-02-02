#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c,d,x1,x2; //a,b,c are coefficients and d id dicriminant and x1,x2 are roots
    printf("Enter the value of coefficient a,b and c: ");
    scanf("%f%f%f",&a,&b,&c);
    printf("Lets calculate the discriminant\n");
    d=(pow(b,2)-4*a*c);
    if (d>0)
    {
        x1=(b+pow(d,0.5))/2*a;
        x2=(b-pow(d,0.5))/2*a; 
        printf("Roots are%f%f: ",x1,x2);
    }
    else
    {
        printf("No real roots exists");
    }
    return 0;
}