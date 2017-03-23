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
	Tline(int sizeTable);            
	Tline(const Tline &otherTable);
	~Tline();                        
	bool IsEmpty();                 
	bool IsFull();                  
	void add(const string &newName, const string &newElem);
	int popID();//удалить и вернуть
	int topID();//вернуть
	int searchID_argOne(const string &Elem);
	int searchID_argTwo(const string &Elem);
	void printTable();
	void printLine(int N);
	int get_size();    
	string get_argOne_Of_Line_N(int N);
	string get_argTwo_Of_Line_N(int N);
};

#endif 