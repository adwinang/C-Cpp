#include <stdio.h>

int main() {

  double width = 34.2;
  double height = 65.5;
  double perimeter = 0.0;
  double area = 0.0;

  perimeter = 2.0 * (height + width);
  area = width * height;

  printf("Width is:  %.2f, Height is: %.2f, Perimeter is: %f\n", width, height, perimeter);
  printf("Area is: %f\n", area);
  return 0;
}