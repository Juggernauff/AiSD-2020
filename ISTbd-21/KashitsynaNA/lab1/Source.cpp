#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
const int arrSize = 20;

int main()
{
	setlocale(LC_ALL, "rus");
	int arr[arrSize], desiredValue, i;
	int minDiaposon = 0, maxDiaposon = 20;
	int desiredIndex = -1;

	cout << "������� ������� �����: ";
	cin >> desiredValue;

	cout << endl << "������:" << endl;
	srand(time(0));
	//�������� ������ ���������� �������:
	for (i = 0; i < arrSize; i++)
	{
		arr[i] = minDiaposon + rand() % (maxDiaposon - minDiaposon + 1);
		//���������� �������� ������� ���������� ������� ��������(������):
		if (i == (arrSize - 1))
		{
			arr[i] = desiredValue;
		}
		//������ �������� ������� �� �����:
		cout << arr[i] << " ";
	}

	//�������� �����:
	for (i = 0; i < arrSize; i++)
	{
		if (arr[i] == desiredValue)
	    {
		    desiredIndex = i;
			break;
		}
	}

	cout << endl << endl << "������ �������� �����: " << desiredIndex;
}