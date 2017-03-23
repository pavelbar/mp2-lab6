#include "TLine.h"

int main()
{
	Tline test(5);
	test.add("pasha", "privet");
	test.add("nekit", "kakdela");
	test.printTable();
	test.printTable();
	test.printLine(0);
	test.printLine(1);
	cout << test.get_argOne_Of_Line_N(0) << endl;
	cout << test.get_argTwo_Of_Line_N(0) << endl;
	cout << test.get_argOne_Of_Line_N(1) << endl;
	cout << test.get_argTwo_Of_Line_N(1) << endl;
	
	test.printTable();
	test.dell(1);
	test.printTable();
	test.dell(0);
	test.printTable();
	return 0;
}

//лишнее
/*
test.add("pasha", "privet", test.get_count());
test.add("nekit", "kakdela", test.get_count());
*/