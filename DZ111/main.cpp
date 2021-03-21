#include <stdio.h>

int main()

{
    int a = 5;
    int c = 5;
    int b, d;
    printf( "Vvedite chislo b, d : ");
    scanf( "%d%d", &b, &d);

    int result_a = a + b - 2;
    printf( "Result \n%d\n", result_a);

    int result_c = c + 1;
    int result_d = c - a + d;
    printf( "Result \n%d\n%d\n", result_c, result_d);

    int a_2 = a*c;
    int c_2 = c-1;
    printf( "Result \n%d\n%d\n", a_2, c_2);

    int a_3 = a/10;
    int c_3 = c/2;
    int b_2 = b -1;
    int d_2 = d * (c + b + a);
    printf( "Result \n%d\n%d\n%d\n%d\n", a_3, c_3, b_2, d_2);
    return 0;
}
