#include <stdio.h>
int main()
{
    int n,b=1;
    printf("please input n\n");
    scanf("%d",&n);
    for (n;n>1;n--)
    b*=n;   
    printf("n!=%d\n",b);
    
    int m,a=1,c=1;
    printf("please input m\n");
    scanf("%d",&m);
    for (c;c<=m;c++)
    a*=c;
    printf("m!=%d",a);
}