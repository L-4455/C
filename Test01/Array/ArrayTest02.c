/**
 * @Date: 2022-05-18 13:43:06
 * @LastEditors: LiZiHao
 * @LastEditTime: 2022-05-18 13:47:14
 */
#include <stdio.h>

int main() {
  // 求array数组中的最大值和最小值,这个数组中的元素由用户输入.
  int array[100];
  int enter, max, least;
  printf("请输入0-100数组个数\n");
  scanf("%d", &enter);
  // 接受用户输入
  for (int i = 0; i < enter; i++) {
    printf("输入第%d个数字:", i + 1);
    scanf("%d", &array[i]);
  }
  //   遍历数组,求出最大值
  for (int i = 0; i < enter; i++) {
    if (array[i] > max) {
      max = array[i];
    }
  }
  printf("array数组中最大的值:%d\n", max);
  //   遍历数组,求出最小值
  for (int i = enter - 1; i >= 0; i--) {
    if (array[i] < least) {
      least = array[i];
    }
  }
  printf("array数组中最小的值为:%d\n", least);
}