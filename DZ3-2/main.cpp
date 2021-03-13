// Найти наименьший общий делаитель трех натуральных чисел.
//(1 будет считаться наименьшим общим делителем только,когда других делителей у заданных чисел нет).
//напр.: 5 10 15

#include <stdio.h>

int main()

{
  int a;
  int b;
  int c;
  printf( "Please, enter three digits: ");
  scanf( "%d%d%d", &a, &b, &c);
  int divider = 2;
  int min =1;
  int lowest_divider = 0;
          do
           {
              if (a % divider == 0 && b % divider == 0 && c % divider == 0)
              {
               if (divider == a || divider == b || divider == c)
                   lowest_divider += divider;
              }
               ++divider;
          }
          while ((divider <= a) && (divider <= b ) && (divider <= c));
          printf( "The lowest common divider is: %d", lowest_divider != 0 ? lowest_divider : min);
}
