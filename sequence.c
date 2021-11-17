#include<stdio.h>
 int r=0;
int main()
{
   int a[10],b[10];
   int n,i,k,s=0;
   printf("enter number of elements required:");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   printf("\norginal sequence be like  : ");
   for(i=0;i<n;i++)
   for(k=0;k<=i;k++)
   {  
       r++;
     if(r<=n)
     {
     b[r]=i+1;
     printf("%d ",i+1);
     }
   }
   printf("\n");
for(i=0;i<n;i++)
{
    if(a[i]==b[i+1]) 
    s++;
}
if(s==n) 
printf("sequence is correct"); 
else
printf("sequence is not correct");
}
