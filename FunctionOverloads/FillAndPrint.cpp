#include "FunctionH.h"

void FillRand(int arr[], const int n)
{
    for (int i = 0; i < n; ++i)
        arr[i] = rand() % 100;
}
void FillRand(double arr[], const int n)
{
    for (int i = 0; i < n; ++i)
    {
        arr[i] = rand() % 100;
        arr[i] /= 10;
    }
}
void FillRand(char arr[], const int n)
{
    for (int i = 0; i < n; ++i)
    {
        int minElem = 65; //ASCII ��� ����� A (91: [, 92: \, 93: ], 94: ^, 95: _, 96: ')
        int maxElem = 122; //ASCII ��� ����� z (97-122)
        arr[i] = rand() % (maxElem - minElem) + minElem;
    }
}
void FillRand(int arr[ROWS][COLS], const int m, const int n)
{
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
            arr[i][j] = rand() % 100;
    }

}
void FillRand(double arr[ROWS][COLS], const int m, const int n)
{
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            arr[i][j] = rand() % 100;
            arr[i][j] /= 10;
        }
    }
}
void FillRand(char arr[ROWS][COLS], const int m, const int n)
{
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            int minElem = 65; //ASCII ��� ����� A (91: [, 92: \, 93: ], 94: ^, 95: _, 96: ')
            int maxElem = 122; //ASCII ��� ����� z (97-122)
            arr[i][j] = rand() % (maxElem - minElem) + minElem;
        }
    }
}
void Print(int arr[], const int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << "\t";
    cout << endl;
}
void Print(double arr[], const int n)
{

    for (int i = 0; i < n; ++i)
        cout << arr[i] << "\t";
    cout << endl;
}

void Print(char arr[], const int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << "\t";
    cout << endl;
}
void Print(int arr[ROWS][COLS], const int m, const int n)
{
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
            cout << arr[i][j] << "\t";
        cout << endl;
    }
    cout << endl;
}
void Print(double arr[ROWS][COLS], const int m, const int n)
{
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
            cout << arr[i][j] << "\t";
        cout << endl;
    }
    cout << endl;
}
void Print(char arr[ROWS][COLS], const int m, const int n)
{
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
            cout << arr[i][j] << "\t";
        cout << endl;
    }
    cout << endl;
}