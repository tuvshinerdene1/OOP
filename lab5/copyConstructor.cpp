//copy constructor
#include<iostream>
//  #include<conio.h>
#include<iomanip>
#include<string.h>
using namespace std;

class Employee{
    private:
        char name[20];
        int basicpay;
        int allowance;
    public:
        Employee(char n[] = "George", int b = 9000, int a = 2000){
            strcpy(name,n);
            basicpay = b;
            allowance = a;
        }
        void showdata();
        void changebasic();
};

void Employee::changebasic(){
    basicpay = 10000;
}
void Employee::showdata(){
    cout<<endl<<setw(20)<<name;
    cout<<setw(8)<<basicpay;
    cout<<setw(12)<<allowance<<endl;
}

void heading(){
    cout<<endl;
    cout<<setw(20)<<"employee name: ";
    cout<<setw(8)<<"basic";
    cout<<setw(12)<<"allowance";
}



int main(){
    Employee emp1;
    heading();

    emp1.showdata();
    cout<<endl;
    cout<<&emp1;

    // Employee emp2 (emp1);
    Employee emp2 = emp1;
    emp2.showdata();
    cout<<endl;
    cout<<&emp2;

    emp1.changebasic();

    emp1.showdata();
    emp2.showdata();

    return 0;
}