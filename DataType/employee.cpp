#ifndef EMPLOYEE_CPP
#define EMPLOYEE_CPP

#include "employee.h"


employee::employee(string fName, char mInit, string lName, long SSN, string bDate, string address, char sex, int salary, long superSSN, int dNo)
{
    _fName = fName;
    _mInit = mInit;
    _lName = lName;
    _SSN = SSN;
    _bDate = bDate;
    _address = address;
    _sex = sex;
    _salary = salary;
    _superSSN = superSSN;
    _dNo = dNo; 
}

#endif