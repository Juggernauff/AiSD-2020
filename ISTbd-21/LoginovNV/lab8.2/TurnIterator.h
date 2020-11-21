#include <iostream>
#include "Element.h"

// ��������� ����� ���������
class TurnIterator : public std::iterator<std::input_iterator_tag, Element>
{
private:
    Element* currentElement;
public:
    // ���-� ��� ������������� ��������� � ������� ��������� ��������
    TurnIterator(Element* p);
    // ���-� ��� ������������� ��������� � ������� ������� ���������
    TurnIterator(const TurnIterator& it);

    // ����������� !=, ==, *, ++ ��� ������ ���������
    bool operator!=(TurnIterator const& other) const;
    bool operator==(TurnIterator const& other) const;
    typename TurnIterator::reference operator*() const;
    TurnIterator& operator++();
};


