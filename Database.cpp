#ifndef DATABASE_CPP
#define DATABASE_CPP

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Database.h"
#include "UsefulFunctions.h"

using namespace std;

Database::Database()
{
	int i = 1;
	dbname = "New Database";
	string fname = dbname + ".txt";
	fstream newfile(dbname);
	bool exists = true;

	while (exists)
	{
		if (fileExists(fname))
		{
			newfile.close();
			dbname = "New Database" + i;
			fname = dbname + ".txt";
			fstream newfile(fname);
			i++;
		}
		else
		{
			exists = false;
		}
	}

	newfile.close();
	ntables = 0;
	tnames = nullptr;


	if (fileExists("Databases.txt"))
	{
		fstream dbfile;
		dbfile.open("Databases.txt", ios::in);
		dbfile << dbname << "\t" << ntables << endl;
		dbfile.close;
	}
	else
	{
		fstream dbfile("Databases.txt");
		dbfile << dbname << "\t" << ntables << endl;
		dbfile.close();
	}
}

Database::Database(const Database& other)
{
	unsigned int j = 1;
	bool exists = true;
	dbname = other.dbname + " copy";
	ntables = other.ntables;
	tnames = new string[ntables];
	string filename = dbname + ".txt";
	fstream newfile(filename);
	for (unsigned int i = 0; i < ntables; i++)
	{
		tnames[i] = other.tnames[i];
	}

	while (exists)
	{
		if (fileExists(filename))
		{
			newfile.close();
			dbname += j;
			filename = dbname + ".txt";
			fstream newfile(filename);
			j++;
		}
		else
		{
			exists = false;
		}
	}




}

void Database::addTable(string tableName)
{
	fstream dbfile;
	string filename = this->dbname + ".txt";
	dbfile.open(filename, ios::app);
	dbfile << tableName;

}
#endif /* DATABASE_CPP */
