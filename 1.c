#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	long int i = 1;//����������� ����������� ����� 
	long int max = 0;
	while (i>0)  //�������� �� ����������� �����
	{
		printf("Input number=");
		scanf("%d", &i);//���� �����
		if (i > max)
		{
			max = i;
		}
	}
	printf("Max number %d", max);
	return 0;
} 