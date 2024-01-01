#include<stdio.h>

void main()
{
	FILE *f1, *f2;//f2=odd , f1=even file...
	int i;
	
	f1 = fopen("f1.txt","w");
	f2 = fopen("f2.txt","w");
	
	if(f1 == '\0' || f2 == '\0')
	{
		printf("no data found...");
	}
	
	for(i=50;i<=70;i++)
	{
		if(i%2==0)
		{
			fprintf(f1,"%d \n",i);
		}
		else
		{
			fprintf(f2,"%d \n",i);
		}
	}
	
	printf("your both odd and even files are created successfully...");
}
