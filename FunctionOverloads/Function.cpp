#include "Function.h"

template<typename T>void Sort(T arr[], const int n)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (arr[j] < arr[i])
            {
                T temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

template<typename T>void Sort(T arr[ROWS][COLS], const int m, const int n)
{
    for (int t = 0; t < (m * n -1); ++t)
    {
        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j) //Если написать n-1, то каждая строка будет сортироваться отдельно
            {
                if (i == m - 1 && j == n - 1) break;
                if (arr[i][j] > arr[i][j + 1])
                {
                    T temp = arr[i][j];
                    arr[i][j] = arr[i][j + 1];
                    arr[i][j + 1] = temp;
                }
            }
        }        
    }

}

template<typename T>T Sum(T arr[], const int n)
{
    T sum = 0;
    for (int i = 0; i < n; ++i)
        sum += arr[i];
    return sum;
}

template<typename T>T  Sum(T arr[ROWS][COLS], const int m, const int n)
{
    int sum = 0;
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
            sum += arr[i][j];
    }
    return sum;
}

double Avg(int arr[], const int n)
{
    return (double)Sum(arr, n) / n;
}

double Avg(double arr[], const int n)
{
    return (double)Sum(arr, n) / n;
}
double Avg(char arr[], const int n)
{
    return (double)Sum(arr, n) / n;
}

double Avg(int arr[ROWS][COLS], const int m, const int n)
{
    return (double)Sum(arr, m, n) / (m * n);
}
double Avg(double arr[ROWS][COLS], const int m, const int n)
{
    return (double)Sum(arr, m, n) / (m * n);
}
double Avg(char arr[ROWS][COLS], const int m, const int n)
{
    return (double)Sum(arr, m, n) / (m * n);
}

int minValueIn(int arr[], const int n)
{
    Sort(arr, n);
    return arr[0];
}

double minValueIn(double arr[], const int n)
{
    Sort(arr, n);
    return arr[0];
}

char minValueIn(char arr[], const int n)
{
    Sort(arr, n);
    return arr[0];
}
int minValueIn(int arr[ROWS][COLS], const int m, const int n)
{
    Sort(arr, m, n);
    return arr[0][0];

}
double minValueIn(double arr[ROWS][COLS], const int m, const int n)
{
    Sort(arr, m, n);
    return arr[0][0];

}
char minValueIn(char arr[ROWS][COLS], const int m, const int n)
{
    Sort(arr, m, n);
    return arr[0][0];
}

int maxValueIn(int arr[], const int n)
{
    Sort(arr, n);
    return arr[n - 1];
}

double maxValueIn(double arr[], const int n)
{
    Sort(arr, n);
    return arr[n - 1];
}

char maxValueIn(char arr[], const int n)
{
    Sort(arr, n);
    return arr[n - 1];
}
int maxValueIn(int arr[ROWS][COLS], const int m, const int n)
{
    Sort(arr, m, n);
    return arr[m - 1][n - 1];

}
double maxValueIn(double arr[ROWS][COLS], const int m, const int n)
{
    Sort(arr, m, n);
    return arr[m - 1][n - 1];

}
char maxValueIn(char arr[ROWS][COLS], const int m, const int n)
{
    Sort(arr, m, n);
    return arr[m - 1][n - 1];
}