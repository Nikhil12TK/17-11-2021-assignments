#include<stdio.h>
   void main()
   {
   int i=5,k=i,j;
  while(i<=5 && i>=1)
   {
  for(int l=0;l<i;l++)
   printf(" ");
  printf("/");
  for(j=1;j<=k-i;j++)
  {
  printf(" ");
  }
  printf("%c",92);
  --i;
  printf("\n");
  }
   }
