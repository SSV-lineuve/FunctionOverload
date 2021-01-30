#include "Function.h"

template<typename T>void Print(T arr[], const int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << "\t";
    cout << endl;
}
template<typename T>void Print(T arr[ROWS][COLS], const int m, const int n)
{
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
            cout << arr[i][j] << "\t";
        cout << endl;
    }
    cout << endl;
}