#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include <string>

using namespace std;

class department
{
private:
    string _dName;
    int _dNumber;
    long _mgrSSN;
    string _mgrStartDate;

public:
    department(string, int, long, string);
};

#endif