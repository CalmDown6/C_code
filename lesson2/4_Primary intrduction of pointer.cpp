#include<stdio.h>
//指针初步
//了解*的几种用法意义(声明 解引用)
//x86指针变量大小为4字节 

//大端 小端概念
//小端：高位高地址 大端：高位低地址

int main()
{
  int val=10;
  int *p=&val;//此时 int *声明p是一个指针变量
              //将val的地址给指针变量p
  printf("%d\n",val);
  *p=20;//此时 *用来标识/解引用 
        //*p为其自身存储地址指向的变量val
  printf("%d\n",val);
  return 0;

}