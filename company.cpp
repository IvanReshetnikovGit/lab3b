#include "company.h"

void company::operator +(int number)
{
    salary tmp;
    Employees.push_back(tmp);
    
}
void company::operator-(int number)
{
    Employees.erase(Employees.begin() + number);
}
void company::operator+=(int number)
{
    float numbertmp = Employees[number].getSalaryAmount();
    cout<<numbertmp<<endl;
    if(numbertmp > 100000)
    {
        throw runtime_error("To much money");
    }

    string extratmp;
    cout<<"How much would you like to add: ";
    cin>>extratmp;
    float extra = FloatSet(extratmp,"float");
    Employees[number].setSalaryExtra(extra);
}


void company::Search(int choice)
{
    if (choice == 1)
    {
        string secondName1;
        bool found = false;
        cout<<"Enter second name of employee: ";
        cin>>secondName1;
        for (size_t i = 0; i < Employees.size(); i++)
        {
            if (Employees[i].getSecondName() == secondName1)
            {
                Employees[i].EmployeeInfo();
                found = true;
            }
        }
        if (found == false)
        {
            cout<<"Employee not found, please, try again."<<endl;
            Search(choice);
        }        
    }
    else if(choice == 2)
    {
        string name1;
        bool found = false;
        cout<<"Enter Name of employee: ";
        cin>>name1;
        for (size_t i = 0; i < Employees.size(); i++)
        {
            if (Employees[i].getFirstName() == name1)
            {
                Employees[i].EmployeeInfo();
                found = true;
            }
        }
        if (found == false)
        {
            cout<<"Employee not found"<<endl;
            Search(choice);
        }
    }
    else if(choice == 3)
    {
        string surname1;
        bool found = false;
        cout<<"Enter Name of employee: ";
        cin>>surname1;
        for (size_t i = 0; i < Employees.size(); i++)
        {
            if (Employees[i].getSecondName() == surname1)
            {
                Employees[i].EmployeeInfo();
                found = true;
            }
        }
        if (found == false)
        {
            cout<<"Employee not found"<<endl;
            Search(choice);
        }     
    }
    else if(choice == 4)
    {
        string phoneNumber1;
        bool found = false;
        cout<<"Enter phone number of employee: ";
        cin>>phoneNumber1;
        for (size_t i = 0; i < Employees.size(); i++)
        {
            if (Employees[i].getPhoneNumber() == phoneNumber1)
            {
                Employees[i].EmployeeInfo();
                found = true;
            }
        }
        if (found == false)
        {
            cout<<"Employee not found"<<endl;
            Search(choice);
        }     
    }
    else if(choice == 5)
    {
        string post1;
        bool found = false;
        cout<<"Enter post of employee: ";
        cin>>post1;
        for (size_t i = 0; i < Employees.size(); i++)
        {
            if (Employees[i].getPosition() == post1)
            {
                Employees[i].EmployeeInfo();
                found = true;
            }
        }
        if (found == false)
        {
            cout<<"Employee not found"<<endl;
            Search(choice);
        }     
    }
}