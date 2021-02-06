#include "Function.h"
#include "Print.cpp"

void main()
{
    setlocale(LC_ALL, "Russian");

    const int n = 10;
    int arr[n];
    FillRand(arr, n);
    cout << "Массив значений типа int:\n";
    Print(arr, n);
    cout << endl;
    Sort(arr, n);
    cout << "Отсортированный массив значений типа int:\n";
    Print(arr, n);
    cout << endl;
    cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
    cout << "Среднее арифметическое элементов массива: " << Avg(arr, n) << endl;
    cout << "Минимальный элемент массива: " << minValueIn(arr, n) << endl;
    cout << "Максимальный элемент массива: " << maxValueIn(arr, n) << endl;;
    cout << delimiter << endl;

    const int D_SIZE = 8;
    double d_arr[D_SIZE];
    FillRand(d_arr, D_SIZE);
    cout << "Массив значений типа double:\n";
    Print(d_arr, D_SIZE);
    cout << endl;
    Sort(d_arr, D_SIZE);
    cout << "Отсортированный массив значений типа double:\n";
    Print(d_arr, D_SIZE);
    cout << endl;
    cout << "Сумма элементов массива: " << Sum(d_arr, D_SIZE) << endl;
    cout << "Среднее арифметическое элементов массива: " << Avg(d_arr, D_SIZE) << endl;
    cout << "Минимальный элемент массива: " << minValueIn(d_arr, D_SIZE) << endl;
    cout << "Максимальный элемент массива: " << maxValueIn(d_arr, D_SIZE) << endl;
    cout << delimiter << endl;

    const int C_SIZE = 12;
    char c_arr[C_SIZE];
    FillRand(c_arr, C_SIZE);
    cout << "Массив значений типа char:\n";
    Print(c_arr, C_SIZE);
    cout << endl;
    Sort(c_arr, C_SIZE);
    cout << "Отсортированный массив значений типа char:\n";
    Print(c_arr, C_SIZE);
    cout << endl;
    cout << "Сумма элементов массива: " << Sum(c_arr, C_SIZE) << endl;
    cout << "Среднее арифметическое элементов массива: " << Avg(c_arr, C_SIZE) << endl;
    cout << "Минимальный элемент массива: " << minValueIn(c_arr, C_SIZE) << endl;
    cout << "Максимальный элемент массива: " << maxValueIn(c_arr, C_SIZE) << endl;
    cout << delimiter << endl;

    int i_arr_2[ROWS][COLS];
    FillRand(i_arr_2, ROWS, COLS);
    cout << "Двумерный массив значений типа int:\n";
    Print(i_arr_2, ROWS, COLS);
    cout << endl;
    Sort(i_arr_2, ROWS, COLS);
    cout << "Отсортированный двумерный массив значений типа int:\n";
    Print(i_arr_2, ROWS, COLS);
    cout << endl;
    cout << "Сумма элементов двумерного массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
    cout << "Среднее арифметическое элементов двумерного массива: " << Avg(i_arr_2, ROWS, COLS) << endl;
    cout << "Минимальный элемент двумерного массива: " << minValueIn(i_arr_2, ROWS, COLS) << endl;
    cout << "Максимальный элемент двумерного массива: " << maxValueIn(i_arr_2, ROWS, COLS) << endl;
    cout << delimiter << endl;
    
    double d_arr_2[ROWS][COLS];
    FillRand(d_arr_2, ROWS, COLS);
    cout << "Двумерный массив значений типа double:\n";
    Print(d_arr_2, ROWS, COLS);
    cout << endl;
    Sort(d_arr_2, ROWS, COLS);
    cout << "Отсортированный двумерный массив значений типа double:\n";
    Print(d_arr_2, ROWS, COLS);
    cout << endl;
    cout << "Сумма элементов двумерного массива: " << Sum(d_arr_2, ROWS, COLS) << endl;
    cout << "Среднее арифметическое элементов двумерного массива: " << Avg(d_arr_2, ROWS, COLS) << endl;
    cout << "Минимальный элемент двумерного массива: " << minValueIn(d_arr_2, ROWS, COLS) << endl;
    cout << "Максимальный элемент двумерного массива: " << maxValueIn(d_arr_2, ROWS, COLS) << endl;
    cout << delimiter << endl;

    char c_arr_2[ROWS][COLS];
    FillRand(c_arr_2, ROWS, COLS);
    cout << "Двумерный массив значений типа char:\n";
    Print(c_arr_2, ROWS, COLS);
    cout << endl;
    Sort(c_arr_2, ROWS, COLS);
    cout << "Отсортированный двумерный массив значений типа char:\n";
    Print(c_arr_2, ROWS, COLS);
    cout << endl;
    cout << "Сумма элементов двумерного массива: " << Sum(c_arr_2, ROWS, COLS) << endl;
    cout << "Среднее арифметическое элементов двумерного массива: " << Avg(c_arr_2, ROWS, COLS) << endl;
    cout << "Минимальный элемент двумерного массива: " << minValueIn(c_arr_2, ROWS, COLS) << endl;
    cout << "Максимальный элемент двумерного массива: " << maxValueIn(c_arr_2, ROWS, COLS) << endl;
    cout << delimiter << endl;
}