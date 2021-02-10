#include <stdio.h>
#include <math.h>

int main()
{
    double r;
    printf( "Please, enter radius of the circle ");
    scanf( "%lf", &r);
    double circle = pow(r,2) * M_PI;
    printf( "Circle S : %f\n", circle);

    double a;
    printf( "Please, enter side length of the triangle");
    scanf( "%lf", &a);
    double triangle = (pow(a,2) * sqrt(3)) / 4;
    printf( "Triangle S : %f\n", triangle);

    double d;
    printf( "Please, enter length of the square");
    scanf( "%lf", &d);
    double square = pow(d,2);
    printf( "Square S : %f\n", square);

    printf( "The largest area is : %f", (circle > triangle && circle > square) ? circle
                                        : (triangle > circle && triangle >square) ? triangle
                                        : square);

    return 0;
}
