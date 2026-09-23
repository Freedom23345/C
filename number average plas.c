//(n1+n2+...+n)/n
#include <stdio.h>
int main()
{
    double number,court=0,sum=0;
    printf("please input some number,if you want stop ,please input 0\n");
    while (1) {
    scanf("%lf",&number);
    if (number==0)
    break;
    sum+=number;
    court++;
    }
    printf("average number is%.2f",(sum/court));
    return 0;
}