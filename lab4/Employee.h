#include <iostream>
#include <vector>

class Employee
{

    int id;
    char name[20];
    char position[10];
    float worked_hours;
    float hourly_salary;
    float bossSalary()
    {
        // boss iin bonus iig bodoj olno.
        return worked_hours * hourly_salary * 1.5;
    }

public:
    Employee(int id = 0, char name[] = "", char position[] = "worker", float worked_hours = 0, float hourly_salary = 0)
    {
        this->id = id;
        strcpy(this->name, name);
        strcpy(this->position, position);
        this->worked_hours = worked_hours;
        this->hourly_salary = hourly_salary;
    }
    ~Employee()
    {
        std::cout << "\n the object with " << id << " id  is destroyed.\n";
    }

    void setInfo()
    {

        cout << "enter id: ";
        cin >> id;
        cout << "enter name: ";
        cin >> name;
        cout << "enter position: ";
        cin >> position;
        cout << "enter worked hours: ";
        cin >> worked_hours;
        cout << "enter hourly salary: ";
        cin >> hourly_salary;
    }
    void getInfo()
    {
        cout << "ID: " << id << endl;
        cout << "name: " << name << endl;
        cout << "position: " << position << endl;
        cout << "worked hours: " << worked_hours << endl;
        cout << "hourly salary: "<<hourly_salary<<endl;
    }

    float calcSalary()
    {
        if (strcmp(position, "boss") == 0)
        {
            return bossSalary(); // herew boss bol bonus nemj bodno.
        }
        return hourly_salary * worked_hours;
    }

    bool inc_hour(float time)
    {
        if (time < 0 || time > 24)
        {
            return 0;
        }
        worked_hours += time;
        return 1;
    }

    int getID()
    {
        return this->id;
    }
    char *getName()
    {
        return this->name;
    }
    char *getPosition()
    {
        return this->position;
    }
    float getWorked_hours()
    {
        return this->worked_hours;
    }
    float getHourly_salary()
    {
        return this->hourly_salary;
    }

    void setID(int id)
    {
        this->id = id;
    }
    void setName(char name[])
    {
        strcpy(this->name, name);
    }
    void setPosition(char position[])
    {
        strcpy(this->position, position);
    }
    void setWorked_hours(float worked_hours)
    {
        this->worked_hours = worked_hours;
    }
    void setHourly_salary(float hourly_salary)
    {
        this->hourly_salary = hourly_salary;
    }
};