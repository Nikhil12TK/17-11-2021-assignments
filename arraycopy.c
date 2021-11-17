
#include <stdio.h>
copy(int *a,int *b,int n)
{
  int i;
  for(i=0; i<n; i++)
   {
    b[i]=a[i];
   }
 }
 print(int t[],int n)
 { 
   int i;
   for(i=0; i<n; i++)
    {
    printf("%d ",t[i]);
    }
}
int main()
{
    int a[10],b[10],i,n;
    printf("Enter array size: ");
    scanf("%d", &n);
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    copy(a,b,n);
    printf("first array : ");
    print(a,n);
    printf("\nsecond array : "); 
    print(b,n);
}
