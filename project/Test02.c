/*
 * @Date: 2022-04-15 17:44:04
 * @Author: LiZiHao
 * @LastEditTime: 2022-04-16 13:53:11
 * @FilePath: \c_projects\project\Test02.c
 */
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
    scanf("%D",&num);
    if(num < 0 || num > 100){
        printf("eroor,输入的数字不在范围内");
    }else{
    for(num; num <= number;num++){
        sum= sum+num;
    }
    printf("该数累加到100为:%d",sum);
    }
}