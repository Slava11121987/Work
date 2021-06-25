//Написать программу, определяющую, площадь какой фигуры больше:
// круга радиуса R,
// равностороннего треугольника с длиной стороны а
// или квадрата со стороной d. (используя ?:).

#include <stdio.h>
#include <math.h>

int main()
{
   int lengh_R_=10;
   int lenght_a= 7;
   int lenght_d= 5;
   double circle =pow(lengh_R_,2) *M_PI;
   double triangle =(pow( lenght_a,2) * sqrt(3)) / 4;
   double square = pow(lenght_d, 2);
   printf("S of the circle is %.2f\nS of the triangle is %.2f\nS of  the square is %.2f\n", circle, triangle,square);
   printf("The largest area of the figures is: %f ",
                (circle > triangle && circle >square) ? circle :
                (triangle > circle && triangle > square) ? triangle :
                 square);
}
