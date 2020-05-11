#ifndef DATABASE_H
#define DATABASE_H

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "User.h"

using namespace std;

//Class that defines a whole database

class Database : public User
{
	string dbname;				//name of the database
	unsigned int ntables;		//number of tables in a database
	string *tnames;		//contains tables names of the database which are also the file names of each database

public:

	//primary key variable for each table of the database
	string pkey; 
	
	// Constructors and destructor
	Database();
	Database(const Database& other);
	~Database()
	{
		string ch;
		delete tnames;
		ifstream dbfile;
		fstream temp("temp.txt");
		dbfile.open("Databases.txt", ios::out);
		while (getline(dbfile, ch))
		{
			if (ch != dbname)
			{
				dbfile >> ch;
				temp << ch;
			}
		}
		dbfile.close;
		remove("Databases.txt");
		rename("temp.txt", "Databases.txt");
		temp.close;
	}

	//Function that adds a new table name when it's created
	void addTable(string tableName);
	
	//Function that deteles table name when it's removed
	void deleteTable(string tableName);
};





#endif /* DATABASE_H */
