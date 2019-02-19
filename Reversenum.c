//Program to print reverse of a given number

#include<stdio.h>
#include<math.h>

void main()
{
  int a,sum=0,n,count=0;
  printf("\nEnter the number whose digits are to be reversed : ");
  scanf("%d",&a);
  n=a;
  //Loop to count number of digits
  for( ; n>0 ; )
  {
  	n=n/10;
 	count++;
  }
  printf("\nThe number of digits are : %d",count);
  
  //Loop to reverse the digits
  
  for(int i=count ;a>0 ;i-- )
  {
  	n=a%10;
  	a=a/10;
  	sum=sum + n*pow(10,i-1);
  }
  printf("\nThe Reversed number is : %d\n",sum);
   
}
