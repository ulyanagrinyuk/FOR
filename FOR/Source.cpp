#include<iostream>
#include<Windows.h>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"

//#define FOR
//#define Задание_1
//#define Задание_2
//#define Задание_3
//#define Задание_4
//#define Задание_5
//#define Таблица_Умножение
//#define Таблица_Пифагора

void main()
{
	setlocale(LC_ALL, "");
	system("COLOR 09");
#ifdef Задание_1
	int n;
	double f = 1;
	cout << "Введите факториал"; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << i << " ! = ";
		f *= i;
		cout << f << "\n";
	}
	cout << endl;
#endif // Задание_1
#ifdef Задание_2;
	double a;
	int n;
	int N = 1;
	cout << "Введите основание степени:"; cin >> a;
	cout << "Введите показатель степени:"; cin >> n;
	if (n < 0)
	{
		a = 1 / a;
		n *= -1;
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	cout << N << endl;
#endif // Задание_2;
#ifdef Задание_3
	cout << "Таблица - ASCIIсимволов:\n";
	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0) cout << endl;
		cout << (char)i << " ";
	}
	cout << endl;
	cout << "Конец" << endl;
#endif // Задание_3
#ifdef Задание_4
	int n;
	int a = 0;
	int b = 1;
	int c = a + b;
	cout << "Введите количество чисел из ряда Фибоначчи:"; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << a << tab;
		a = b;
		b = c;
		c = a + b;
	}
#endif // Задание_4
#ifdef Задание_5
	int n;
	cout << "Введите предельное число:"; cin >> n;
	for (int i = 0; i <= n; i++)
	{
		bool simple = true;

		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				simple = false;
				break;
			}
		}
		if (simple) cout << i << tab;
	}
	cout << endl;
#endif // Задание_5
#ifdef Таблица_Умножение
	for (int i = 1; i < 10; i++)
	{
		cout << "Таблица умножение" << i << ":\n";
		for (int j = 1; j < 10; j++)
		{
			cout << "\t\t\t";
			if (i < 10)cout << " ";
			cout << i << " * ";
			if (j < 10)cout << " ";
			cout << j << " = ";
			if (i * j < 100)cout << " ";
			if (i * j < 10)cout << " ";
			cout << i * j << endl;
		}
		cout << endl;
	}
#endif // Таблица_Умножение
#ifdef Таблица_Пифагора
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			cout.width(5);
			cout << right;
			cout << i * j;
		}
		cout << endl;
	}
#endif // Таблица_Пифагора

}