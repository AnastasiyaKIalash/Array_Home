#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");

	const int M = 7;
	int arr[M] = {5, 8, 3, 7, 4, 1, 9};

	for (int i = 0; i < M; i++)
	{
		for(int j = i + 1; j < M; j++)

		{
			if (arr[j] <  arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j]= buffer;
				
			}
		}
	}
	for (int i = 0; i < M; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}