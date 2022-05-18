#include <stdio.h>
void tell_story(char plice[8], char person1[10],
                char person2[10])  //定义函数，必须先定义，再使用
{
  printf("从前有座山\n");
  printf("山上有座%s\n", plice);
  printf("%s里有一个%s\n", plice, person1);
  printf("还有一个%s\n", person2);
  printf("%s在给%s讲故事\n", person1, person2);
  printf("故事的内容是\n");
  printf("******************************\n");
}
int main()  //函数不能嵌套定义， 所以tell_story()要定义在主函数之前
{
  int age, i;
  printf("请输入孩子的年龄：");
  scanf("%d", &age);
  if (age >= 0 && age < 3) {
    for (i = 0; i < 5; i++) tell_story("庙", "老和尚", "小和尚");  //调用函数
  } else if (age >= 3 && age < 5) {
    for (i = 0; i < 3; i++) tell_story("道观", "老道士", "小道童");  //调用函数
  } else
    tell_story("尼姑庵", "老尼姑", "小尼姑");  //调用函数
  return 0;
}