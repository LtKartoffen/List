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
	do
	{
		cout << "a) Show List\tb)Add to List\n"
			<< "c)Learn the 10 part of all List\nq)Quit from program\n";
		cout << "Input:";
		//while (std::cin.get() != '\n')
		//	continue;
		std::cin.get(ch);
		switch (ch)
		{
		case 'A':
		case 'a':
			if (test.is_empty())
				cout << "List now is empty.\n";
			else
				test.show();
			break;
		case 'b':
		case 'B':
			if (test.is_full())
				cout << "Cannot add element to list cause his is full.\n";
			else
			{
				cout << "Input:";
				Item temp;
				std::cin >> temp;
				test.add(temp);
			}
			break;
		case 'c':
		case 'C':
			if (test.is_empty())
				cout << "List is empty now.\n";
			else
			{
				test.visit(&take10);
				cout << "Your new List:\n";
				test.show();
			}
			break;
		default:
			break;
		}
	} while (ch != 'q' and ch != 'Q');

	cout << "Bye! Thx for testing!" << std::endl;

	return 0;
}

Item take10(Item& num)
{
	return num / 10;
}