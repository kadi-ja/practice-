#include <stdio.h>

int main()
{
int a[5] = {0, 1, 10, 11};
int *p = &a[0];
printf("%d\n", *p);

 p = p + 2;
 printf("%d\n", *p);

 p = p - 1;
 printf("%d\n", *p);

 *p = 2;
 printf("%d\n", *p);
 return(0);
 
}
