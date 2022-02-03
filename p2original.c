#include<stdio.h>
void cmp(int a, int b,int c,int *L)
{
  if(a>b && a>c)
  *L=a;
  else if(b>a && b>c)
  *L=b;
  else
  *L=c;
}
void input(int*a,int*b,int*c)
{
  printf("enter the three numbers\n");
  scanf("%d%d%d",a,b,c);
}
int main()
{
int a,b,c,L;
input(&a,&b,&c);
cmp(a,b,c,&L);
printf("the Largest among the is %d\n",L);
return 0;
}