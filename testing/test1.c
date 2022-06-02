/*sum of two numbers*/
#include<stdio.h> /* For printf() & scanf() */
#include<conio.h> /* For clrscr() & getch() */

main() /* Starting point of the program execution*/
{
    int a,b,sum; /* Variable Declarations */
    clrscr(); /* Clear Screen */
    printf("enter two numbers"); /* Request for Input */
    scanf("%d %d",&a,&b); /* Input from user */
    sum=a+b; /* Adding two numbers */
    printf("sum=%d",sum); /* Output Sum */
    getch(); /* To hold output screen */
} /* End of main */