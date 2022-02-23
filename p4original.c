#include <stdio.h>
int input()
{
  int a;
  printf("Enter nth number in Fibonacci sequence");
  scanf("%d",&a);
  return a;
}
int find_fibo(int n)
{
  int p1=0;
  int p2=1;
  int temp;
  for(int i=0;i<n;i++)
  {
    temp=p2;
    p2=p1+p2;
    p1=temp;
  }
  return p1;
}
void output(int p1)
{
  printf("%d",p1);
}
int main()
{
  int n;
  n=input();
  int fib=find_fibo(n);
  output(fib);
  return 0;
}