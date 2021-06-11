#include <stdio.h>

//Вычислить следующие выражения:
//a=5, c=5
//a=a+b-2
//c=c+1, d=c-a+d
//a=a*c, c=c-1
//a=a/10, c=c/2, b=b-1, d=d*(c+b+a)

int main()

{
    int a = 5;
    int c = 5;
    int b, d;
    printf( "Vvedite chislo b, d : ");
    scanf( "%d%d", &b, &d);

    a = a + b - 2;
    printf( "Result \n%d\n", a);

    c = c + 1;
    d = c - a + d;
    printf( "Result \n%d\n%d\n", c, d);

    a = a*c;
    c = c-1;
    printf( "Result \n%d\n%d\n", a, c);

    a = a/10;
    c= c/2;
    b= b -1;
    d= d * (c + b + a);
    printf( "Result \n%d\n%d\n%d\n%d\n", a, c, b, d);
    return 0;
}
