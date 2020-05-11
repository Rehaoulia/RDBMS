#ifndef TABLE_H
#define TABLE_H

#include <iostream>
#include <string>
#include <vector>
#include "Database.h"

using namespace std;

//Class that defines tables of the database

class Table : public Database
{
	string name;			//The name of the table
	unsigned int columnNumber; //number of columns
	unsigned int rowNumber; //number of rows
	string *table;   // table content
public:

	//Constructors and destructor

	Table(); 
	Table(string n) { name = n; }
	Table(const Table& other);
	~Table();

	//function to add a new row to the table
	void addRow();

	//function to add a column
	void addColumn(string columnName);

	//function to delete a row
	void deleteRow();

	//function to delete a column
	void deleteColumn();

	//function that renames a column
	void renameColumn(string columnName, unsigned int columnN);

	//modifies a single content in a table
	void modifyData(string data, unsigned int row, unsigned int column);

	

};
#endif /* TABLE_H */
