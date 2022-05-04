/*
 * @Date: 2022-04-15 17:44:04
 * @Author: LiZiHao
 * @LastEditTime: 2022-04-16 14:11:18
 * @FilePath: \c_projects\project\Test03.c
 */

#include<stdio.h>
/**
 * 用户输入天气状况:
 *      1为:下雨;0:晴天.
 * 如果天气状况为:1
 *      判断用户性别:
 *      1:男;0:女.
 * 如果性别为:1
 *      打印输出:你要带黑伞.
 * 如果性别为:2
 *      打印输出:你要带粉伞.
 * 否则:
 *      打印输出:Error,性别输入错误.
 * 如果天气情况为:2
 *      判断用户性别:
 *      1:男;0:女.
 *      判断当日温度:
 * 如果温度>=30:
 *  当性别为1时,打印输出:你要带墨镜.
 *  当性别为2时,打印输出:你要涂防晒霜.
 * 如果温度<=30:
 *  当性别为1时,打印输出:你要穿少一点.
 *  当性别为0时,打印输出:你要穿凉快一点.
 * 如果天气状况不为1或0:
 *  打印输出:Error,天气状况输出错误.
 * 
 */

int main(){
    int weather;
    int sex;
    int temperature;  
    printf("说明:1代表男/下雨;0代表女/晴天.\n");
    printf("请输入天气状况:\n");
    scanf("%D",&weather);
    if(weather == 1){
        printf("请输入性别:\n");
        scanf("%D",&sex);
        if(sex == 1){
            printf("你要带黑伞");
        }else if(sex == 0){
            printf("你要带粉伞");
        }else{
            printf("eroor,性别输入错误");
        }
    }else if(weather == 0){
        printf("请输入性别:\n");
        scanf("%D",&sex);
        printf("请输入温度:\n");
        scanf("%D",&temperature);
        if(temperature >= 30 ){
            if(sex == 1){
                printf("你要带墨镜.");
            }else if(sex == 0){
                printf("你要涂防晒霜.");
            }else{
                printf("eroor,性别输入错误");
            }
        }else if(weather < 30){
            if(sex == 1){
                printf("你要穿凉快点");
            }else if(sex == 0){
                printf("你要穿黑丝");

            }else{
                printf("eroor,性别输出错误");
            }
        }
    }
    return 0;
}