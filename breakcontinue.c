#include<stdio.h>
   void main()
   {
   int sum=0,num,i=0;
   while(i<=10)
   {
   count:printf("enter the number:\n");
   scanf("%d",&num);
  if(num>0)
  {
  sum+=num;
  printf("sum of numbers is :%d\n",sum);
  i++;
  }
  while(num==0)
  {
  printf("sum of numbers is :%d\n",sum);
  goto l1;
  }
  if(num==-1)
  {
  printf("dont add to sum\n");
  continue;
  goto count;
  }
  l1:break;
  }
  printf("the count of numbers added:%d\n",i);
 }
