/** 
 * @author: LiZhiHao
 * @Date: 2022-04-09 11:12:12
 * @LastEditTime: 2022-04-13 22:04:06
 */
#include<stdio.h>

int main(){
    /**
     * 100之内的随机数累加
     */
    int num , number = 100,sum = 0;
    printf("请输入100之内的整数:\n");
    scanf("%d",&num);
    for(num; num <= number;num++){
        sum= sum+num;
    }
    printf("该数累加到100为:%d",sum);
}