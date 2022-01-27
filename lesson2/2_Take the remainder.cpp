#include<stdio.h>
//灵活使用%取余运算符
//1.输出时控制格式
//2.循环输出
//3.求最大公约数

//辗转相除法计算最大公约数
//原理 gcd(a,b)=gcd(b,a mod b)
int main()
{
  int a=0,b=0;
  
  scanf("%d %d",&a,&b);
  while(b!=0)
  {
    int c=a%b;
    a=b;
    b=c;
  }
  printf("%d",a);
  return 0;
}






#if 0



//计算范围，循环输出 0~25
//0  1  2  3······24  25
//1  2  3  4······25  0
//2  3  4  5······0   1
//25 0  1  2······23  24
int main()
{
  const int n=25;
  for(int i=0;i<=n;++i)
  {
    int k=i;
    for(int j=0;j<=n;++j)
    {
      printf("%3d",k);
      k=(k+1)%26;//当k>=26时，取余后又从0、1开始循环
    }
    printf("\n");
  }
  return 0;
}


//利用%运算符 取模
//输出0-99的偶数
//solution 1
int main()
{
  const int n=100;
  for(int i=0;i<n;++i)
  {
    if(i%2==0)
    {
      printf("%3d",i);
    }
    
  }
  printf("\n");
  return 0;

}


//solution 2
//直接在for循环的条件中设置
int main()
{
  const int n=100;
  for(int i=0;i<n;i+=2)
  {
    printf("%3d",i);
  }
  return 0;
}

//控制格式 
//每n个字换行
int main()
{
  for(int i=1;i<=100;++i)
  {
    printf("%5d",i);
    if(i%5==0)
    {
      printf("\n");
    }
    
  }
  return 0;
}
#endif