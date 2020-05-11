#ifndef TABLE_CPP
#define TABLE_CPP

#include <iostream>
#include <string>
#include <vector>
#include "Table.h"

Table::Table()
{
	name = "";
	columnNumber = 0;
	rowNumber = 0;
	table = nullptr;
	pkey = "";
}

Table::Table(const Table& other)
{
	name = other.name;
	columnNumber = other.columnNumber;
	rowNumber = other.rowNumber;

}


#endif /* TABLE_CPP */
