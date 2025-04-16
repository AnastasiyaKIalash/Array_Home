#include<iostream>
using namespace std;



//#define PERENOS
#define BIG_CHESS

void main()
{
	setlocale(LC_ALL, "");

#ifdef PERENOS

	int a;
	int b;
	cout << "¬ведите число a: "; cin >> a;
	cout << "¬ведите число b: "; cin >> b;

	cout << "a=" << a << "\n" << "b= "<< b << endl;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	cout << "a = " << a << "\t" << "b = " << b;

#endif PERENOS

#ifdef BIG_CHESS
	
	int n;
	cout << " Vvedite razmer doski: ";cin >> n;
	

	for (int i = 0; i < n * n; i++)
	{
		for (int j = 0; j < n * n ; j++)
		{
			cout << ((((i / n) + (j / n)) % 2 == 0) ? "* " : "  ");
		}
		cout << endl;
	}

#endif  BIG_CHESS




}