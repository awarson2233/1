#include <stdio.h>
int main ()
{
    int num1 = 0;
    int num2 = 0;
    int sum = 0;
    printf("请输入需要相加的两个整数:1");
    scanf("%d %d", &num1, &num2);
    sum = num1 + num2;
    printf("结果为：%d\n",sum);



    return 0;
}