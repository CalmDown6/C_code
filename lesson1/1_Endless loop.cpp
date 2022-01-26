#include<stdio.h>
//死循环的几种方式


//while循环的测试条件为true
int main()
{
  int a=0;
  while(1)
  { printf("%3d",a);
    a++;
  }
  return 0;
}

#if 0

//do while
int main()
{
  int a=0;
  do{ 
    printf("%3d",a);
    ++a;}
    
  while(1);
    return 0;
}


//for循环的判定条件，不存在/永远为true
int main()
{
  int a=0;
  //for(int i=0;1;++i)
  for(int i=0;1;++i)
  {printf("%3d",a);
    a++;
  }
  
  return 0;
}
#endif