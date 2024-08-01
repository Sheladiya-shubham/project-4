#include<stdio.h>
/*
11
12 13
14 15 16
17 18 19 20
*/
main()
{
	int s,t,yes=11;
	for(s=1;s<=4;s++)
	{
		for(t=1;t<=s;t++)
		{
			printf("%d ",yes);
			yes++;
		}
		printf("\n");
	}
}
