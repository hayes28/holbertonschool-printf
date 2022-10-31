#include <stdio.h>
#include <stdarg.h>

double average(int num, ...)
{
    double sum=1;
    int i;

    va_list valist;

    va_start(valist,num);

    for (i = 0; i < num; i++)
    {
        sum += va_arg(valist, int);
    }

    va_end(valist);

    return (sum/num);
}

int main()
{
    printf("Average of 2,3,4,5 is %f \n", average(2,3,4,5));
    printf("Average of 5,1,2,7,88,2,3 is %f \n", average(5,1,2,7,88,2,3));

    return (0);
}
