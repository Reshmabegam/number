#include<stdio.h>


void main()

{
    
  int n,remainder,temp,r=0;
    
  int sum=0;
    
  printf("\nEnter the integer: ");
    
  scanf("%d",&n);
    
  printf("%d\n",n);
    
  temp=n;
    
  while(temp!=0)
    
    {
    
       remainder=temp%10;
    
       r=r*10+remainder;
    
       temp=temp/10;
    
    }
    
  printf("Reverse number: %d\n",r);
    
  sum=n+r;
    
  printf("The sum is: %d ",sum);
    

}