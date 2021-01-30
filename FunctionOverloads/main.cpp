#include <iostream>
using namespace std;

#define delimiter "\n-------------------------------------------\n"

const int ROWS = 8;
const int COLS = 5;

template <typename T>
void FillRand(T arr[], const int n)
{
    for (int i = 0; i < n; ++i)
        arr[i] = rand() % 100;
};
template <typename T>
void FillRand(T arr[ROWS][COLS], const int m, const int n)
{
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
            arr[i][j] = rand() % 100;
    }
}

template <typename T>
void Print(T arr[], const int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << "\t";
    cout << endl;
}
template <typename T>
void Print(T arr[ROWS][COLS], const int m, const int n)
{
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
            cout << arr[i][j] << "\t";
        cout << endl;
    }
    cout << endl;
}

template <typename T>
void Sort(T arr[], const int n)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
template <typename T>
void Sort(T arr[ROWS][COLS], const int m, const int n)
{
    for (int t = 0; t <= (m * n); ++t)
    {
        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < (n - 1); ++j)
            {
                if (arr[i][j] > arr[i][j + 1])
                {
                    int temp = arr[i][j];
                    arr[i][j] = arr[i][j + 1];
                    arr[i][j + 1] = temp;
                }
            }
        }

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < (m - 1); ++j)
            {
                if (arr[j][i] > arr[j][i + 1])
                {
                    int temp = arr[j][i];
                    arr[j][i] = arr[j][i + 1];
                    arr[j][i + 1] = temp;
                }
            }
        }
    }

}

template <typename T>
T Sum(T arr[], const int n)
{
    int sum = 0;
    for (int i = 0; i < n; ++i)
        sum += arr[i];
    return sum;
}
template <typename T>
T Sum(T arr[ROWS][COLS], const int m, const int n)
{
    int sum = 0;
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
            sum += arr[i][j];
    }
    return sum;
}

//template <typename T, typename U>
//U Avg(T arr[], const int n)
//{
//    return (double)Sum(arr, n) / n;
//}
//template <typename T, typename U>
//U Avg(T arr[ROWS][COLS], const int m, const int n)
//{
//    return (double)Sum(arr, m, n) / (m * n);
//}

template <typename T>
T minValueIn(T arr[], const int n)
{
    Sort(arr, n);
    return arr[0];
}
template <typename T>
T minValueIn(T arr[ROWS][COLS], const int m, const int n)
{
    Sort(arr, m, n);
    return arr[0][0];
}

template <typename T>
T maxValueIn(T arr[], const int n)
{
    Sort(arr, n);
    return arr[n - 1];
}
template <typename T>
T maxValueIn(T arr[ROWS][COLS], const int m, const int n)
{
    Sort(arr, m, n);
    return arr[m - 1][n - 1];
}

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
    //cout << "������� �������������� ��������� �������: " << Avg(arr, n) << endl;
    cout << "����������� ������� �������: " << minValueIn(arr, n) << endl;
    cout << "������������ ������� �������: " << maxValueIn(arr, n) << endl;
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
    //cout << "������� �������������� ��������� �������: " << Avg(d_arr, D_SIZE) << endl;
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
    //cout << "������� �������������� ��������� �������: " << Avg(c_arr, C_SIZE) << endl;
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
    //cout << "������� �������������� ��������� ���������� �������: " << Avg(i_arr_2, ROWS, COLS) << endl;
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
    //cout << "������� �������������� ��������� ���������� �������: " << Avg(d_arr_2, ROWS, COLS) << endl;
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
    //cout << "������� �������������� ��������� ���������� �������: " << Avg(c_arr_2, ROWS, COLS) << endl;
    cout << "����������� ������� ���������� �������: " << minValueIn(c_arr_2, ROWS, COLS) << endl;
    cout << "������������ ������� ���������� �������: " << maxValueIn(c_arr_2, ROWS, COLS) << endl;
    cout << delimiter << endl;
}