#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
  srand(time(0));
  int a= rand()%20+1;
  int b=0,c=0;
  do
  {
    c++;
    scanf("%d",&b);
   if (b>a)
   printf("too big\n");
   else if (b<a)
   printf("too small\n");
   else
   printf("you right\n");
  } while (a!=b);
  printf("you use %d times to get the right answer",c);
  return 0;
}
