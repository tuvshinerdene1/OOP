class Employee
{

    int id;
    char name[20];
    char position[10];
    float worked_hours;
    float bossSalary();

public:
    Employee(int id = 0, char name[] = "", char position[] = "worker", float worked_hours = 0)
    {
        this->id = id;
        strcpy(this->name, name);
        strcpy(this->position, position);
        this->worked_hours = worked_hours;
    }
    ~Employee(){
        std::cout<<"\n the object with "<<id<<" id  is destroyed.\n";
    }

    void start();
    void setInfo();
    void getInfo();
    
    int getID(){
        return this->id;
    }
    char* getName(){
        return this->name;
    }
    char* getPosition(){
        return this->position;
    }
    float getWorked_hours(){
        return this->worked_hours;
    }

    void setID(int id){
        this->id = id;
    }
    void setName(char name[]){
        strcpy(this->name,name);
    }
    void setPosition(char position[]){
        strcpy(this->position,position);
    }
    void setWorked_hours(float worked_hours){
        this->worked_hours = worked_hours;
    }

    float calcSalary();
    
    bool inc_hour(float time);
};