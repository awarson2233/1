#include <stdio.h>
int main()
{
    int test;
    char grade;
    printf("请输入你的成绩：");
    scanf("%c %d,&grade &test");
    switch (grade)
    {
    case 'A':
        printf("很棒！\n");
        break;
    
    case 'B':
        printf("还不错！\n");
        break;
    default :
        printf("无效的成绩");
    }
    return 0;
}