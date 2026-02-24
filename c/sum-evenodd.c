#include <stdio.h>
int main(){
    int m,n,sumE=0,sumO=0;
    printf("Enter the starting and ending points: ");
    scanf("%d%d",&m,&n);
    for (int j=m; j<=n; j++ )
    {
        if (j%2==0)
        {
            sumE+=j;
        }
        else
        {
            sumO+=j;
        }
    }
    printf("sum of even numbers between m and n: %d\n",sumE);
    printf("sum of odd numbers between m and n: %d\n",sumO);
    return 0;
} 