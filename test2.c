 extern int a;
#include <stdio.h>
int main ()
{
    int num1 = 0;
    int num2 = 0;
    int sum  =0;
    printf("请输入需要相加的两个整数:");
    scanf("%d %d", &num1, &num2);
    sum = num1 + num2;
    printf("结果为：%d\n",sum);
    //误差补偿
    printf("%d\n", a);



    return 0;
}