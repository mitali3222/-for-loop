#include<stdio.h>

main()
{
	int n;
	int i=2000;
	printf("Enter any number :");
	scanf("%i",&n);
	for(i=1;i<=n;i++){
		        if(i%4==0){
		 	    printf("%i\t",i);
		 }
		 
	}
}

