#include <stdio.h>

int main() {
  int enter[10];
  for (int i = 0; i < 10; i++) {
      printf("请输入第%d个数字:",i+1);
      scanf("%d",&enter[i]);
  }
  
}