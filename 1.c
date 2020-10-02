#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	long long int i = 1;
	long long int max = 0;
	while (i != 0) 
	{
		printf("Input number=");
		scanf("%lli", &i);
		if (i > max)
		{
			max = i;
		}
	}
	printf("Max number %lli", max);
	return 0;
}