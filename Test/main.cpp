#include <iostream>
using namespace std;

const int ROWS = 5, COLS = 6;

void FillArray(int arr[ROWS][COLS], const int m, const int n);
void Sort(int arr[ROWS][COLS], const int m, const int n);
void Print(int arr[ROWS][COLS], const int m, const int n);



void main()
{
	int arr[ROWS][COLS];

	FillArray(arr, ROWS, COLS);
	Sort(arr, ROWS, COLS);
	cout << endl << endl;
	Print(arr, ROWS, COLS);
}

void FillArray(int arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			arr[i][j] = rand() % 50;
			cout << arr[i][j] << '\t';
		}
		cout << endl;
	}
}

void Sort(int arr[ROWS][COLS], const int m, const int n)
{
	for (int t = 0; t < m*n; ++t)
	{
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; ++j) //Если написать n-1, то каждая строка будет сортироваться отдельно
			{
				if (i == m - 1 && j == n - 1) break;
				if (arr[i][j] > arr[i][j + 1])
				{
					int temp = arr[i][j + 1];
					arr[i][j+ 1] = arr[i][j];
					arr[i][j] = temp;
				}
			}
		}
	}
}

void Print(int arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout << arr[i][j] << '\t';
		}
		cout << endl;
	}
}

