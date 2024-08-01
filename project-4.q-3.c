#include <stdio.h>
/*
        5
      4 5
	3 4 5
  2 3 4 5
1 2 3 4 5
*/

main()
{
	int s,t,u;
	for(s=5;s>=1;s--)
	{
		for(u=s;u>1;u--)
		{
			printf("  ",u);
		}
		for(t=s;t<=5;t++)
		{
			printf("%d ",t);
		}
		printf("\n");
	}
}