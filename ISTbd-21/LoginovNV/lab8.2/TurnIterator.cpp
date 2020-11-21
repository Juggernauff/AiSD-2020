#include "TurnIterator.h"

// ���-� ��� ������������� ��������� � ������� ��������� ��������
TurnIterator::TurnIterator(Element* p)
{
    currentElement = p;
}

// ���-� ��� ������������� ��������� � ������� ������� ���������
TurnIterator::TurnIterator(const TurnIterator& it)
{
    currentElement = it.currentElement;
}

// ����������� !=, ==, *, ++ ��� ������ ���������
bool TurnIterator::operator!=(TurnIterator const& other) const
{
    // ���������� ��������� ��������� ����������
    return (currentElement != other.currentElement);
}

bool TurnIterator::operator==(TurnIterator const& other) const
{
    // ���������� ��������� ��������� ����������
    return (currentElement == other.currentElement);
}

typename TurnIterator::reference TurnIterator::operator*() const
{
    // �������������� ��������� Element
    return *currentElement;
}

TurnIterator& TurnIterator::operator++()
{
    // ��� ��� ��������� ������ � ������� �������� ������
    // �������� ++ ������������ �������� �� ���������� ��-�
    // �� ������ �������, �� ������, � ���������, ������
    currentElement = currentElement->getPrev();
    return *this;
}
