#include <stdarg.h>
#include <stdio.h>

int max(int a,int b);

int main (void)
{
   max(10,,20, 14);
   return 0;
}

int max(int a, int b)
{
    if (a > b)
        return a;
    else 
        return b;
}