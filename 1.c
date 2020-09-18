#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");//Переход на русский язык
	int i = 1;//Минамальное натуральное число 
	int max = 0;
	while (i != 0) //Проверка на неравенство с нулем
	{
		printf("Введите число=");
		scanf("%d", &i);//Ввод числа
		if (i > max)
		{
			max = i;
		}
	}
	printf("Максимально число %d", max);
	return 0;
}