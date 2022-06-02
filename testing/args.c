#include <stdarg.h>
#include <stdio.h>

int max(int num_args, ...);

int main (void)
{
    max(4, 10 ,12 , 14, 16);

   return 0;
}

int max(int num_args, ...)
{
    va_list args;
    va_start(args, num_args);
    for (int i = 0; i < num_args; i++)
    {
        int x = va_arg(args, int);
        printf("x: %d\n", x);

    }
    va_end(args);

}