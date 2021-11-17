#include <stdio.h>
 void Freq(int a[10],int n,int Fr[10])    
 {
  for (int i = 0; i < n; i++)
  {
   int Count = 1;
   for(int j = i + 1; j < n; j++)
    {
     if(a[i] == a[j])    
     {
    	Count++;
    	Fr[j] = 0;    
     }
    }
    if(Fr[i] != 0)        
    {
    Fr[i] = Count;
    }
 }
  printf("\n The Frequency of the elements in this Array is : \n");
for (int i = 0; i < n; i++)
 {
  if(Fr[i] != 0)        
  {
  printf("%d Occurs %d Times \n", a[i], Freq[i]);
  }		
 }
 }
int main()
{
 int  i, j, n;	
 printf("\n Enter the number of elements in an array  :   ");
 scanf("%d", &n);               	
  int a[10], Freq[10];            
  printf("\n Enter the elements of an Array  :  ");
  for (i = 0; i < n; i++)       
  {
   scanf("%d", &a[i]);
    Fr[i] = -1;   
  }     
   Freq(a,n,Fr);
   return 0;
 }
