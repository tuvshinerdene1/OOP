class Employee{
    public:
        int id;
        char name[20];
        char position[10];
        float worked_hours;

        void start();
        void setInfo();
        void getInfo();

        float calcSalary();
        float bossSalary();
        bool inc_hour(float time);
};