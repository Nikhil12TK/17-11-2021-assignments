#include<stdio.h>
   void main()
   {
   char ch;
   long int i1,i2;
   printf("enter the character like a or s:\n");
   scanf("%c",&ch);
   printf("enter the values of i1 and i2:\n");
   scanf("%ld %ld",&i1,&i2);
  switch(ch)
  {
  case 'a':printf("sum=%ld\n",i1+i2);
          break;
  case 's':printf("sub=%ld\n",i1-i2);
          break;
  default:printf("no action\n");
  }
  }
