#include <stdio.h>
int input_number()
{
  int a;
  printf("Enter a number\n");
  scanf("%d",&a);
  return a;
}
int is_prime(int n)
{
  for(int i=2;i<n;i++)
  {
    if((n%i)==0)
      return 0;
  }
  return 1;
}
void output(int n,int is_prime)
{
  if(is_prime==0)
    printf("%d is not a prime number",n);
  else
    printf("%d is a prime number",n);
}
int main()
{
  int n,a;
  n=input_number();
  a=is_prime(n);
  output(n,a);
  return 0;
}