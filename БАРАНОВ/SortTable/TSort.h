#ifndef __TSORT_H__
#define __TSORT_H__

#include "Tline.h"

class Tsort : public Tline
{
public:
	Tsort(int sizeTable) :Tline(sizeTable) { }

	void add(const string &newName, const string &newElem)
	{
		if (IsFull())  throw (SizeTable);
		MemTable[count][0] = newName;
		MemTable[count][1] = newElem;
		count++;
		sort();
	}
};
#endif 


/*
/*������ ������
   +----------------------------------------------------------------+
   |     void add( ... );	���������� ������ � ������� (????)       |
   |     void dell(int pos); �������� ������ �� �������  (????)     |
   +----------------------------------------------------------------+

bool IsEmpty();	����� �� ������� (+)

bool IsFull();	����� �� ������� (+)

int get_SizeTable();	�������� ������ ������� (+)

int get_count();	�������� ������ ��������� ������ ������ (+)

void printTable(); ������ ������� (+)

void printLine(int N); ������ N-�� ������ ������� (+)

(+) int searchID_argOne(const string &Elem);	������ �������� � ������ ������� ������� (������� ����), ��� ���������� ������� ����� �������, ����� - (-1)

(+) int searchID_argTwo(const string &Elem);	������ �������� �� ������ ������� ������� (������� ��������), ��� ���������� ������� ����� �������, ����� - (-1)

(+) string get_argOne_Of_Line_N(int N);	������� ������ �� ������ ������� ������� ������ N

(+) string get_argTwo_Of_Line_N(int N);	������� ������ �� ������ ������� ������� ������ N
*/