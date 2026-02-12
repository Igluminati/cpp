#include <iostream>

#include "square.h"
#include "wave.h"

#include "Igli.h" // copies #define MY_NAME from Igli.h here

// object-like macro without substitution text (for conditional compilation)
#define PRINT_JOE

int add(int x, int y); // needed so main.cpp knows that add() is a function defined elsewhere (if this existed in add.h & with the function in add.cpp, we would import the function here (and in add.cpp) with #include "add.h")

int getInteger(); //forward declaration for function getInteger

int main()
{
	std::cout << "The sum of 3 and 4 is: " << add(3,4) << '\n';
	
	int x{ getInteger() };
	int y{ getInteger() };

	std::cout << x << " + " << y << " equals " << x + y << "\n";
	std::cout << MY_NAME << "\n";

#ifdef PRINT_JOE
	std::cout << "Joe\n"; // will be compiled since PRINT_JOE is defined
#endif

#ifdef PRINT_BOB
    std::cout << "Bob\n"; // will be excluded since PRINT_BOB is not defined
#endif

#if 0 // Don't compile anything starting here (you can temporarily re-enable code with #if 1)
	std::cout << "Bob\n";
    	std::cout << "Steve\n";
#endif // until this point


	return 0;

}
