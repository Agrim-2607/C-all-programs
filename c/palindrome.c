#include <stdio.h>
int main(){
    int num,digit,rev=0,temp;
    printf("Enter a number: ");
    scanf("%d",&num);
    temp=num;
    while (num>0)
    {
        digit=num%10;
        rev=rev*10+digit;
        num/=10;
    }
    if (temp==rev)
    {
        printf("This number is palindrome");
    }
    else
    {
        printf("This number is not palindrome");
    }
    return 0;
}