#ifndef USEFULFUNCTION_CPP
#define USEFULFUNCTIONS_CPP

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "UsefulFunctions.h"


bool fileExists(const string fileName)
{
    bool exists;
    ifstream test(fileName);
    exists = test.good();
    test.close();
    return exists;
}


#endif /* USEFULFUNCTION_CPP */
