#ifndef EMPLOYEE_CPP
#define EMPLOYEE_CPP

#include "department.h"


department::department(string dName, int dNumber, long mgrSSN, string mgrStartDate)
{
    _dName = dName;
    _dNumber = dNumber;
    _mgrSSN = mgrSSN;
    _mgrStartDate = mgrStartDate;
}

#endif