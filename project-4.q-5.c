#include<stdio.h>
/*
		5
	  4 5 4
    3 4 5 4 3
  3 3 4 5 4 3 2
1 2 3 4 5 4 3 2 1
*/
main()
{
	int s,t,v;
	for(s=5;s>=1;s--)
	{
		for(v=s;v>1;v--)
		{
			printf(" ",v);
		}
		for(t=s;t<=5;t++)
		{
			printf("%d",t);
		}
		for(t=4;t>=s;t--)
		{
			printf("%d",t);
		}
		
		printf("\n");
	}
}