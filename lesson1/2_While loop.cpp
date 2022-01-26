#include<stdio.h>
//while循环实现累加
//,逗号表达式对while循环条件优化
int main(void)
{
  long num;
  long sum=0;
  int status;

  printf("please enter an integer to be summed");
  printf("(q to quit):"); 
  
  while(status==1,status=scanf("%ld",&num))
  {
    sum=sum+num;
    printf("please enter next integer (q to quit):");
    //status=scanf("%ld",&num);

  }
  printf("those integers sum to %ld.\n",sum);
  return 0;
}