#include "Tline.h"
#include <iostream>  

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

void Tline::add(const string &newElem, const string &newName)
{
	if (IsFull())  throw (SizeTable);
	MemTable[count][0] = newName;
	MemTable[count][1] = newElem;
	count++;
}

int Tline::popID()
{
	if (IsEmpty()) throw (count);
	count--;
	return count;
}

int Tline::topID()
{
	if (IsEmpty()) throw (count);
	return count;
}

int Tline::sesearchID(const string &Elem)
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

void Tline::printTable()
{
	cout << endl << "Вывод таблицы: " << endl;
	if (count == 0)
		cout << " Таблица пуста\n";
	else
	{
		int tmp = count;
		while (tmp != 0)
		{
			cout << MemTable[tmp][0] << " " << MemTable[tmp][1];
			tmp--;
		}
		cout << endl;
	}
}

int Tline::get_size()
{
	return count;
}