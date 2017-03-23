#include "TLine.h"

int main()
{
	Tline test(5);
	test.add("pasha", "privet", test.get_count());
	test.add("nekit", "kakdela", test.get_count());
	test.printTable();
	test.add("jena", "hello", 0);
	test.printTable();
	test.printLine(0);
	test.printLine(1);
	cout << test.get_argOne_Of_Line_N(0) << endl;
	cout << test.get_argTwo_Of_Line_N(0) << endl;
	cout << test.get_argOne_Of_Line_N(1) << endl;
	cout << test.get_argTwo_Of_Line_N(1) << endl;
	return 0;
}