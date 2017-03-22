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
	int popID();
	int topID();
	int sesearchID(const string &Elem);
	void printTable();               
	int get_size();                 
};

#endif 