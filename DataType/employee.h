#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

using namespace std;

class employee
{
private:
    string _fName;
    char _mInit;
    string _lName;
    long _SSN;
    string _bDate;
    string _address;
    char _sex;
    int _salary;
    long _superSSN;
    int _dNo;

public:
    employee(string, char, string, long, string, string, char, int, long, int);
};

#endif