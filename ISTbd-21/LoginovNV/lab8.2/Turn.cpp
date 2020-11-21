#include "Turn.h"
Turn::Turn()
{
	// �������������� ������ �������
	tail = nullptr;
	head = nullptr;
	turnSize = 0;
}

// �������� �������
void Turn::deleteTurn()
{
	// ������ ����� ���������� ���� ��-��
	this->getElem(turnSize);
	turnSize = 0;
}

// �������� �������
void Turn::pushElem(float number)
{
	// �������� ������ ��� ����� �������
	Element* newElem = new Element(nullptr, number);

	if (tail != nullptr)
	{
		// ���� ������� �� �����
		// ���������� �������� ���������� ��-� - ��� ����� ��-�
		head->setPrev(newElem);
		// ����� ��������� - ��� ����� ��-�
		head = newElem;
		// � ���������� ��� ����������� - nullptr
		head->setPrev(nullptr);

	}
	else
	{
		// ���� �����
		// � ������ � ����� - ��� ����������� ��-�
		head = newElem;
		tail = newElem;
	}
	turnSize++;
}

// �������� ��������� ��������� � �������� �������
void Turn::pushArr(float numbers[], int count)
{
	// ��������� ������ �������
	// ��������� ������ �� �����������
	for (int i = 0; i < count; i++)
	{
		this->pushElem(numbers[i]);
	}
}

// ������� ��������� �������
void Turn::checkLast()
{
	std::cout << tail->getData() << std::endl;
}

// �������� ��� ��������
void Turn::printTurn()
{
	if (turnSize > 0)
	{
		// ���� ������� �� �����
	    // �������� � tail
	    // ���������� head - ��� prev = nullptr
		for (Element* current = tail; current != nullptr; current = current->getPrev())
		{
			std::cout << current->getData() << " ";
		}
		std::cout << std::endl;
	}
	else
	{
		std::cout << "������� �����" << std::endl;
	}
	
}

// ������� �������
float Turn::getElem()
{
	// ���������� �����
	float element = tail->getData();
	
	// ���������� ������� ������� ������� � ������� � ������� ������
	// ����� ������ - ��� ���������� ��-� ������� 
	Element* buff = new Element(nullptr, 0);
	buff = tail->getPrev();
	delete tail;
	tail = buff;

	// ��������� ���-�� ��-��
	turnSize--;
	// ���������� ����������� �����
	return element;
}

// ������� �������� - ������� �� ����������
float* Turn::getElem(int count)
{
	float* resultArr = new float[count - 1];
	for (int i = 0; i < count; i++)
	{
		resultArr[i] = this->getElem();
	}
	return resultArr;
}

// ��������� ��-�� - ������� �� ����������
Turn Turn::transfer(int count)
{
	// ����� �������
	Turn newTorn;

	// ��������� �� ������ �������
	float* transferArr = new float[count - 1];
	transferArr = this->getElem(count);

	// ��������� ��-� � ����� �������
	for (int i = 0; i < count; i++)
	{
		newTorn.pushElem(transferArr[i]);
	}
	// ���������� �
	return newTorn;
}

void Turn::showCharacters()
{
	float sum = 0, avg = 0;
	float min, max;
	min = max = tail->getData();

	for (Element* current = tail; current != nullptr; current = current->getPrev())
	{
		// ������� �����
		sum += current->getData();
	    // ���� max
		if (current->getData() > max)
		{
			max = current->getData();
		}
		// ���� min
		if (current->getData() < min)
		{
			min = current->getData();
		}
	}
	// ������� �������
	avg = sum / turnSize;
	std::cout << "max = " << max << std::endl;
	std::cout << "min = " << min << std::endl;
	std::cout << "sum = " << sum << std::endl;
	std::cout << "avg = " << avg << std::endl;
}

// ��������� �������������� ������������������
void Turn::generateArifm(float firstElem, float raznost, int count)
{
	// ��� ������� pushArr
	float* arrToPush = new float[count];

	// ������ ����� ������������������
	// � ��-� ��������� � ������
	ArifmGenerator sequence(firstElem, raznost, count);
	int i = 0;
	for (ArifmGenerator::iterator item = sequence.begin(); item != sequence.end(); ++item)
	{
		arrToPush[i] = *item;
		i++;
	}

	//��������� � ������� ������� ������������������
	this->pushArr(arrToPush, count);
}
