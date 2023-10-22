#pragma once
#include<vector>
#include "salary.h"
#include<stdexcept>
class company
{   
    public:
    vector<salary>Employees;
    void operator +(int number);
    void operator +=(int number);
    void operator -(int number);

    void Search(int choice);


};