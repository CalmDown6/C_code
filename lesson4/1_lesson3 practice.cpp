#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define M 100
//使用函数，了解其调用过程

//第二题：输入三个数，找出其中间值
//测试用例：1 2 3、1 3 2、2 1 3、2 3 1、3 2 1、3 1 2 
//第三题：使用多分支结构，检查一个字符串中的
//        各类字符的个数
//答案：8 第八次课




//第三题
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
  //在此有局限性，可用fgets、getline字符串输入
  fgets(ch, M, stdin);
  int length = strlen(ch);
  int i = 0;
  
  while(i<length)
{
  
  if(iscntrl(ch[i]))
  {
    consum++;//控制字符 ASCII码小于32
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
//第二题：输入三个数，找出其中间值
//思路：先排序，再输出中间值
int Mid_Int1(int a,int b,int c)
{//按顺序排序，输出中间值b
  int tmp = 0;
  int mid = 0;
  if (a < b)//确保，a、b中a最大
  {
    tmp = a;
    a = b;
    b = tmp;
  }
  if(b<c)//确保，b、c中b最大
  {
    tmp = b;
    b = c;
    c = tmp;
  }
  if (a < b)//关键，比较a、b中的最大者a  
  {         //与b、c间最大者b，二者谁最大，同时排好序
    tmp = a;
    a = b;
    b = tmp;
  }
  return b;
}


int Mid_Int2(int a,int b,int c)
{//if else单分支语句枚举所有情况
 //比较元素数量少时可以使用
  if((a>b && a<c)||(a>c &&a<b))
    return a;
  if((b>c && b<a)||(b>a &&b<c))
    return b;
  if((c>b && c<a)||(c>a &&c<b))
    return c;
}

int Mid_Int3(int a,int b,int c)
{//条件运算符
//简写了if else语句
 int tmp;
  if((a > b) ? (a=a,b=b):(tmp = a, a = b,b=tmp)) 
  if((b > c) ? (b=b,c=c):(tmp = b, b = c,c=tmp))
  if((a > b) ? (a=a,b=b):(tmp = a, a = b,b=tmp))
    return b;
}

int Mid_Int4(int a,int b,int c)
{//但分支结构，使用乘法替换了逻辑运算符&&
  if((a-b)*(b-c)>0)
    return b;
  if((b-c)*(c-a)>0)
    return c;
  else
    return a;
}

int main()
{
  int a, b, c;
  int mid = 0;
  scanf("%d %d %d", &a, &b, &c);
  //mid = Mid_Int1(a, b, c);
  //mid= Mid_Int2(a, b, c);
  //mid= Mid_Int3(a, b, c);
  mid= Mid_Int4(a, b, c);

  printf("mid :%d", mid);
  return 0;
}







//第一题：输入三个数，找出其最大值，尽可能少用if_else一题 
int Max_Int1(int a,int b,int c)
{//三个单分支语句
  if(a>b && a>c)
    return  a;
  if(b>a && b>c)
    return  b;
  if(c>a && c>b)
    return  c;
}

int Max_Int2(int a, int b , int c)
{//条件运算符
  //int max = 0;
  //max = (a > b) ? a : b;
  //max=(max > c) ? max : c;
  //return max;
  return (((a>b)?a:b)>c)?(a>b)?a:b:c;
}

int Max_Int3(int a,int b, int c)
{//排序，先按大小排序，返回固定字符
  int tmp = 0;
  if (a < b)
  {
    tmp = a;
    a = b;
    b = tmp;
  }
  if(a<c)
  {
    tmp = a;
    a = c;
    c = tmp;
  }
  return a;
}


int main()
{
  int a, b, c;
  int max = 0;
  scanf("%d %d %d", &a, &b, &c);
  //max = Max_Int1(a, b, c);
  //max = Max_Int2(a, b, c);
  max = Max_Int3(a, b, c);

  printf("max :%d", max);
  return 0;
}

#endif