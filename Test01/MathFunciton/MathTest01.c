/**
 * @Date: 2022-05-18 14:02:20
 * @LastEditors: LiZiHao
 * @LastEditTime: 2022-05-18 14:21:14
 */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  /*
      常用的数学函数-fmod
      声明格式:double fmod(double x,double y);
      求两个数的余数.
  */
  double a, b;
  a = 10;
  b = 20;
  printf("%.2f / %.2f 的余数是: %.2f\n", a, b, fmod(a, b));

  /*
      常用数学函数-abs
      声明格式:int abs(int x);
      求整型的绝对值.
  */
  int num = -1;
  num = -2323;
  printf("%d的绝对值是:%d\n", num, abs(num));

  /*
       常用数学函数-fabs
       声明格式:int abs(int x);
       求浮点型的绝对值.
   */
  double number = -12312.123;
  printf("%.3f的绝对值是:%.3f\n", number, fabs(number));

  /*
        常用数学函数-floor
        声明格式:double floor(double x);
        作用:返回小于或等于 x 的最大的整数值(向下取整).
  */
  double number1 = 2.2;
  double number2 = 3.3;
  double number3 = 2.33;
  printf("%.2f这个数向下取整为:%.2f\n", number1, floor(number1));
  printf("%.2f这个数向下取整为:%.2f\n", number2, floor(number2));
  printf("%.2f这个数向下取整为:%.2f\n", number3, floor(number3));

  /*
         常用数学函数-ceil
         声明格式:double celi(double x);
         作用:返回大于或等于 x 的最小的整数值(向上取整).
   */
  printf("===========================================\n");
  double num1 = 3.33;
  double num2 = 123.3;
  double num3 = 23.23;
  double num4 = 23123.3;
  printf("%.2f这个数向上取整为:%.2f\n", num1, ceil(num1));
  printf("%.2f这个数向上取整为:%.2f\n", num2, ceil(num2));
  printf("%.2f这个数向上取整为:%.2f\n", num3, ceil(num3));
  printf("%.2f这个数向上取整为:%.2f\n", num4, ceil(num4));

  /*
         常用数学函数-pow
         声明格式:double pow(double x, double y);
         作用:该函数返回 x 的 y 次幂的结果.
   */
  printf("===========================================\n");
  double num01 = 3.22;
  double num02 = 3;
  printf("%.2f的次幂为:%.2f\n", num01, pow(num01, num02));

  /*
         常用数学函数-sqrt
         声明格式:double sqrt(double y);
         作用:该函数返回 x 的平方根.
   */
  printf("===========================================\n");
  double num03 = 42.1;
  printf("%.2f的平方根为:%.2f", num03, sqrt(num03));
}