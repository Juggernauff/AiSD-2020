#pragma once
#include <iostream>
#include "Element.h"

class ArifmIter : public std::iterator<std::input_iterator_tag, float>
{
private:
    // ������ ���� ������������������
    float a_1;
    // ��������
    float d;
    // ���-�� ������
    int n;
    // ������� ����, �������� � ���-��
    float* a_n;
public:

    ArifmIter(float firstElem, float raznost, int count);

    // ����������� !=, ==, *, ++ ��� ��������� ������������������
    bool operator!=(ArifmIter const& other) const;
    bool operator==(ArifmIter const& other) const;
    typename ArifmIter::reference operator*() const;
    ArifmIter& operator++();
};



