#ifndef DEPENDENT_H
#define DEPENDENT_H

#include <string>

using namespace std;

class dependent
{
private:
    long _eSSN;
    string _dependentName;
    char _sex;
    string _bDate;
    string _relationship;

public:
    dependent(long, string, char, string, string);
};

#endif