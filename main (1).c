#include <stdio.h>
int main()
{
    int a;
    scanf ("%d",&a);
    if(a>=18)
    {
        printf("vote\n");
        if(a>=25)
        printf("canditate");
        else
        printf("not canditate");
    }
    else
    printf("no vote & candidate");
}