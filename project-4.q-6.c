#include<stdio.h>
/*
1        1
12      21
123    321
1234  4321
1234554321

*/
main(){
	
	int s,t,u;
	
	for(s=1;s<=5;s++)
	{
		for(t=1;t<=s;t++)
		{
			printf("%d ",t);
		}
		for(u=4;u>=s;u--)
		{
			printf("    ");
		}
		for(t=s;t>=1;t--)
		{
			printf("%d ",t);
		}
			printf("\n");
	}
	

}