/**
 * @Date: 2022-05-18 13:20:55
 * @LastEditors: LiZiHao
 * @LastEditTime: 2022-05-18 13:38:21
 */
#include <stdio.h>

int main() {
  // 求array数组中最大的值和最小值
  int array[10] = {123, 45345, 123436, 54, 34, 5756, 34, 12, 456, 2};

  // 设最大值是第一个元素
  int max = array[0];
  for (int i = 0; i < 10; i++) {
    if (array[i] > max) {
      max = array[i];
    }
  }
  printf("array中最大的值为:%d\n", max);

  // 设最小值是的一个元素
  int least = array[0];
  for (int i = 0; i < 10; i++) {
    if (array[i] < least) {
      least = array[i];
    }
  }
  printf("array中最小的元素是:%d\n", least);
}