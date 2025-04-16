#include<iostream>
using namespace std;


void main()
{
	setlocale(LC_ALL, " ");
	const int m = 10;
	int arr[m] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int Sdvig;
	cout << "Введите число, на которое нужно сдвинуть массив: " << endl;cin >> Sdvig;
	
	for (int i = 0; i < m; i++)
	{
		for (int j = 0 + Sdvig; j < m; j++)
		{
			cout << arr[j];
			arr[9]=
		}
		
		cout << endl;
		//не решила
	}
	
	
}


//cout << arr[0]<< arr[1]<<arr[2] << arr[3] <<arr[4] << arr[5] << arr[6] << arr[7] << arr[8] << arr[9] << endl;