#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        system函数声明格式:
        int system(const char *command)
    */
    system("cls");
    system("dir");
    system("color 2C");
    system("pause");

    return (0);
    /*
     0 = 黑色       8 = 灰色
      1 = 蓝色       9 = 淡蓝色
      2 = 绿色       A = 淡绿色
      3 = 浅绿色     B = 淡浅绿色
      4 = 红色       C = 淡红色
      5 = 紫色       D = 淡紫色
      6 = 黄色       E = 淡黄色
      7 = 白色       F = 亮白色
    */
}