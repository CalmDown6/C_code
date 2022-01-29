#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>
//函数初步
//逗号表达式

int main()
{
  int a = 2, b = 3, c = 4;
  a = (b + c, c += 4, b += 7);//从左向右执行
  printf("%d", a); // a=(b+=7);
  //最后一个表达式的值给a
  return 0;
}




#if 0
//使用交换函数
//传值调用，形参的改变不影响实参（不在同一块栈帧）
//应使用引用调用。（传参从右至左）

//使用形参来间接改变实参
//使用引用调用，将实参地址传给形参
//形参此时为，接受实参地址的指针
//此时对形参操作，相当于对其所指向的实参操作（指向实参的栈帧地址）
  void Swap(int *ap,int *bp)//传值调用-->引用调用
{
  int tmp = 0;
  // int *tmp=NULL;空指针无法解引用
  //*tmp=*ap;
  //空指针解引用是 C/C++ 程序中较为普遍的内存缺陷类型
  // int *tmp;野指针，不知其指向；危害更大。
  //空指针指向无效的内存地址(NUll)并且对其引用时
  // Null的地址为0，栈的最低位，有关键作用
  //不能被用户代码访问
  //有可能产生不可预见的错误
  tmp = *ap;
  *ap = *bp;
  *bp = tmp;
}

int Mid_Int(int a,int b, int c)
{
  if(a<b){
    Swap(&a, &b);//传值调用-->引用调用
  }
  if(b<c){
    Swap(&b, &c);
  }
  if(a<b){
    Swap(&a, &b);
  }
  return b;
}

int main()
{
  int a = 0, b = 0, c = 0;
  scanf("%d %d %d", &a, &b, &c);
  printf("mid=%d", Mid_Int(a,b,c));//打印函数结果
  return 0;
}



int main()
{
  int a = 0, b = 0, c = 0;
  int mid = 0, tmp = 0;
  scanf("%d %d %d", &a, &b, &c);
  if(a<b)
  {
    tmp = a;
    a = b;
    b = tmp;
  }
  if (b < c)
  {
    tmp = b;
    b = c;
    c = tmp;
  }
  if(a<b)
  {
    tmp = a;
    a = b;
    b = tmp;
  }
  printf("mid=%d", b);

  return 0;
}



//找出三个数中的最大值
int Max_Int(int a,int b)
{
  return a > b ? a : b;
}

int main()
{
  int a = 0, b = 0, c = 0;
  int max = 0;
  scanf("%d %d %d", &a, &b, &c);
  max = Max_Int(Max_Int(a, b),c );
  printf("max: %d", max);

  return 0;
}

#endif
