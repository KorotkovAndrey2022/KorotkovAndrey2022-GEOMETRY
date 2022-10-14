#include <iostream>

using namespace std;
//#define DEGREE
//#define ASCII 
//#define FIBONACCI_SERIES
//#define FIBONACCI_N
//#define PRIMENUMBER
//#define MUTIPLICATION_TABLE
//#define PYTHAGORAS_TABLE

void main()
{
	setlocale(LC_ALL, "Rus");

#ifdef DEGREE

	int i, n, a, b;

	cout << "Введите основание степени:" << endl;
	cin >> a;
	cout << "Введите показатель степени:" << endl;
	cin >> b;
		n = a;
		for (i = 1; i < b; i++)
			n = n * a;
		cout << n << endl;

#endif//DEGREE

#ifdef ASCII
       
		cout << "Таблица ASCII-символов:\n";

		for (int i = 0; i < 256; i++)
		{
			if (i % 16 == 0) cout << endl;
			
			cout << (char)i << " ";
				
		}
		cout << endl;

#endif // ASCII

#ifdef FIBONACCI_SERIES		
		int x = 0, y = 1, n = 1;

		do
		{
			if (n > 51 || n <= 0)
				cout << "\n\n\tОшибка";
			cout << "\n\n\tВведите номер числа Фибоначчи от 0 до 50: ";
			cin >> n;
		} while (n > 51 || n <= 0);
		if (n == 1) y = 0;
		if (n > 3)
		{
			for (int i = 0; i < n - 3; i++)
			{
				x = y - x;
				y = x + y;
			}
		}
		cout << "\n\n\t" << y;
		

#endif //FIBONACCI_SERIES

#ifdef FIBONACCI_N 

		int i = 0;
		int a = 0, b = 1, c = 0;
		int n = 0;
		cin >> n;

		while (i < n)
		{
			a = b;
			b = c;
			c = a + b;

			cout << c << " ";
			i++;
		}

#endif //FIBONACCI_N

#ifdef PRIMENUMBER

		int numb = 1000;
		int rez = 0;
		int count = 0;

		for (int i = 2; i < numb; ++i)
		{
			for (int j = 1; j < numb; ++j)
			{
				if (i % j == 0)
				{
					count++;
				}
			}
			if (count < 3)
			{
				rez = i;
				cout << rez << " ";
			}
			count = 0;
		}
		
		cout << endl;

#endif //PRIMENUMBER

#ifdef MUTIPLICATION_TABLE
		    int n;

			cout << "Ввести цифру: ";
			cin >> n;

			for (int i = 1; i <= 10; ++i)
			{
				cout << n << " * " << i << " = " << n * i << endl;
			}

#endif //MUTIPLICATION_TABLE

#ifdef PYTHAGORAS_TABLE
			for (int i = 1; i <= 10; i++)
			{
				for (int j = 1; j <= 10; j++)
					cout << i * j << " ";
				cout << endl;
		  }

#endif	//PYTHAGORAS_TABLE		

		}