//(n1+n2+...+n)/n
#include <stdio.h>
int main()
{
    double number,court=0,sum=0;
    printf("please input some number,if you want stop ,please input 0\n");
    scanf("%lf",&number);
    while (number!=0) {
        sum+=number;
        court++;
        scanf("%lf",&number);
    }
    printf("%.2f",(sum/court));
    return 0; 
}
