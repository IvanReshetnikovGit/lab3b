#include "FloatSet.h"
float FloatSet(string number,string type)
{
    if (type == "int")
    {
        int number1;
        bool exist = false;
        for (size_t i = 0; i < number.length(); i++)
        {
            if (isalpha(number[i]))
            {
                exist = true;
                break;
            }
        }
        if (exist == true) 
        {
            string numb;
            cout<<"Enter correct amount: ";
            cin>>numb;
            number1 = FloatSet(numb,"int");
            return number1;
        }
        else
        {
            stringstream ss;
            ss<<number;
            ss>>number1;
            return number1;
        }
    }
    else if(type == "float")
    {
        float number1;
        bool exist = false;
        for (size_t i = 0; i < number.length(); i++)
        {
            if (isalpha(number[i]))
            {
                exist = true;
                break;
            }
        }
        if (exist == true) 
        {
            string numb;
            cout<<"Enter correct amount: ";
            cin.ignore();
            getline(cin,numb);
            number1 = FloatSet(numb,"float");
            return number1;
        }
        else
        {
            stringstream ss;
            ss<<number;
            ss>>number1;
            return number1;
        }
    }
    else
    {
        cout<<endl<<endl<<"function FloatSet was used not correct, reffer to documentation"<<endl<<endl;
        return 0;
    }
}
string FloatSet(string number)
{
    string number1;
    bool alpha = false;
    for (size_t i = 0; i < number.size(); i++)
    {
        if (isalpha(number[i]))
        {
            alpha = true;
        }
        
    }
    if(alpha == true)
    {
        cout<<"Enter correct phone number: ";
        cin>>number;
        number1 = FloatSet(number);
    }
    else 
    {
        number1 = number;
        return number1;
    }
    return number1;
}