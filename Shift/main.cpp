#include<iostream>
#include<Windows.h>
using namespace std;

//#define SDVIG
#define SDVIG_1


void main()
{
	setlocale(LC_ALL, " ");
	const int m = 10;
	int arr[m] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int Sdvig;
	cout << "¬ведите число, на которое нужно сдвинуть массив: " << endl;cin >> Sdvig;

#ifdef SDVIG



	for (int i = 0; i < Sdvig; i++)
	{
		int buffer = arr[0];
	    for (int j = 1; j < m; j++)
	    {
		    arr[j - 1] = arr[j];		
	    }
	    arr[m - 1] = buffer;
		Sleep(1000);


	    for (int j = 1; j < m; j++)
	    {
			cout << arr[j] << "\t";
	    }
	    cout << endl;
		//cout << arr[i] << "\t";
		
	}
	cout << endl;

#endif  SDVIG

#ifdef SDVIG_1

	
	for (int i = 0; i < Sdvig; i++)
	{
		int buffer = arr[m-1];
		for (int j = m-3; j >= 0; j--)
	    {
		    arr[j+1] = arr[j];
			
	    }
		
	    arr[0] = buffer;
		


	    for (int j = 1; j < m; j++)
	    {
			cout << arr[j] << "\t";
	    }
	    cout << endl;
		//cout << arr[i] << "\t";
		
	}
	cout << endl;

#endif SDVIG_1
	
	
	
}


