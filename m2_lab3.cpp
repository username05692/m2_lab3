#include <stdio.h>// ���������� �������
#include <clocale>
#define n 15
int main()
{
	setlocale(LC_ALL, "ukr");// ������������ ��������� ����������
	double X[n];// ���������� ������ �
	printf("����i�� 15 �������i� ������:\n");
	int i;

	for (int i = 0; i < n; i++) {
		printf("������� %d:", i + 1);// ���������� ������
		scanf_s("%lf", &X[i]);
	}
	double A;
	printf("����i�� �������� �������� � ������ :");
	scanf_s("%lf", &A);
	int found = 0;

	for (int i = 0; i < n; i++)
	{
		if (X[i] == A)
		{
			printf("I���� = %d ", i);
			found = 1;
		}	
	}
	if (!found) // ���� ����������� ��� ������ ������� �������� ����� ���������� ���� ������
	{
		printf("����������� ������� �i����� �������� ");
	}
	printf("\n");
	double sort;
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < n - i; j++)
		{
			if (X[j] < X[j + 1])
			{
				// ���� ��������, ��� ����������� � ���������� �������
				sort = X[j];
				X[j] = X[j + 1];
				X[j + 1] = sort;
			}
		}
	}
	printf("��������� �i������������ ������");
	printf("\n");
	for (int i = 0; i < n; i++) {
		printf("������� %d �i������������ ������: %.1lf\n", i + 1, X[i]);
	}

}