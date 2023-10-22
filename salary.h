#pragma once
#include<iostream>
#include<string>
#include "FloatSet.h"
#include<vector>
using namespace std;

class salary
{    
    string firstName;
    string secondName;
    string lastName;
    string phoneNumber;
    string position;

    float salaryAmount;
    float extraMoney;

    public:
    salary();

    void EmployeeInfo();

    string getFirstName();
    string getSecondName();
    string getLastName();
    string getPhoneNumber();
    string getPosition();
    float getSalaryAmount();
    float getExtraMoney();


    void setFirstName();
    void setSecondName();
    void setLastName();
    void setPhoneNumber();
    void setPosition();
    void setSalaryAmount();
    void setSalaryExtra(float extra);
};