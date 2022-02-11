#include <stdio.h>

int main()
{
  enum Company { GOOGLE, FACEBOOK, XEROX, YAHOO = 10, EBAY, MICROSOFT } ;

  enum Company xerox = XEROX;
  enum Company google = GOOGLE;
  enum Company ebay = EBAY;
  enum Company yahoo = YAHOO;

  printf("The value of xerox is: %d\n", xerox);
  printf("The value of google is: %d\n", google);
  printf("The value of ebay is: %d\n", ebay);
  printf("The value of yahoo is: %d\n", yahoo);

  return 0;
}
