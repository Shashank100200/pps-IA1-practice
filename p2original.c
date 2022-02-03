#include<stdio.h>
int cmp(int a,int b, int c)
{
  if((a>b) && (a>c))
  return a;
  else if (b>c)
  return b;
  else 
  return c;
}
int input()
{
  int m;
  printf("enter the 3 values\n");
  scanf("%d",&m);
  return m;
}
int main()
{
  int a,b,c;
  a=input();
  b=input();
  c=input();
  printf("the greatest value is %d\n",cmp(a,b,c));
}