#include <stdio.h>
#include <math.h>

int main()
{
    double x;
    printf( "Enter point: " );
    scanf( "%lf", &x );
    double result = ((2 * cos( x - (M_PI / 6)) + sqrt(2)) * exp(3*x))
                       / (1/(2*log(x)) + pow(sin(pow(x,2)), 2));
    printf( "%lf" , result);
      return 0;
}
