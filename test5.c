#include <stdio.h>
#include <string.h>
int main()
{
    char arr1[] = "abc";
    char arr2[] = {'a', 'b', 'c'};

    //strlen string length
    int len1 = strlen("arr1");
    int len2 = strlen("arr2");

    printf("%s\n", arr1);
    printf("%s\n", arr2);
    printf("%d\n", len1);
    printf("%d\n", len2);

    return 0;
}