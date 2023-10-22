#include "salary.h"
#include "company.h"

int main()
{
    company Ceh;
    bool stop = true;
    while(stop == true)
    {
        if (Ceh.Employees.size() == 0)
        {
            string choice1;
            int choice;
            bool correct = false;
            while(correct == false)
            {
                correct = true;
                cout<<"How many employees would you like to enter: ";
                cin>>choice1;

                try
                {
                    choice = stoi(choice1);
                }
                catch(const exception& e)
                {
                    cout<<"not correct data was entered"<<endl;
                    correct = false;
                }
            }
            
           
            for (int i = 0; i < choice; i++)
            {
                Ceh + choice;
            }
        }
        else
        {
            int choice;
            cout<<"1.Add new Empoyee"<<endl;
            cout<<"2.Remove Employee"<<endl;
            cout<<"3.Add Extra to salary"<<endl;
            cout<<"4.Search employee"<<endl;
            cout<<"5.Exit"<<endl;
            cin>>choice;
            if (choice <= 5 && choice >= 1)
            {
                if (choice == 1)
                {
                    Ceh + 1;
                }
                else if (choice == 2)
                {
                    Ceh - 1;
                }
                else if (choice == 3)
                {
                    string extra;
                    string man1;
                    cout<<"Who would you like to tip: "<<endl;
                    for (size_t i = 0; i < Ceh.Employees.size(); i++)
                    {
                        cout<<i+1<<"."<<Ceh.Employees[i].getFirstName()<<endl;
                    }
                    cin>>man1;
                    int man = FloatSet(man1,"int");
                    man--;
                    try
                    {
                        Ceh += man;
                    }
                    catch(const std::exception& e)
                    {
                        cerr << "Помилка: " << e.what() << endl;
                    }
                    
                }
                else if (choice == 4)
                {
                    string choice1;
                    int res;
                    cout<<"By what creteria would you like to search employee: "<<endl;
                    cout<<"1.Second name"<<endl;
                    cout<<"2.First name"<<endl;
                    cout<<"3.Last name"<<endl;
                    cout<<"4.Phone number"<<endl;
                    cout<<"5.Post"<<endl;
                    cin>>choice1;
                    res = FloatSet(choice1,"int");
                    Ceh.Search(res);
                }
                else if (choice == 5)
                {
                    break;
                }
            }
            else
            {
                cout<<"Enter correct option"<<endl<<endl;
            }
        }
    }

    return 0;
}