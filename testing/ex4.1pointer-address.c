#include<stdio.h>
void main(void)
{
    int a = 5, *b;

    printf("a=%d\n",a);
    b= &a;
    printf("&a= %p\n",&a);
    printf("b=%p\n",b);
    printf("&b= %p\n",&b);
}