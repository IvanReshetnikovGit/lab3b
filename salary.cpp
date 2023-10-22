#include "salary.h"

salary::salary()
{
    setFirstName();
    setSecondName();
    setLastName();
    setPhoneNumber();
    setPosition();
    setSalaryAmount();
}

void salary::EmployeeInfo()
{
    cout<<"Full name: "<<secondName<<" "<<firstName<<" "<<lastName<<endl;
    cout<<"Phone number: "<<phoneNumber<<endl;
    cout<<"Position: "<<position<<endl;
    cout<<"Salary Amount: "<<salaryAmount<<endl<<endl;
}

string salary::getFirstName()
{
    return firstName;
}
string salary::getSecondName()
{
    return secondName;
}
string salary::getLastName()
{
    return lastName;
}
string salary::getPhoneNumber()
{
    return phoneNumber;
}
string salary::getPosition()
{
    return position;
}

float salary::getSalaryAmount()
{
    return salaryAmount;
}
float salary::getExtraMoney()
{
    return extraMoney;
}

void salary::setFirstName()
{
    cout<<"Enter first name: ";
    cin>>firstName;
}
void salary::setSecondName()
{
    cout<<"Enter second name: ";
    cin>>secondName;
}
void salary::setLastName()
{
    cout<<"Enter last name: ";
    cin>>lastName;
}
void salary::setPhoneNumber()
{
    string phonetmp;
    cout<<"Enter Phone number: ";
    cin>>phonetmp;
    phoneNumber = FloatSet(phonetmp);
}
void salary::setPosition()
{
    cout<<"Enter position: ";
    cin>>position;
}
void salary::setSalaryAmount()
{
    string salarytmp;
    cout<<"Enter salary: ";
    cin>>salarytmp;
    salaryAmount = FloatSet(salarytmp,"float");
}
void salary::setSalaryExtra(float extra)
{
    salaryAmount += extra;
}