#include "Tline.h"

class Tsort : public Tline 
{
public:
Tsort(int sizeTable) :Tline(sizeTable) { } //также health=10 

void sort()
{
	string temp;
	// Сортировка массива пузырьком, нужно заменить
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