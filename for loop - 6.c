#include<stdio.h>

main()
{
	int i,n;
	printf("Enter value =");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		printf("%d\n",i);
	}
}
