//正在尝试一种很新的东西（对我而言）
//常量
#include <stdio.h>
int main ()
{
    //字面常量
    3.14;
    10;
    'a';


    //2. const修饰的“常”变量
    int num = 10;
    num = 20;
    printf("num=%d\n", num);


    //3.#define定义的标识符常量
    #define MAX 10000;
    int n = MAX;
    printf("n=%d\n", n);

    
    //4.枚举常量
    //枚举出变量的未来取值
      enum Sex
      {
        MALE,
        FEMALE,
        SECRET
      }

    
    



    return 0;
}