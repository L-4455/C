/**
 * @Date: 2022-05-16 23:38:06
 * @LastEditors: LiZiHao
 * @LastEditTime: 2022-05-16 23:52:10
 */

#include <stdio.h>

int main() {
  int a[5] = {23,123,345,546,567};
  printf("%d\n", a[0]);
  // 遍历数组,正序输出.
  /*
    i是下标,5-1是取数组中最后一个元素.
  */
  for (int i = 0; i < 5; i++) {
      printf("a[%d] = %d\n",i,a[i]);
  }
  printf("===================\n");
  // 遍历数组,倒叙输出
  for (int i = 5 -1; i >=  0; i--){
    printf("a[%d] = %d\n",i,a[i]);
  }
  
}
