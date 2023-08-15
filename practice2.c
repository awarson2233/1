#include <stdio.h>
int main()
{
    //成绩获取
    char level;
    int grade;
    printf("请输入你的成绩:");
    scanf("%d",&grade);
   
   
   //成绩评级
    if ( grade < 60 )
    {
        level = 'C';
    }

    else if ( grade < 80 )
    {   
        level = 'B';
    }
    
    else if ( grade <100 )
    {
        level = 'A';
    }
    else
    {
        printf("你输入的成绩有误！");
    }
    
    
    //评语输出
    switch (level)
    {
    case 'A':
        printf("你做得非常好！");
        break;

    case 'B':
        printf("干得不错！");  
        break;
    
    case 'C':
        printf("你考得太差了！");
        break;

    default:
        printf("你的成绩无效");
        break;
    }
    return 0;
    
}