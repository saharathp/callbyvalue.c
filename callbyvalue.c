#include<stdio.h>
void ten(int a)
{
    a=9;
    a=a+10;
}
int main()
{
    int a=8;
    ten(a);
    printf("The value of a=%d\n",a);
    return 0;
}