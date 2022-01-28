#include<stdio.h>
#include<stdbool.h>//.c文件bool必要的头文件
//逻辑运算符，关系运算符，逗号运算符的使用
//优先级：
//非！>算术运算符>关系运算符>&&>||>赋值运算符


//，逗号表达式的妙用
//while循环输入变量作为循环判定条件的优化
int main()
{
  char ch;
  int sum = 0;

  /*
  scanf("%c", &ch);
  while (ch !='\n')
  {
    sum += 1;
    scanf("%c", &ch);//为什么要两个scanf
  }*/

  //逗号运算符优化，将两个输入语句写在
  //循环条件中
  while(scanf("%c",&ch),ch !='A')
  {
    sum += 1;
  }

  printf("%d\n", sum);

  return 0;
}



//逻辑表达式：运算结果依然是bool值
// ！非运算，优先级最高2  右结合   
//  &&且、与    ||或（优先级最低）
#if 0 

//关系表达式： 运算结果是 bool 值。
//  <   <=   >   >=   ==    !=  (从左到右结合)
int main()
{
  int a = 1, b = 2, c = 3;
  //int d = a < b < c;//避免这样写
  int d = ((a < b )&& (b < c));
  printf("%d", d);
  return 0;
}

#endif
