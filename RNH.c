#include <string.h>

const char R[][3] = { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" };
const int  N[]    = {1000,  900, 500,  400, 100,   90,  50,   40,  10,    9,   5,    4,   1 };

int from_roman(char* roman) 
{
  int ret = 0; int i = 0;
  while (*roman)
    if (strstr(roman, R[i]) == roman) ret += N[i], roman += strlen(R[i]);
    else i++;
  return ret;
}
void to_roman(int number, char* dest) 
{
  int i =0; *dest =0;
  while (number)
    if (number>=N[i]) dest += sprintf(dest, "%s", R[i]), number -= N[i];
    else i++;
}
