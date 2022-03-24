//list.cpp -- realize List's methods
#include "list.h"
#include <iostream>

bool List::is_empty() const
{
	return count == 0;
}

bool List::is_full() const
{
	return count == MAX;
}

List::List()
{
	count = 0;
}

List::~List()
{
}

void List::add(const Item& element)
{
	list[count++] = element;
}

void List::show() const
{
	std::cout << "\tList:\n";
	for (int i = 0; i < count; i++)
		std::cout << "#" << i + 1 << ": " << list[i] << std::endl;
}

void List::visit(Item (*pf)(Item&))
{
	for (int i = 0; i < count; i++)
		list[i] = pf(list[i]);
}