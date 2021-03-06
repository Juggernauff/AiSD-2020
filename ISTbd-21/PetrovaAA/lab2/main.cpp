
#include <iostream>
#include <ctime>
#define SIZE 1000

int array[SIZE];
int size, diapazon;

void ShakerSort(int array[], int size)
{
	int flag = 1;
	int right = size - 1;
	int left = 0;

	while ((left < right) && flag > 0)
	{
		flag = 0;

		for (int i = left; i < right; i++)
		{
			if (array[i] > array[i + 1])
			{
				int temp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = temp;
				flag = 1;
			}
		}

		right--;

		for (int i = right; i > left; i--)
		{
			if (array[i-1] > array[i])
			{
				int temp = array[i];
				array[i] = array[i - 1];
				array[i - 1] = temp;
				flag = 1;
			}
		}

		left++;
	}
}

void RandomArray(int array[], int size, int diapazon)
{
	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % diapazon;
	}
}

void PrintArray(int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << array[i] << " ";
	}

	std::cout << std::endl;
}

int main()
{
	setlocale(LC_ALL, "RUS");
	srand(time(NULL));

	std::cout << "АЛГОРИТМ ШЕЙКЕР-СОРТИРОВКИ" << std::endl;
	std::cout << std::endl;
	std::cout << "Введите размер массива: ";
	std::cin >> size;
	std::cout << "Введите диапазон значений: ";
	std::cin >> diapazon;

	std::cout << "Исходный массив: ";

	RandomArray(array, size, diapazon);

	PrintArray(array, size);

	ShakerSort(array, size);

	std::cout << "Отсортированный массив: ";

	PrintArray(array, size);

    return 0;
}

