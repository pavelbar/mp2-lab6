#ifndef __TLINE_H__
#define __TLINE_H__

const unsigned int MaxSize = 100;
#include <string>    
#include <iostream>  
#include <iomanip>

using namespace std;

class Tline
{
protected:
	string **Memtmp;
	string **MemTable;
	int count;
	int SizeTable;
public:
	Tline(int sizeTable);		//have tests
	Tline(const Tline &otherTable);
	~Tline();                        
	bool IsEmpty();		//have tests          
	bool IsFull();		//have tests
	int get_SizeTable();		//have tests  
	int get_count();		//have tests  
	void printTable();
	void printLine(int N);
	void add(const string &newName, const string &newElem);		//have tests
	void dell(int pos);		//have testa
	int searchID_argOne(const string &Elem);		//have tests
	int searchID_argTwo(const string &Elem);		//have tests
	string get_argOne_Of_Line_N(int N);		//have tests
	string get_argTwo_Of_Line_N(int N);		//have tests
};

#endif 
//Лишнее
/*
void add(const string &newName, const string &newElem, int pos);
int popID();//удалить последнюю потом вернуть
int topID();//вернуть
*/
