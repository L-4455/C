/** 
 * @author: LiZhiHao
 * @Date: 2022-04-09 11:12:12
 * @LastEditTime: 2022-04-13 22:04:06
 */
#include<stdio.h>

int main(){
    int num , number = 100,sum = 0;
    printf("������100���ڵ���\n");
    scanf("%d",&num);
    for(num; num <= number;num++){
        sum= sum+num;
    }
    printf("������ۼӵ�100Ϊ: %d",sum);
}