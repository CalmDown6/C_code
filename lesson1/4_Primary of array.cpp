#include<stdio.h>
#include<string.h>
//数组初步


//注意字符串中由\表示的转义字符时
//strlen()其长度会改变

//访问数组元素 2种方法
//1.数字下标
//2.指向数组的指针（数组名时指向数组首元素地址的指针）
int main()
{
  char str[20]={"haohao\t141la"};
  int ar[]={0,20,25,30,35,40};
  printf("数组ar 的大小 %d\n",sizeof(ar));
  printf("数组str的大小 %d\n",sizeof(str));
  printf("str字符串大小 %d\n",strlen(str));
  int x=strlen(str);
  for(int i=0;i<x;++i)
  {
    printf("%c",str[i]);//通过数组下标打印数组
  }
  printf("\n");

  printf("通过指针访问数组元素%d",*(ar+2));//指针形式
  return 0;
}