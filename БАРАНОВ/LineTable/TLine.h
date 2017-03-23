#ifndef __TLINE_H__
#define __TLINE_H__

const unsigned int MaxSize = 100;
#include <string>    
#include <iostream>  
#include <iomanip>

using namespace std;

class Tline
{
public:
	string **Memtmp;
	string **MemTable;
	int count;
	int SizeTable;
	Tline(int sizeTable);		//have tests
	Tline(const Tline &otherTable);
	~Tline();                        
	bool IsEmpty();		//have testa          
	bool IsFull();		//have testa
	int get_SizeTable();		//have testa  
	int get_count();		//have testa  
	void printTable();
	void printLine(int N);
	void add(const string &newName, const string &newElem);		//have testa
	void dell(int pos);		//have testa
	int searchID_argOne(const string &Elem);		//have testa
	int searchID_argTwo(const string &Elem);		//have testa
	string get_argOne_Of_Line_N(int N);		//have testa
	string get_argTwo_Of_Line_N(int N);		//have testa
	virtual void sort()
	{
		string* temp;
		// Сортировка массива пузырьком, нужно заменить
		for (int i = 0; i < count - 1; i++) {
			for (int j = 0; j < count - i - 1; j++) {
				if (MemTable[j][0] > MemTable[j + 1][0])
				{
					temp = MemTable[j];
					MemTable[j] = MemTable[j + 1];
					MemTable[j + 1] = temp;
				}
			}
		}
	}
};

#endif 
//Лишнее
/*
void add(const string &newName, const string &newElem, int pos);
int popID();//удалить последнюю потом вернуть
int topID();//вернуть
*/