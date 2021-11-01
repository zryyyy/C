#include <stdio.h>
int main()
{
    char a;
    while(scanf("%c", &a)&&a!='\n')
        if (a==32) printf("%c",a);
        else printf("%c",a+1);
    return 0;
}