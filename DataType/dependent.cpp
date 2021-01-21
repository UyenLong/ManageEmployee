#ifndef DEPENDENT_CPP
#define DEPENDENT_CPP

#include "dependent.h"

dependent::dependent(long eSSN, string dependentName, char sex, string bDate, string relationship)
{
     _eSSN = eSSN;
     _dependentName = dependentName;
     _sex = sex;
     _bDate = bDate;
     _relationship = relationship;
}

#endif