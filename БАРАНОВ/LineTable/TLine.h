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
	Tline(int sizeTable);		//have testa
	Tline(const Tline &otherTable);
	~Tline();                        
	bool IsEmpty();		//have testa          
	bool IsFull();		//have testa
	int get_SizeTable();		//have testa  
	int get_count();		//have testa  
	void printTable();
	void printLine(int N);
	void add(const string &newName, const string &newElem);		//have testa
	void dell(int pos);
	int searchID_argOne(const string &Elem);		//have testa
	int searchID_argTwo(const string &Elem);		//have testa
	string get_argOne_Of_Line_N(int N);		//have testa
	string get_argTwo_Of_Line_N(int N);		//have testa
};

#endif 
//������
/*
void add(const string &newName, const string &newElem, int pos);
int popID();//������� ��������� ����� �������
int topID();//�������
*/