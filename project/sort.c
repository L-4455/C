/**
 * @author: LiZiHao
 * @Date: 2022-04-13 22:12:24
 * @LastEditTime: 2022-04-13 22:15:26
 */

#include <stdio.h>

int main() {
  /**
   * 随机输入三个整数,按从大到小排序
   */
  int num1, num2, num3, t;
  printf("请输入三个整数:ֵ");
  scanf("%d %d %d", &num1, &num2, &num3);

  if (num1 < num2) {
    t = num1;
    num1 = num2;
    num2 = t;
  }
  if (num1 < num3) {
    t = num1;
    num1 = num3;
    num3 = t;
  }
  if (num2 < num3) {
    t = num2;
    num2 = num3;
    num3 = t;
  }
  printf("%d > %d > %d", num1, num2, num3);
}