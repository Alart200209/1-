#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
#define N 20//константа
		int mas [N];//ввод массива
		int G, i, k, num, a, max;
		printf("Vvedite max element=");
		scanf("%d", &G);
		for (i = 0; i < N; i++) {
			mas[i] = rand() % G;//рандомный массив из 20 элементов , максимальный из них G
			printf("%d ", mas[i]);//вывод числа на экран 
		}
		printf("\n");//переход на новую строку
		num = mas[0];//число присваевается рандомному числу из массива 
		max = 1;// минимальный повтор 
		for (i = 0; i < N - 1; i++) { 
			a = 1;//минимальное натуральное число 
			for (k = i + 1; k < N; k++)//счетчик к для того чтобы не было больше чисел , чем N	
				if (mas[i] == mas[k])//проверка на повтор
					a++;
			if (a > max) {
				max = a;
				num = mas[i];
			}
		}

		if (max > 1)
			printf("%d raz vsrtechaetsa chislo %d", max, num);
		else
			printf("Net povtora\n");
	return 0;
}