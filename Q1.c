#include<stdio.h>

void main()
{
	FILE *data , *f2, *f3;
	int number , i;
	
	data = fopen("DATA.txt","w");
	for(i=50;i<=70;i++)
	{
		scanf("%d",&number);
		putw(number,data);
	}
	
	fclose(data);
	
	data = fopen("DATA.txt","r");
	f2 = fopen("ODD.txt","w");
	f3 = fopen("EVEN.txt","w");
	
	while((number = getw(data)) != EOF)
	{
		if(number%2==0)
		{
			putw(number,f3);//eve file
		}
		else{
			putw(number,f2);//odd file
		}
	}
	
	fclose(data);
	fclose(f2);
	fclose(f3);
	
	f2=fopen("ODD.txt","r");
	f3=fopen("EVEN.txt","r");
	
	printf("Even numbers from even_file.txt:\n\n");
	while((number = getw(f3)) != EOF)
	{
		printf("%4d",number);
	}
	
	printf("Odd numbers from odd_file.txt:\n\n");
	while((number = getw(f2)) != EOF)
	{
		printf("%4d",number);
	}
	
	fclose(f2);
	fclose(f3);
}
