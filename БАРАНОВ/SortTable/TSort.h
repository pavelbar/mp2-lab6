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
/*Методы предка
   +----------------------------------------------------------------+
   |     void add( ... );	добавление строки в таблицу (????)       |
   |     void dell(int pos); удаление строки из таблицы  (????)     |
   +----------------------------------------------------------------+

bool IsEmpty();	пуста ли таблица (+)

bool IsFull();	полна ли таблица (+)

int get_SizeTable();	получить размер таблицы (+)

int get_count();	получить индекс последней пустой строки (+)

void printTable(); печать таблицы (+)

void printLine(int N); печать N-ой строки таблицы (+)

(+) int searchID_argOne(const string &Elem);	искать значение в первой колонке таблицы (колонка имен), при совпадении вернуть номер колонки, иначе - (-1)

(+) int searchID_argTwo(const string &Elem);	искать значение во второй колонке таблицы (колонка значений), при совпадении вернуть номер колонки, иначе - (-1)

(+) string get_argOne_Of_Line_N(int N);	вернуть данные из первой колонки таблицы строки N

(+) string get_argTwo_Of_Line_N(int N);	вернуть данные из второй колонки таблицы строки N
*/