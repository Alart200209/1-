#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
#define N 20//���������
		int mas [N];//���� �������
		int G, i, k, num, a, max;
		printf("Vvedite max element=");
		scanf("%d", &G);
		for (i = 0; i < N; i++) {
			mas[i] = rand() % G;//��������� ������ �� 20 ��������� , ������������ �� ��� G
			printf("%d ", mas[i]);//����� ����� �� ����� 
		}
		printf("\n");//������� �� ����� ������
		num = mas[0];//����� ������������� ���������� ����� �� ������� 
		max = 1;// ����������� ������ 
		for (i = 0; i < N - 1; i++) { 
			a = 1;//����������� ����������� ����� 
			for (k = i + 1; k < N; k++)//������� � ��� ���� ����� �� ���� ������ ����� , ��� N	
				if (mas[i] == mas[k])//�������� �� ������
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