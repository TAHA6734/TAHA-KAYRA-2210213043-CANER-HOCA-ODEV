#include <stdio.h>
#include <stdlib.h>

int main()
{
  float fh,c;
  printf("enter fahreneit");
  scanf("%f", &fh);
  c=(fh * 5 / 9) - 32;
  printf("celcius is %f",c);

    return 0;
}
