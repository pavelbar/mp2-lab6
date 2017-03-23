#include "Tline.h"

class Tsort : public Tline 
{
public:
Tsort(int sizeTable) :Tline(sizeTable) { } //����� health=10 

void sort()
{
	string temp;
	// ���������� ������� ���������, ����� ��������
	for (int i = 0; i < count - 1; i++) {
		for (int j = 0; j < count - i - 1; j++) {
			if (MemTable[j][0] > MemTable[j+1][0])
			{
				temp = MemTable[j][0];
				MemTable[j][0] = MemTable[j + 1][0];
				MemTable[j + 1][0] = temp;
			}
		}
	}
}

void add(const string &newName, const string &newElem)
	{
		if (IsFull())  throw (SizeTable);
		MemTable[count][0] = newName;
		MemTable[count][1] = newElem;
		count++;
	}
void dell(int pos)
	{
		if (IsEmpty()) throw (count);
		if ((pos < 0) || (pos> count - 1)) throw (pos);
		if (pos == count - 1) count--;
		else
		{
			for (int i = 0; count - pos - i != 0; i++)
				MemTable[pos] = MemTable[pos + 1];
			count--;
		}
	}
};

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