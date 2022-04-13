/** 
 * @author: LiZhiHao
 * @Date: 2022-04-09 11:57:40
 * @LastEditTime: 2022-04-13 22:15:02
 */

#include <stdio.h>

int main() {
  /*
      99³Ë·¨±í
  */
  for (int i = 1; i <= 9; i++) {
    for (int j = 1; j <= i; j++) {
      printf("%d*%d=%2d  ", i,j,i*j);
    }
    printf("\n");
  }
}