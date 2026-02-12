#include <iostream>

void doNothing(int&) {
	// Trick compiler into thinking variable x is used
	// return nothing
}

int five()
{
	return 5;
}

int main()
{
	/* This is a..
	 * ..multi-line..
	 * comment
	 */
	// int x; // definition of variable x. memory of x is allocated after main() is executed	
	double width; // define a variable called width of type double
	width = 5; // assingment of value 5 into variable width

	std::cout << width; // prints 5
	
	width = 7; // change the value stored in variable width to 7
	
	std::cout << width; // prints 7

	int a, b; // defining multiple variables 
	
	// Traditional Initalisation Forms:
	int c = 5; // copy-initialisation
	int d ( 6 ); // direct-initialisation
	
	// Modern Initialisation Forms (RECOMMENDED):
	int e { 7 }; // direct-list-initialisation
	int f { }; // value-initialisation

	std::cout << e;

	//int w1 { 4.5 }; // list initialisation enforces compilation error with mismatched type
	
	int w2 = 4.5; // copy-initialised to 4
	int w3 (4.5); // direct-initialised to 4


	//int y {};
	//std::cin >> y;
	
	int g = 4, h = 5; // g and h both have initialisers
	
	[[maybe_unused]] double pi { 3.14159 }; // compiler won't complain that pi is unused
	double gravity { 9.8 };

	std::cout << "\n gravity is equal to: " << gravity << std::endl; // std::endl = move cursor to next line
	std::cout << "Hello" << "World!"; // concatenate multiple pieces of output

//	int x{};
//	int y{};
//	std::cin >> x >> y; // cin - character input
//	std::cout << "You entered " << x << " and " << y << "\n"; // cout - character output
	
	int uninitialised;
	std::cout << uninitialised;

	int test;

	doNothing(test);

	std::cout << sizeof(int) << '\n'; // print how many bytes of memory an int value takes

	std::cout << 5 << '\n'; // printing the value of a literal
	int x {5};
	std::cout << x << '\n'; // printing the value of a variable
	std::cout << 1 + 2 << '\n'; // printing the output of the sum of two literals

	int a1{2};
	int b1{ 2 + 3 };
	int c1 { (2 * 3) + 4 };
	int d1{ b1 };
	int e1{ five() }; // initialise variable e with function return value 5 (scroll to top to find)
	
	return 0;

}
