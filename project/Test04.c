/*
 * @Date: 2022-04-16 13:41:44
 * @Author: LiZiHao
 * @LastEditTime: 2022-04-16 13:46:28
 * @FilePath: \c_projects\project\Test04.c
 */
#include<stdio.h>

int main(){
    int number;
    scanf("%d",&number);
    if(number > 10 && number < 20){
        printf("HelloWold\n");
    }
    if(number > 10 || number < 20){
        printf("HelloChina\n");
    }
    /**
     * 
     * &&翻译为并且:只有两个表达式结果都为true时,那么整个结果才为true.
     * ||翻译为或者:当两个表达式只要有一个结果为true,那么整个表达式的结果就为true.
     */
}