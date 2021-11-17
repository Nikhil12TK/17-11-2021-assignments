#include <stdio.h>
void main()
  {
   signed char ch=-127;//-127
   unsigned char ch1=ch;
   signed int num=-1;
   unsigned int num1=num;
   signed short int i=-2;
   unsigned short int i1=i;
  signed long int j=-10;
  unsigned long int j1=j;
  float k=31.4;
 double k1=2.56;
  printf("ch=%d\t",ch);//-127
  printf("ch1= %d\t",ch1);//128
  printf("%u\t",num1);//4g-1
  printf("%d\t",num);//-1
  printf("%hu\t",i1);//65534
  printf("%hd\t",i);//-2
  printf("%lu\t",j1);//
  printf("%ld\t",j);//-10
  printf("%f\t",k);//31.400000
  printf("%lf\t",k1);//2.560000
  }             
