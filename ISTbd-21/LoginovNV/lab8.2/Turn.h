#pragma once
#include "Element.h"
#include "TurnIterator.h"
#include "ArifmGenerator.h"

class Turn
{
private:
	// ����� ��-� ����� � ����� - ��� tail
	// ��������� - �� ����� ���� � ���������� - ������ � �������
	Element* tail;

	// ��������� � ������ - ��� head
	// ��������� - �� ������ ���� �� ���������� - ��������� � �������
	Element* head;

	// ���-�� ��-�� � ����������
	int turnSize;

public:
	// ���������� ���������
	typedef TurnIterator iterator;
	typedef TurnIterator const_iterator;

	// ������ ��� ��������� ���������� �� ����� � ������
	// ����������� � ������, � ���������
	iterator begin()
	{
		return iterator(tail);
	}

	iterator end()
	{
		return iterator(head->getPrev());
	}

	const_iterator begin() const
	{
		return iterator(tail);
	}
	const_iterator end() const
	{
		return iterator(head);
	}

	// ����������� �� ���������
	Turn();

	// �������� �������(�)
	void pushElem(float number);
	void pushArr(float numbers[], int count);

	// ����������� ��������� ��-� 
	void checkLast();

	// ������� ��-�(�)
	float getElem();
	float* getElem(int count);

	// ��������� N ��-�� � ����� �������
	Turn transfer(int count);

	// ������� ��� �������� �� �����
	void printTurn();

	// �������� �������
	void deleteTurn();

	// ������� ���-�� ��������� � �������
	int retSize()
	{
		return turnSize;
	}

	// ������� max, min, sum ��������
	void showCharacters();

	// ��������� �������������� ������������������
	void generateArifm(float firstElem, float raznost, int count);
};

