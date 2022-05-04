/*
 * @Date: 2022-04-15 17:44:04
 * @Author: LiZiHao
 * @LastEditTime: 2022-04-16 14:20:30
 * @FilePath: \c_projects\project\Test01.c
 */
#include <stdio.h>
/**
 * 输出1-N之内的素数,并累加.
 */
int main() {
  int sum = 0;
  int count = 0;
  int number;
  printf("请输入数字:\n");
  scanf("%d",&number);
  for(int i = 2;i <= number; i++){
    int panduan = 1;
    for(int j = 2; j < i; j++){
      if(i % j == 0){
        panduan = 0;
        sum += i;
        break;
      }
    }
    if(panduan){
      printf("%d\n",i);
      count++;
    }
  }
  printf("1-%d的素数个数为:%d\n",number,count);
  printf("1-%d的素数和为:%d\n",number,sum);
  return 0;
}