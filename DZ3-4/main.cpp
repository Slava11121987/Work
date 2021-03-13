// Переведите число из десятичной системы счисления в двоичную.

#include <stdio.h>
#include <limits.h>

int main()
{
 int N =2;
 for ( int i = sizeof(N) * CHAR_BIT; i >= 0; --i)
     {
     if (N & (1 << i))
        printf( "1");
     else
     printf( "0");
 }
}
