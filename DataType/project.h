#ifndef PROJECT_H
#define PROJECT_H

#include <string>

using namespace std;

class project
{
private:
    string _pName;
    int _pNumber;
    string _pLocation;
    int _dNumber;

public:
    project(string, int, string, int);
};

#endif