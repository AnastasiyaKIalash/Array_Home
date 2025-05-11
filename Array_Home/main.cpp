#include<iostream>
using namespace std;

//#define MASSIV_1
//#define MASSIV_2
//#define MASSIV_3
//#define MASSIV_4
#define MASSIV_5
//#define MASSIV_6


void main()
{
	setlocale(LC_ALL, " ");
	const int M = 3;
	int arr[M];
	/*cout << "Заполните элементы массива: " << endl;
	cout << "m1: ";cin >> arr[0];
	cout << "m2: ";cin >> arr[1];
	cout << "m3: ";cin >> arr[2];*/

#ifdef MASSIV_1	
	for (int i = 0; i < M; i++)cout << arr[i] << endl;

#endif MASSIV_1

#ifdef MASSIV_2

	for (int i = M - 1; i >= 0; i--)cout << arr[i] << endl;

#endif  MASSIV_2

#ifdef MASSIV_3
	int S = 0;
	for (int i = 0; i < M; i++) S += arr[i];cout << S;
	
#endif  MASSIV_3

#ifdef MASSIV_4
	double S = 0;
	for (int i = 0; i < M; i++) S += arr[i];cout << S/M;
	
#endif  MASSIV_4

#ifdef MASSIV_5 
	int min, max;
	min = max = arr[0];

	for (int i = 0; i < M; i++)
	{
		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];	
	}
	cout << "min: "<< min << endl;
	cout << "max: "<< max << endl;
	
		
#endif  MASSIV_5

#ifdef MASSIV_6
	for (int i = 0; i < M;i++)
	{
		arr[i] = rand() % (100 - 50) + 50;
		cout << arr[i] << endl;
	}

	//for (int i = 0; i < M; i++)cout << arr[i] << endl;
#endif  MASSIV_6



}