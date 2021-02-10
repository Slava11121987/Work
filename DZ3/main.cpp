//Дано натуральное число N. Составить программу для определения количества цифр в этом числе.
#include <stdio.h>

int main()
{
    long int N;
    printf( "Enter number");
    scanf("%ld", &N);
    int digits = 0;
    while( N > 0)
    {
        N /= 10;
        digits++;
    }
    printf( "Number of digits : %d", digits );

    return 0;
}
