#include<iostream>
#include<Windows.h>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"

//#define FOR
//#define �������_1
//#define �������_2
//#define �������_3
//#define �������_4
//#define �������_5
//#define �������_���������
//#define �������_��������

void main()
{
	setlocale(LC_ALL, "");
	system("COLOR 09");
#ifdef �������_1
	int n;
	double f = 1;
	cout << "������� ���������"; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << i << " ! = ";
		f *= i;
		cout << f << "\n";
	}
	cout << endl;
#endif // �������_1
#ifdef �������_2;
	double a;
	int n;
	int N = 1;
	cout << "������� ��������� �������:"; cin >> a;
	cout << "������� ���������� �������:"; cin >> n;
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
#endif // �������_2;
#ifdef �������_3
	cout << "������� - ASCII��������:\n";
	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0) cout << endl;
		cout << (char)i << " ";
	}
	cout << endl;
	cout << "�����" << endl;
#endif // �������_3
#ifdef �������_4
	int n;
	int a = 0;
	int b = 1;
	int c = a + b;
	cout << "������� ���������� ����� �� ���� ���������:"; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << a << tab;
		a = b;
		b = c;
		c = a + b;
	}
#endif // �������_4
#ifdef �������_5
	int n;
	cout << "������� ���������� �����:"; cin >> n;
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
#endif // �������_5
#ifdef �������_���������
	for (int i = 1; i < 10; i++)
	{
		cout << "������� ���������" << i << ":\n";
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
#endif // �������_���������
#ifdef �������_��������
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
#endif // �������_��������

}