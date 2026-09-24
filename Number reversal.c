#include <stdio.h>
int main()
{
    int a,b,c=0;
    scanf("%d",&a);
    while (1)
    {
      b=a%10;
      a/=10;
      c=c*10+b;
      if (a==0)
      break;
    }
    printf("%d\n",c);
    
    
    int d,e,f=0;
    scanf("%d",&d);
    while (d!=0)
    {
      e=d%10;
      d/=10;
      f=f*10+e;
    }
    printf("%d\n",f);
    
    int l,m,n=0;
    scanf("%d",&l);
    do
    {
      m=l%10;
      l/=10;
      n=n*10+m;
    } while (l!=0);
    printf("%d",n);
    return 0;
    
    
    
    
    
    return 0;






  }


