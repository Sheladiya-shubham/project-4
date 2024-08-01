#include<stdio.h>
/*
1 0 1 0 1
  1 0 1 0
    1 0 1
	  1 0
		1
*/
main()
{
	int s,t,u;
	for(s=5;s>=1;s--)
	{
		for(u=5;u>s;u--)
		{
			printf("  ",u);
		}
		for(t=1;t<=s;t++)
		{
			if(t%2==1)
			{
				printf("1 ",t);
			}
			else
			{
				printf("0 ",t);
			}
		}
		printf("\n");
	}
}