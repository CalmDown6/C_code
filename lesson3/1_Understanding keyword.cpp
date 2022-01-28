#include<stdio.h>
#include<string.h>
//了解c语言中常用的几个关键字

//static：静态关键字
//静态成员变量存储在数据区，而非栈中(函数内)
//生存期延长
//静态变量会在编译时就完成初始化
//也是唯一的一次初始化。

void fun()
{
  static int a=0;//变量a在数据区，不在栈区          
  ++a;    //生存期++
  printf("a=%d\n",a);
}

int main()
{
  int i=0;
  while(i<10)
  {
    fun();
    i++;
  }//每循环一次，调用fun（），内存内开辟栈帧
  //循坏结束，释放栈帧，进入下次循环，再次开辟
  return 0;

}




#if 0
//typedef：使用它来为类型（用户自定义的数据类型）取一个新的名字
//eg：结构体

//typedef与#define的区别：
//typedef仅限于为类型定义符号名称，编译器执行解释
//#define可以为类型、数值定义别名，预编译器进行处理

int main()
{
  typedef  long long int ll;
  long long int a=19060106;
  ll b=2060106;
  printf("%lld %lld",a,b);
//使用typedef关键字将long long int类型
//起了别名ll
  return 0;
}

//为自定义类型 结构体 取名
int main()
{
  typedef char ch;//char更名为ch
  typedef struct student//student可以省略
  {
    ch num[10];
    ch sex[5];
    int age;
  }stu;//struct student更名为stu
  
  stu s1={"190601","male",20};
 // struct studnet stu2={"20601","women",19};
  printf("%s %s %d",s1.num,s1.sex,s1.age);
  return 0;
}
#endif
