#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");//������� �� ������� ����
	int i = 1;//����������� ����������� ����� 
	int max = 0;
	while (i != 0) //�������� �� ����������� � �����
	{
		printf("������� �����=");
		scanf("%d", &i);//���� �����
		if (i > max)
		{
			max = i;
		}
	}
	printf("����������� ����� %d", max);
	return 0;
}