#include<stdio.h>
#include<string.h>
int main()
{
    char a[] = "hello";
    char b[] = "world";
    char c[13];
    strcpy(c, a);
    strcat(c, ",");
    strcat(c, b);
    strcat(c, "!");
    printf("%s\n", c);
    return 0;
}
