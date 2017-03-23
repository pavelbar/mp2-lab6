#include "Tsort.h"

int main()
{
	Tsort test(5);
	test.add("pasha", "privet");
	test.printTable();
	test.add("nekit", "kakdela");
	test.printTable();
	test.add("aaaa", "kakdela");
	test.printTable();
	test.add("bbbb", "kakdela");
	test.printTable();
	return 0;
}

