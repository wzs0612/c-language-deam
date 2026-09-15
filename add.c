#include <stdio.h>

int main()
{
    int a, b, sum;
    printf("请输入第一个数字：");
    scanf("%d", &a);
    printf("请输入第二个数字：");
    scanf("%d", &b);

    sum = a + b;
    printf("两个数相加结果 = %d\n", sum);
    return 0;
}
