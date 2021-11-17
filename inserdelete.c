#include<stdio.h>
print(int q[],int n)
 { 
  int i;
  for(i=0; i<n; i++)
    {
     printf("%d ",q[i]);
    }
 }
int main()
{
    int a[100],i,n,x,n1;
   printf("Enter size of the array : ");
    scanf("%d", &n);
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter index should be less than %d:",n);
    scanf("%d",&x);
     printf("enter 1 for insert, 2 for delete");
     scanf("%d",&k);
if(k==1)
{
insert()
{   
 if(x<n)
    {
     printf("Enter new element : ");
     scanf("%d",&n1);
     printf("before  insertion :");
     print(a,n);
     a[x]=n1;
    printf("\nafter   insertion :");
    print(a,n);
    }
    return 0;
} 
}
}
if(k==2)
{
deletion()
{
  if(x<=n && x>0)
    {
    printf("\nbefore deletion  :");
     print(a,n);
      for(i=x-1; i<n-1; i++)
        {
         a[i]=a[i+1];
        }
       printf("\nafter   deletion :");
      print(a,n-1);
    }
    else
    printf("\ninvalid input");
} 
}
