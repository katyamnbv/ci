#include <stdio.h> 
#include <limits.h> 

int main(void)
{
  printf("Тип Signed Char от %d до %d.\n", SCHAR_MIN, SCHAR_MAX);
  printf("Тип Unsigned Char от 0 до %d.\n", UCHAR_MAX);
  printf("Тип Signed Short от %d до %d.\n", SHRT_MIN, SHRT_MAX); 
  printf("Тип Unsigned Short от 0 до %d.\n", USHRT_MAX); 
  printf("Тип Signed Int от %d до %d.\n", INT_MIN, INT_MAX );
  printf("Тип Unsigned Int от 0 до %u.\n", UINT_MAX);  
  printf("Тип Signed Long от %ld до %ld.\n", LONG_MIN , LONG_MAX);  
  printf("Тип Unsigned Long от 0 до %lu.\n", ULONG_MAX);
return 0;
}