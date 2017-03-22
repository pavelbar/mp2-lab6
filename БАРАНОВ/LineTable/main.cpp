#include "TLine.h"

int main()
{
	Tline test(5);
	test.add("pasha", "privet");
	test.add("nekit", "kakdela");
	test.printTable();
	return 0;
}