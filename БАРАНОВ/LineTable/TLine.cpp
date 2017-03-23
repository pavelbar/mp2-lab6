#include "Tline.h"

Tline::Tline(int sizeTable)
{
	if ((sizeTable < 1) || (sizeTable > MaxSize)) throw (sizeTable);
	MemTable = new string*[sizeTable];
	SizeTable = sizeTable;
	for (int i = 0; i < sizeTable; i++)
	{
		MemTable[i] = new string[2];

	}
	count = 0;
}

Tline::Tline(const Tline &otherTable)
{
	count = otherTable.count;
	SizeTable = otherTable.SizeTable;
	MemTable = new string*[MaxSize];
	for (int i = 0; i < SizeTable; i++)
		MemTable[i] = otherTable.MemTable[i];
}

Tline::~Tline()
{
	delete[] MemTable;
	MemTable = NULL;
}

bool Tline::IsEmpty()
{
	return(count == 0);
}

bool Tline::IsFull()
{
	return (count == SizeTable);
}

void Tline::add(const string &newName, const string &newElem)
{
	if (IsFull())  throw (SizeTable);
	MemTable[count][0] = newName;
	MemTable[count][1] = newElem;
	count++;
}

int Tline::popID()//удалить и вернуть
{
	if (IsEmpty()) throw (count);
	count--;
	return count;
}

int Tline::topID()//вернуть
{
	if (IsEmpty()) throw (count);
	return count;
}

int Tline::searchID_argOne(const string &Elem)
{
	if (IsEmpty()) throw (count);
	//--Линейный поиск, нужно заменить
	for (int i = 0; i < SizeTable; i++)
	{
		if (MemTable[i][0] == Elem)
			return i;
	}
	return -1;
}

int Tline::searchID_argTwo(const string &Elem)
{
	if (IsEmpty()) throw (count);
	//--Линейный поиск, нужно заменить
	for (int i = 0; i < SizeTable; i++)
	{
		if (MemTable[i][1] == Elem)
			return i;
	}
	return -1;
}

void Tline::printLine(int N)
{
	if ((N < 0) || (N> count - 1)) throw (N);
	cout << endl;
	cout << "	+=============================================================+" << endl;
	cout << left << "	|" << setw(30) << "Name:" << "|" << setw(30) << "Value:" << "|" << endl;
	cout << "	+=============================================================+" << endl;
	cout << "	|" << setw(30) << MemTable[N][0] << "|" << setw(30) << MemTable[N][1] << "|" << endl;
	cout << "	+-------------------------------------------------------------+" << endl;

}

void Tline::printTable()
{
	if (count == 0)
		cout << " Таблица пуста\n";
	else
	{
	int tmp = 0;
	cout << endl;
		cout << "	+=============================================================+" << endl;
		cout << left << "	|" << setw(30) << "Name:" << "|" << setw(30) << "Value:" << "|" << endl;
		cout << "	+=============================================================+" << endl;
		while (tmp != count - 1)
		{
			cout << "	|" << setw(30) << MemTable[tmp][0] << "|" << setw(30) << MemTable[tmp][1] << "|" << endl;
			cout << "	+-------------------------------------------------------------+" << endl;
			tmp++;

		}
		
		cout << endl;
	}
	
}

int Tline::get_size()
{
	return count;
}

string Tline::get_argOne_Of_Line_N(int N)
{
	if ((N < 0) || (N> count-1)) throw (N);
	return MemTable[N][0];
}

string Tline::get_argTwo_Of_Line_N(int N)
{
	if ((N < 0) || (N> count - 1)) throw (N);
	return MemTable[N][1];
}
