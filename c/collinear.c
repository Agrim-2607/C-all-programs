#include <stdio.h>
int main(){
    int x1,y1,x2,y2,x3,y3;
    printf("Enter all the points:");
    scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
    if ((y2-y1)/(x2-x1)==(y3-y2)/(x3-x2))
    {
        printf("All the three points are collinear\n");
    }
    else
    {
        printf("All the three points are not collinear\n");
    }
    return 0;
}