#pragma once
#include <iostream>

class Element
{
private:
	// ��������� �� ���������� �������
	Element* prev;
	// ���� ������ - float, ������� 6
	float data;

public:
	// �����������
	Element(Element* newPrev, float newData)
	{
		prev = newPrev;
		data = newData;
	}

	// ���������� ����������
	void setPrev(Element* newPrev)
	{
		prev = newPrev;
	}

	// �������� ����������
	Element* getPrev()
	{
		return prev;
	}

	float getData()
	{
		return data;
	}

	// ��� ���������
	float* getPointer()
	{
		return &data;
	}
};

