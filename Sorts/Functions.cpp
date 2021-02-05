
//���������� ������� (Selection sort) - � ���������� ����������� ����������
for (int i = 0; i < n-1; ++i)//������� 'i' �������� �������, � �-��� ����� ��������� ����������� ��������
{
	int mInd = i; //index of minimal element
	int mValue = arr[i]; //and its value
	
	for (int j = i + 1; j < n; ++j)//������� 'j' ���������� ��������� �������� � ������� ������������ ��������
	{
		if (arr[j] < mValue)
		{
			mInd = j;
			mValue = arr[j];			
		}
		arr[mInd] = arr[i];
		arr[i] = mValue;
	}
}

//���������� ��������� (Bubble sort)
//��������� ������ � ������� ��������
//��� ���������� � ������� ����������� ����� �������� ���� ��������� �� ��������:
//arr[j] > arr[j + 1])
for (int i = 1; i < n; ++i)//������� 'i' ���������� ���-�� �������� �� �������
{
	for (int j = 0; j < n -1; ++j)//������� 'j' ������������ ��� ����������������� ������������ ������ �� �������
	{
		if (arr[j] < arr[j + 1])
		{
			int buffer = arr[j + 1];
			arr[j + 1] = arr[j];
			arr[j] = buffer;
		}		
	}
}

//���������� ��������� (Bubble sort), ���������������� ������
//��������� ������ � ������� ��������
//��� ���������� � ������� ����������� ����� �������� ���� ��������� �� ��������:
//arr[j] > arr[j + 1])
for (int i = 1; i < n; ++i)//������� 'i' ���������� ���-�� �������� �� �������
{
	bool flag = true;
	for (int j = 0; j < n - (i + 1); ++j)//���������� ������� ������� ����������� �����
		                                 //����� ������� ������� �������� �����
	{
		if (arr[j] < arr[j + 1])
		{
			flag = false;
			int buffer = arr[j + 1];
			arr[j + 1] = arr[j];
			arr[j] = buffer;
		}
	}
	if (flag) break; //���� true, ������ ������ ��� ��������� ������������
}

//���������� ��������� (Insertion sort)
//��������� ������ � ������� �����������
//������� 1
for (int i = 1; i < n; ++i)//������� 'i' ����������
{
	int key = arr[i]; //value of current element
	int j = i - 1; //counter of inner cycle
	while (j > -1 && arr[j] > key)
	{
		arr[j + 1] = arr[j];
		j--;
	}
	arr[j + 1] = key;
}

//���������� ��������� (Insertion sort)
//��������� ������ � ������� �����������
//������� 2
for (int i = 1; i < n; ++i)//������� 'i' ����������
{	
	int j = i;
	while (arr[j] < arr[j - 1] && j > 0)
	{
		int buffer = arr[j - 1];
		arr[j - 1] = arr[j];
		arr[j] = buffer;
		j--;
	}	
}

//���������� ��������� (Insertion sort)
//��������� ������ � ������� �����������
//������� 3 (����� �� ��� ������� 2, �� � ������ for)
for (int i = 1; i < n; ++i)//������� 'i' ����������
{
	for (int j = i; arr[j] < arr[j - 1] && j > 0; --j)		
	{
		int buffer = arr[j - 1];
		arr[j - 1] = arr[j];
		arr[j] = buffer;
	}
}

//��������� �������

//������� (����������� ��������)
void Sort(int arr[ROWS][COLS], const int n, const int m)
{
	for (int i = 0; i < n; ++i)
	{
		int buffer = 0;
		for (int j = 0; j < n; ++j)
		{
			for (int j2 = j; j2 < m; ++j2)
			{
				if (arr[i][j] > arr[j][j2])
				{
					buffer = arr[i][j];
					arr[i][j] = arr[i][j2];
					arr[i][j2] = buffer;
				}
			}
		}
	}
}

for (int t = 0; t < (m * n - 1); ++t) //������ ��������� ��������� � ���������� �������
	//����� �������� ������� � ���������� �������
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			//������ �� ��������� ������� �������
			if (i == m - 1 && j == n - 1)
			{
				continue;
			}
			//����� ������� �� ��������� ������
			if (arr[i][j] > arr[i][j + 1]) //���� ������� �� �� ����� ������� - ����� �������
			{
				temp = arr[i][j];
				arr[i][j] = arr[i][j + 1];
				arr[i][j + 1] = temp;
			}
		}
	}
		
for (int t = 0; t < (m * n - 1); ++t)
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (i == m - 1 && j == n - 1) continue;
			if (arr[i][j] > arr[i][j + 1])
			{
				int temp = arr[i][j];
				arr[i][j] = arr[i][j + 1];
				arr[i][j + 1] = temp;
			}
		}
	}