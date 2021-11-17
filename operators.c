#include<stdio.h>
   void main()
   {
   int a=10,b=2,r;
   //arithmetic and assignment operators
   r=a;
   printf("r=%d\n",r);
   r=a+b;
   printf("add=%d\n",r);
  r=a-b;
  printf("sub=%d\n",r);
  r=a*b;
  printf("mul=%d\n",r);
  r=a/b;
  printf("div=%d\n",r);
 r=a%3;
  printf("modulus=%d\n",r);
  //--------------------------------
  //logical and bitwise operators
  r=a<<b;
  printf("left shift=%d\n",r);
  r=a>>b;
  printf("right shift=%d\n",r);
  r=a&b;
  printf("bitwise and=%d\n",r);
  r=a|b;
  printf("bitwise or=%d\n",r);
  r=~a;
  printf("bitwise complement=%d\n",r);
  r=a&&b;
  printf("logical and=%d\n",r);
  r=a||b;
  printf("loical or=%d\n",r);
  r=a^b;
  printf("logical xor=%d\n",r);
  r=!a;
  printf("logical not=%d\n",r);
  //---------------------------------
  //ternary and comma operator
  r=(a>b)?printf("yes\n"):printf("no\n");
  r=(a,b);
  printf("r=%d\n",r);
  r=a,b;
  printf("r=%d\n",r);
  //-------------------------------------
  //relational operator
  r=a>b;
  printf("r=%d\n",r);
  r=a<b;
 printf("r=%d\n",r);
 r=(a==b);
  printf("r=%d\n",r);
  r=(a!=b);
  printf("r=%d\n",r);
  r=(a>=b);
  printf("r=%d\n",r);
  r=(a<=b);
  printf("r=%d\n",r);
  //--------------------------------------
  //post increment,decrement and pre increment decrement
  r=a++;
  printf("r=%d\n",r);
  r=++a;
  printf("r=%d\n",r);
  r=--b;
  printf("r=%d\n",r);
  r=b--;
  printf("r=%d\n",r);
  }
