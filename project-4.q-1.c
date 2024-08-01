#include<stdio.h>
/*
41
41 42
41 42 43
41 42 43 44
41 42 43 44 45
*/

main()
{
	int s,t;
	for(s=41;s<=45;s++)
	{
		for(t=41;t<=s;t++)
		{
			printf("%d ",t);
		}
		printf("\n");
	}
}
