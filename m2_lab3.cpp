#include <stdio.h>// підключення бібліотек
#include <clocale>
#define n 15
int main()
{
	setlocale(LC_ALL, "ukr");// встановлення української локалізації
	double X[n];// оголошення масиву Х
	printf("Введiть 15 елементiв масиву:\n");
	int i;

	for (int i = 0; i < n; i++) {
		printf("Елемент %d:", i + 1);// заповнення масиву
		scanf_s("%lf", &X[i]);
	}
	double A;
	printf("Введiть цьольове значення з масиву :");
	scanf_s("%lf", &A);
	int found = 0;

	for (int i = 0; i < n; i++)
	{
		if (X[i] == A)
		{
			printf("Iдекс = %d ", i);
			found = 1;
		}	
	}
	if (!found) // Вивід повідомлення про невірне цільове значення тепер виконується поза циклом
	{
		printf("Неправильно введене цiльове значення ");
	}
	printf("\n");
	double sort;
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < n - i; j++)
		{
			if (X[j] < X[j + 1])
			{
				// Обмін елементів, щоб відсортувати у спадаючому порядку
				sort = X[j];
				X[j] = X[j + 1];
				X[j + 1] = sort;
			}
		}
	}
	printf("Виведення вiдсортованого масиву");
	printf("\n");
	for (int i = 0; i < n; i++) {
		printf("Елемент %d вiдсортованого масиву: %.1lf\n", i + 1, X[i]);
	}

}