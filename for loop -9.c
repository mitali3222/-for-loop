#include<stdio.h>

main()
{
	int i = 1,n,fact=1;
	printf("Enter Size =");
	scanf("%d",&n);
    for(i=1;i<=n;i++)
	{
		fact = fact*i;
		
		
	}
    printf("Factorial of 1 to N = %d",fact);
    
    
    
}
