#include <iostream>
#include <time.h>
#include <cmath>
using namespace std;

void FillArray(int count, int array[])
{
	for (int i = 0; i < count; i++)
	{
		cin >> array[i];
	}
}


void ShowArray(int count, int array[])
{
	for (int i = 0; i < count; i++)
	{
		cout << array[i] << " ";
	}
	cout << "\n";
}

void selection_sort(int array[], int array_length) {
	if (!array_length) {
		return;
	}

	for (int i = 0; i < array_length - 1; i++) {
		int min_i = i;
		for (int j = i + 1; j < array_length; j++) {
			if (array[j] < array[min_i]) {
				min_i = j;
			}
		}

		if (min_i != i) {
			swap(array[i], array[min_i]);
			min_i = i;
		}
	}
}

int BinarySearch(int array[], int left, int rigth, int element)
{
	while (left <= rigth)
	{
		int m = (unsigned)left + ((unsigned)rigth - (unsigned)left) / 2;
		if (array[m] == element)
			return m;
		else if (array[m] < element)
			left = m + 1;
		else
			rigth = m - 1;
	}
	return -1;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "������������ ������ �1 (�2) \n ��������� ��������� ��. �����-22 \n ������ ����\n �������� �������������\n ������������ ������ ���������\n\n---------------------------\n";
	cout << "�������: \n 1)����������� ��������� ��������� ������ � ������� ��������: �������� �����, �������� ����� � ��������, �������� �����.\n ������� �3  \n 2) ����������� ��������� ����������: ������� ��������, ������-�����������, ������� ��������, ������� �������.\n ������� �3 \n---------------------------\n";
	int array[20];
	int count;
	int left = 0, element;
	cout << "������� ���-�� ��������� �������: ";
	cin >> count;
	int rigth = count;
	cout << "������� �������� �������: ";
	FillArray(count, array);
	cout << "������� ������� ��� ������: ";
	cin >> element;
	cout << "�������� ������ �������������: ";
	ShowArray(count, array);
	selection_sort(array, count);
	if (BinarySearch(array, left, rigth, element) == -1)
	{
		cout << "������ �������� �� ����������!\n";
	}
	else
	{
		cout << "������� ��������: ";
		cout << BinarySearch(array, left, rigth, element) << "\n";
	}
	cout << "��������������� ������ �������������: ";
	ShowArray(count, array);
}
