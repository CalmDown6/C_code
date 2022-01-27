#include<stdio.h>
//scanf相比scanf_s的缺点
int main()
{
  int a=12;
  char buff[8];
  scanf("%s",buff,8);//scanf相比scanf_s不安全
  printf("%x %s\n",a,buff);//字符串多了会将内存空间a，覆盖
  return 0;
}