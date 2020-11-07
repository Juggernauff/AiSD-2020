#include <iostream>

using namespace std;

void Swap(int *Massiv, int i)//������� ������
{
int temp;
temp=Massiv[i];
Massiv[i]=Massiv[i-1];
Massiv[i-1]=temp;
}

void ShakerSort(int *Massiv, int Start, int N)//������� ��������� ����������
{
int Left, Right, i;
Left=Start;
Right=N-1;
while (Left<=Right)
{
for (i=Right; i>=Left; i--)
if (Massiv[i-1]>Massiv[i]) Swap(Massiv, i);
Left++;
for (i=Left; i<=Right; i++)
if (Massiv[i-1]>Massiv[i]) Swap(Massiv, i);
Right--;
}
}

int main()
{
setlocale(LC_ALL,"Rus");
int sizeArr, i;
cout<<"������� ������ �������  "; cin>>sizeArr;
int *arr=new int[sizeArr];
for (i=0; i<sizeArr; i++)
{ cout<<"������� "<<i+1<<" �������  "; cin>>arr[i]; }
ShakerSort(arr, 1, sizeArr);
cout<<"�������������� ������: ";
for (i=0; i<sizeArr; i++)
    {cout<<" "<<arr[i];}

}
