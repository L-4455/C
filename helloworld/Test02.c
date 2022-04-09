/** 
 * @author: LiZhiHao
 * @Date: 2022-04-09 11:12:12
 * @LastEditTime: 2022-04-09 11:14:18
 */
#include<stdio.h>

int main(){
    int num , number = 100,sum;
    printf("请输入100以内的数\n");
    scanf("%d",&num);
    for(num; num <= number;num++){
        sum+=num;
    }
    printf("这个数累加到100为: %d",sum);
}