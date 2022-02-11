#include <stdio.h>

int main() {
  int integerVar = 100;
  float floatingVar = 331.79;
  double doubleVar = 8.44e+11;
  char charVar = 'W';
  _Bool boolVar = 0;

  printf("integerVasr = %i another %i\n", integerVar, integerVar);
  printf("floatingVar = %f\n", floatingVar);
  printf("doubleVar = %e\n", doubleVar);
  printf("doubleVar = %g\n", doubleVar);
  printf("charVar = %c\n", charVar);
  printf("boolVar = %i\n", boolVar);

  float x = 3.99932323232;
  printf("2 Decimal points = %.2f", x);

  return 0;
}