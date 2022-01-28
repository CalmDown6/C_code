#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define M 100
//if_else分支语句，先做判断后执行选择
//单分支、双分支、多分支
//注意花括号的使用{   }，中间存放代码块
//双分支结构可以使用三目运算符简化


//使用多分支语句，查找字符串中各类字符的各数
//使用库函数，优化代码
int main()
{
  int consum = 0;//控制字符 ASCII小于32
  int digsum = 0;//数字
  int capsum = 0;//大写
  int smasum = 0;//小写
  int othsum = 0;//其他
  char ch[M];
  
  //ch = getchar();
  //scanf("%s", &ch);Scanf输入空格，表示结束
  //在此有局限性，可用fgets、getline
  fgets(ch, M, stdin);
  int length = strlen(ch);
  int i = 0;
  
  while(i<length)
{
  
  if(iscntrl(ch[i]))
  {
    consum++;
  }
  else if(isdigit(ch[i]))
  {
    digsum++;
  }
  else if(isupper(ch[i]))
  {
    capsum++;
  }
  else if(islower(ch[i]))
  {
    smasum++;
  }
  else 
  {
    othsum++;
  }
  i++;
}
  printf("控制字符个数为 %d\n", consum);
  printf("数字字符个数为 %d\n", digsum);
  printf("大写字符个数为 %d\n", capsum);
  printf("小写字符个数为 %d\n", smasum);
  printf("其他字符个数为 %d\n", othsum);

  return 0;

}

#if 0
//比较两数大小，双分支改单分支(或使用三目运算符)
int main()
{
  int a = 0, b = 0, max = 0;
  scanf("%d %d", &a, &b);
  max = a;
  if(b>max)
  {
    max = b;
  }
  printf("max=%d\n", max);
  return 0;
}


//else与最近的if配对。
int main()
{
 int a = 0,b = 0;
printf("Input two value:");
scanf("%d %d",&a,&b);
if(a != b)
if(a > b ) printf("a > b \n");
else printf("a < b \n");
else printf("a = b \n");
return 0;
}
#endif