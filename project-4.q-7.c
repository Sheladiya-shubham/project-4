#include<stdio.h>
/*
* * * * *
*       *
* * * * *
*
*
*/
main(){
	int s,t;
	
	for(s=1;s<=5;s++)
	{
		for(t=1;t<=5;t++)
		{
			if(t==1|s==1|s==3|s==2&t==5)
			{
				printf("* ");
			}
			else{
				printf("  ");
			}
		}
		printf("\n");
	}
}