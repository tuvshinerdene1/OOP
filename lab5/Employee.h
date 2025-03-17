#include <iostream>
#include <vector>
#include <cstring>


class Employee
{

    int id;
    char *name;
    char * position;
    float worked_hours;
    float hourly_salary;
    float bossSalary()
    {
        // boss iin bonus iig bodoj olno.
        return worked_hours * hourly_salary * 1.5;
    }

public:
    Employee(int id = 0, char *name="", char *position="", float worked_hours = 0, float hourly_salary = 0)
    {
        this->id = id;
        this->name = new char[strlen(name)+1];
        strcpy(this->name,name);

        this->position = new char[strlen(position)+1];
        strcpy(this->position, position);

        this->worked_hours = worked_hours;
        this->hourly_salary = hourly_salary;
    }
    ~Employee()
    {
        std::cout << "\n the object with " << id << " id  is destroyed.\n";
        // delete[] this->name;
        // delete[] this->position;
    }
    void copy(Employee &e){
        if(name!=NULL){
            delete [] name;
        }
        name = new char[strlen(e.name)+1];
        strcpy(name,e.name);

        position = new char[strlen(e.position)+1];
        strcpy(position, e.position);

        id = e.id;
        worked_hours = e.worked_hours;
        hourly_salary = e.hourly_salary;
    }

    void setInfo()
    {

        std::cout << "enter id: ";
        std::cin >> id;
        std::cout << "enter name: ";
        std::cin >> name;
        std::cout << "enter position: ";
        std::cin >> position;
        std::cout << "enter worked hours: ";
        std::cin >> worked_hours;
        std::cout << "enter hourly salary: ";
        std::cin >> hourly_salary;
    }
    void getInfo()
    {
        std::cout << "ID: " << id << std::endl;
        std::cout << "name: " << name << std::endl;
        std::cout << "position: " << position << std::endl;
        std::cout << "worked hours: " << worked_hours << std::endl;
        std::cout << "hourly salary: "<<hourly_salary<<std::endl;
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