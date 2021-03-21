// Поменять местами цифры старшего и младшего разрядов данного натурального числа.
// Например, из числа 3879 получится 9783.

#include <stdio.h>

int main()
{
    int N = 3879;
    printf( "%d\n", N);
    int a = N % 100;
    int b = N/100;
    int c = a % 10;
    int d = a/10;
    int i = b % 10;
    int j = b/10;
    printf( "%d%d%d%d", c, d, i, j);
}
