
//Сортировка выбором (Selection sort) - с внутренним объявлением переменных
for (int i = 0; i < n-1; ++i)//Счетчик 'i' выбирает элемент, в к-рый нужно поместить минимальное значение
{
	int mInd = i; //index of minimal element
	int mValue = arr[i]; //and its value
	
	for (int j = i + 1; j < n; ++j)//Счетчик 'j' перебирает остальные элементы в поисках минимального значения
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

//Сортировка пузырьком (Bubble sort)
//сортирует массив в порядке убывания
//для сортировки в порядке возрастания нужно поменять снак сравнения на обратный:
//arr[j] > arr[j + 1])
for (int i = 1; i < n; ++i)//Счетчик 'i' определяет кол-во проходов по массиву
{
	for (int j = 0; j < n -1; ++j)//Счетчик 'j' используется для последовательного однократного обхода по массиву
	{
		if (arr[j] < arr[j + 1])
		{
			int buffer = arr[j + 1];
			arr[j + 1] = arr[j];
			arr[j] = buffer;
		}		
	}
}

//Сортировка пузырьком (Bubble sort), оптимизированная версия
//сортирует массив в порядке убывания
//для сортировки в порядке возрастания нужно поменять снак сравнения на обратный:
//arr[j] > arr[j + 1])
for (int i = 1; i < n; ++i)//Счетчик 'i' определяет кол-во проходов по массиву
{
	bool flag = true;
	for (int j = 0; j < n - (i + 1); ++j)//Уменьшение отрезка прохода внутреннего цикла
		                                 //после каждого прохода внешнего цикла
	{
		if (arr[j] < arr[j + 1])
		{
			flag = false;
			int buffer = arr[j + 1];
			arr[j + 1] = arr[j];
			arr[j] = buffer;
		}
	}
	if (flag) break; //Если true, значит массив уже полностью отсортирован
}

//Сортировка вставками (Insertion sort)
//сортирует массив в порядке возрастания
//Вариант 1
for (int i = 1; i < n; ++i)//Счетчик 'i' определяет
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

//Сортировка вставками (Insertion sort)
//сортирует массив в порядке возрастания
//Вариант 2
for (int i = 1; i < n; ++i)//Счетчик 'i' определяет
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

//Сортировка вставками (Insertion sort)
//сортирует массив в порядке возрастания
//Вариант 3 (такой же как вариант 2, но с циклом for)
for (int i = 1; i < n; ++i)//Счетчик 'i' определяет
{
	for (int j = i; arr[j] < arr[j - 1] && j > 0; --j)		
	{
		int buffer = arr[j - 1];
		arr[j - 1] = arr[j];
		arr[j] = buffer;
	}
}

//ДВУМЕРНЫЕ МАССИВЫ

//Выбором (ученические варианты)
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

for (int t = 0; t < (m * n - 1); ++t) //сдвиги очередных элементов в правильную позицию
	//сдвиг элемента массива в правильную позицию
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			//анализ на последний элемент массива
			if (i == m - 1 && j == n - 1)
			{
				continue;
			}
			//конец анализа на последнюю строку
			if (arr[i][j] > arr[i][j + 1]) //Если элемент не на своей позиции - обмен местами
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