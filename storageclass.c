#include<stdio.h>
  extern int p;//p definition can be in another file or can be in same file
   int j=12;
   void main()
   {
   int i;
   register int x;
   printf("x=%d\n",x);
   x=13;
  printf("x=%d\n",x);
  for(i=0;i<5;i++)
  {
  int a=10;
  printf("a=%d\t",a);
  a++;
  }
  printf("\n");
  for(i=0;i<5;i++)
  {
  static int m=15;
  printf("m=%d\t",m);
  m++;
  }
  printf("\np=%d\n",p);
 }
 p=30;
