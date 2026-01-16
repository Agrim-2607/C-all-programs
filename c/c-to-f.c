#include <stdio.h>
int main(){
    float temp_in_c, temp_in_f;
    printf("Enter the temp in celcius: ");
    scanf("%f",&temp_in_c);
    temp_in_f=(18*temp_in_c)+32;
    printf("Temp in fahrenheit: %f", temp_in_f);
    return 0;
}