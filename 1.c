#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i = 1;//Минамальное натуральное число 
	int max = 0;
	while (i != 0) //Проверка на неравенство с нулем
	{
		printf("Input number=");
		scanf("%d", &i);//Ввод числа
		if (i > max)
		{
			max = i;
		}
	}
	printf("Max number %d", max);
	return 0;
}