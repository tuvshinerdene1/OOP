#include "Employee.h"
using namespace std;

int main()
{
    cout << "Human resource program by Tuvshin-Erdene 2025" << endl;
    vector<Employee> v;

    while (1)
    {
        int choice;
        cout << "1. list of employees 2. choose employee 3.new employee 4.sort by salary 5.sort by name -1 to exit: ";
        cin >> choice;

        if (choice == 1)
        {
            for (int i = 0; i < v.size(); i++)
            {
                cout << i << "." << endl;
                v[i].getInfo();
            }
            cout << "------------" << endl;
            cout << "total number of employees: " << v.size() << endl;
        }

        else if (choice == 2)
        {
            cout << "Enter the id: ";
            int cID, num;
            cin >> cID;
            for (int i = 0; i < v.size(); i++)
            {
                if (v[i].getID() == cID)
                {
                    num = i;
                    break;
                }
            }
            v[num].getInfo();
            cout << endl;
            int choice2;
            while (1)
            {
                cout << "1.set information 2.calculate salary 3.increase work hour -1 to exit: ";
                cin >> choice2;
                if (choice2 == 1)
                {
                    v[num].setInfo();
                }
                else if (choice2 == 2)
                {
                    float salary = v[num].calcSalary();
                    cout << "salary = " << salary << endl;
                }
                else if (choice2 == 3)
                {
                    cout << "enter hour: ";
                    int time;
                    cin >> time;
                    v[num].inc_hour(time);
                }

                else
                {
                    cout << "exiting employee with id : " << cID << endl;
                    break;
                }
            }
        }
        else if (choice == 3)
        {
            Employee e1;
            e1.setInfo();
            bool isRep;
            for (int i = 0; i < v.size(); i++)
            {
                if (v[i].getID() == e1.getID())
                {
                    cout << "invalid id!!" << endl;
                    isRep = true;
                    break;
                }
            }
            if (!isRep)
            {
                v.push_back(e1);
                cout << "Added successfully" << endl;
            }
        }
        else if (choice == 4)
        {

            for (int i = 0; i < v.size(); i++)
            {
                int j = i;
                while (j > 0 && v[j].calcSalary() > v[j - 1].calcSalary())
                {
                    Employee temp;
                    temp.copy(v[j]);
                    v[j] = v[j - 1];
                    v[j - 1].copy(temp);
                    j--;
                }
            }
            cout << "Sorted!!!" << endl;
        }
        else if (choice == 5)
        {
            for (int i = 0; i < v.size(); i++)
            {
                int j = i;
                while (j > 0 && strcmp(v[j].getName(), v[j - 1].getName()) < 0)
                {
                    Employee temp;
                    temp.copy(v[j]);
                    v[j] = v[j - 1];
                    v[j - 1].copy(temp);
                    j--;
                }
            }
            cout << "Sorted!!!" << endl;
        }
        else
        {
            break;
        }
    }
    typedef Employee *Pointer;
    Pointer *employees = new Pointer[v.size()];
    for (int i = 0; i < v.size(); ++i)
    {
        employees[i] = &v[i];
    }
    for (int i = 0; i < v.size(); i++)
    {
        int j = i;
        while (j > 0 && strcmp(employees[j]->getName(), employees[j - 1]->getName()) < 0)
        {
            Employee *temp;
            temp = employees[j];
            employees[j] = employees[j - 1];
            employees[j - 1] = temp;
            j--;
        }
    }
    cout << "Sorted!!!" << endl;
    return 0;
}