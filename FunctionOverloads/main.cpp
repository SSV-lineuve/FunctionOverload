#include "FunctionH.h"

void main()
{
    setlocale(LC_ALL, "Russian");

    const int n = 10;
    int arr[n];
    FillRand(arr, n);
    cout << "������ �������� ���� int:\n";
    Print(arr, n);
    cout << endl;
    Sort(arr, n);
    cout << "��������������� ������ �������� ���� int:\n";
    Print(arr, n);
    cout << endl;
    cout << "����� ��������� �������: " << Sum(arr, n) << endl;
    cout << "������� �������������� ��������� �������: " << Avg(arr, n) << endl;
    cout << "����������� ������� �������: " << minValueIn(arr, n) << endl;
    cout << "������������ ������� �������: " << maxValueIn(arr, n) << endl;;
    cout << delimiter << endl;

    const int D_SIZE = 8;
    double d_arr[D_SIZE];
    FillRand(d_arr, D_SIZE);
    cout << "������ �������� ���� double:\n";
    Print(d_arr, D_SIZE);
    cout << endl;
    Sort(d_arr, D_SIZE);
    cout << "��������������� ������ �������� ���� double:\n";
    Print(d_arr, D_SIZE);
    cout << endl;
    cout << "����� ��������� �������: " << Sum(d_arr, D_SIZE) << endl;
    cout << "������� �������������� ��������� �������: " << Avg(d_arr, D_SIZE) << endl;
    cout << "����������� ������� �������: " << minValueIn(d_arr, D_SIZE) << endl;
    cout << "������������ ������� �������: " << maxValueIn(d_arr, D_SIZE) << endl;
    cout << delimiter << endl;

    const int C_SIZE = 12;
    char c_arr[C_SIZE];
    FillRand(c_arr, C_SIZE);
    cout << "������ �������� ���� char:\n";
    Print(c_arr, C_SIZE);
    cout << endl;
    Sort(c_arr, C_SIZE);
    cout << "��������������� ������ �������� ���� char:\n";
    Print(c_arr, C_SIZE);
    cout << endl;
    cout << "����� ��������� �������: " << Sum(c_arr, C_SIZE) << endl;
    cout << "������� �������������� ��������� �������: " << Avg(c_arr, C_SIZE) << endl;
    cout << "����������� ������� �������: " << minValueIn(c_arr, C_SIZE) << endl;
    cout << "������������ ������� �������: " << maxValueIn(c_arr, C_SIZE) << endl;
    cout << delimiter << endl;

    int i_arr_2[ROWS][COLS];
    FillRand(i_arr_2, ROWS, COLS);
    cout << "��������� ������ �������� ���� int:\n";
    Print(i_arr_2, ROWS, COLS);
    cout << endl;
    Sort(i_arr_2, ROWS, COLS);
    cout << "��������������� ��������� ������ �������� ���� int:\n";
    Print(i_arr_2, ROWS, COLS);
    cout << endl;
    cout << "����� ��������� ���������� �������: " << Sum(i_arr_2, ROWS, COLS) << endl;
    cout << "������� �������������� ��������� ���������� �������: " << Avg(i_arr_2, ROWS, COLS) << endl;
    cout << "����������� ������� ���������� �������: " << minValueIn(i_arr_2, ROWS, COLS) << endl;
    cout << "������������ ������� ���������� �������: " << maxValueIn(i_arr_2, ROWS, COLS) << endl;
    cout << delimiter << endl;
    
    double d_arr_2[ROWS][COLS];
    FillRand(d_arr_2, ROWS, COLS);
    cout << "��������� ������ �������� ���� double:\n";
    Print(d_arr_2, ROWS, COLS);
    cout << endl;
    Sort(d_arr_2, ROWS, COLS);
    cout << "��������������� ��������� ������ �������� ���� double:\n";
    Print(d_arr_2, ROWS, COLS);
    cout << endl;
    cout << "����� ��������� ���������� �������: " << Sum(d_arr_2, ROWS, COLS) << endl;
    cout << "������� �������������� ��������� ���������� �������: " << Avg(d_arr_2, ROWS, COLS) << endl;
    cout << "����������� ������� ���������� �������: " << minValueIn(d_arr_2, ROWS, COLS) << endl;
    cout << "������������ ������� ���������� �������: " << maxValueIn(d_arr_2, ROWS, COLS) << endl;
    cout << delimiter << endl;

    char c_arr_2[ROWS][COLS];
    FillRand(c_arr_2, ROWS, COLS);
    cout << "��������� ������ �������� ���� char:\n";
    Print(c_arr_2, ROWS, COLS);
    cout << endl;
    Sort(c_arr_2, ROWS, COLS);
    cout << "��������������� ��������� ������ �������� ���� char:\n";
    Print(c_arr_2, ROWS, COLS);
    cout << endl;
    cout << "����� ��������� ���������� �������: " << Sum(c_arr_2, ROWS, COLS) << endl;
    cout << "������� �������������� ��������� ���������� �������: " << Avg(c_arr_2, ROWS, COLS) << endl;
    cout << "����������� ������� ���������� �������: " << minValueIn(c_arr_2, ROWS, COLS) << endl;
    cout << "������������ ������� ���������� �������: " << maxValueIn(c_arr_2, ROWS, COLS) << endl;
    cout << delimiter << endl;
}

