// (сумма ряда) с точностью 10^-5
// где 0.05<x<1

#include <stdio.h>
#include <math.h>

int main()
{
    double x;
    double sum = 0;
    printf( "Please, enter x : " );
    scanf( "%lf.3", &x );
        for ( double i = 1; true; ++i )
            {
             double step = i / (i + 1) * pow (x,i);
             sum += step;
             if (step < 10e-5)
             break;
            }
             printf( "Result sum : %f", sum);
}
