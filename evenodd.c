 #include<stdio.h>
   void even();
   void odd();
   void main()
   {
   even();
   printf("\n");
   odd();
  }
  void even()
  {
  int i;
  printf("even numbers are:\n");
  for(i=1;i<=100;i++)
  if(i%2==0)
  printf("%d,",i);
  }
  void odd()
  {
  int i;
  printf("odd numbers are:\n");
  for(i=1;i<=100;i++)
  if(i%2!=0)
  printf("%d,",i);
 }
