//main.cpp -- test of List-class
#include "list.h"
#include <iostream>

Item take10(Item& num);

int main()
{
	using std::cout;
	cout << "Hello, this program created for testing List!\n";
	List test;
	char ch;

	return 0;
}

Item take10(Item& num)
{
	return num / 10;
}