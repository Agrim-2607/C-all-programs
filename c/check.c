#include <stdio.h>
int main (){
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    if (ch>='a' && ch<='z')
    {
        printf("ch is lowercase");
    }
    else if (ch>='A' && ch<='Z')
    {
        printf("ch is uppercase");
    }
    else if (ch>='0' && ch<='9')
    {
        printf("ch is a digit");
    }
    else 
    {
        printf("ch is a symbol");
    }
    return 0;
}