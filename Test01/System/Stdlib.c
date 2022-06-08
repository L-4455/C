/**
 * @Date: 2022-05-18 15:38:18
 * @LastEditors: LiZiHao
 * @LastEditTime: 2022-06-08 17:00:31
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  // 产生随机数-rand
  int rand(void);
  time_t t;
  srand(time(&t));

  for (int i = 0; i < 5; i++) {
    printf("%d\n", rand() % 50);
  }
}