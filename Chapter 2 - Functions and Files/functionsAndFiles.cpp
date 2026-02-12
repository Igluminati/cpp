/* most basic user-defined function syntax:
 *
 * returnType functionName()
 * {
 *	// function body
 * }
*/

#include <iostream> // for std::cout

void doPrint()
{
	std::cout << "In doPrint()\n";
}

int main()
{
	std::cout << "Starting main()\n";
	doPrint();
	std::cout << "Ending main()\n";

	return 0;
}

