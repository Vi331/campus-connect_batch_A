#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if (a>='a'&&a<='z')
    printf("lowercase");
    else if(a>='A'&&a<='Z')
    printf("uppercase");
    else
    printf("Number");
}
