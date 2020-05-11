#ifndef USER_H
#define USER_H

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

class User
{
	string username;
	string password;

public:

	void setUsername(string username)
	{
		this->username = username;
	}

	string getUsername()
	{
		return this->username;
	}

	void setPassword(string password)
	{
		this->password = password;
	}

	string getPassword()
	{
		return this->password;
	}
};

#endif	/* USER_H */