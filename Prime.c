//Program to check if a number is prime or not

#include<stdio.h>
#include<math.h>

void main()
{
 int n,i=3,flag=0;
 printf("\nEnter the number to be checked for");
 scanf("%d",&n);
 
 if(n==1)
 	{
 	printf("\n1 is neither prime nor composite. ");
 	flag==1;
 	}
 
 else if (n==2)
	{
 	printf("\n2 is The only EVEN PRIME number.");	
 	flag==1;
 	}
 
 else if(n%2==0)
 	{
 	 printf("\n The number entered is not prime");
 	 flag==1;
 	}
 else
 {
 	for(;i<=sqrt(n);)
 	{
 		if(n%i==0)
 		{
 		  printf("\n The number entered is not prime");
 		  flag=1;
 		  break;
 		}
 		
 	i+=2;
 	}
 }
 
 if(flag==0)
 	printf("\nThe number entered is prime");
 	
}

