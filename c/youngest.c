#include <stdio.h>
int main(){
    int ram,shyam,ajay;
    printf("Enter the ages of ram,shyam and ajay: ");
    scanf("%d%d%d",&ram,&shyam,&ajay);
    if (ram<shyam && ram<ajay)
    {
        printf("ram is the yougest of the three ");
    }
    else if (shyam<ram && shyam<ajay)
    {
        printf("shyam is the yougest of the three ");
    }
    else
    {
        printf("ajay is the yougest of the three ");
    }
    return 0;
}