#include<stdio.h>
#include<stdbool.h>//.c文件bool必要的头文件


//初步了解 bool类型


//利用bool类型变量，非0为真的特性
//令bool类型变量，减1后赋值
//使其再0、1之间震荡，实现开关效果
int main()
{
  bool a = 10;
  printf("%d\n", a);
  a -= 1;
  printf("%d\n", a);
  a -= 1;
  printf("%d\n", a);

  return 0;
}


