#include<iostream>
#include<string.h>
using namespace std;

class Employee{
    private:
        char *name;
        int basicpay;
        int allowance;
    public:
        Employee();
        ~Employee();
        Employee(char *n, int b, int a);
        friend ostream & operator <<(ostream &os, Employee &e);
};

Employee::Employee(){
    name = new char[20];
    strcpy(name,"");
    basicpay = 0;
    allowance = 0;
}
Employee::Employee(char *n, int b, int a){
    name = new char[strlen(n)+1];
    strcpy(name,n);
    basicpay = b;
    allowance = a;
}
Employee::~Employee(){
    cout<<"\n bye bye "<<name<<endl;
    delete name;
}

ostream & operator <<(ostream &os, Employee &e){
    int grosspay = e.basicpay + e.allowance;
    os << "\n";
    os.width(20);
    os<<e.name;
    os.width(8);
    os<<e.basicpay;
    os.width(12);
    os<<e.allowance;
    os.width(8);
    os << grosspay;
    return (os);
}
int main(){
    Employee e1("Bataa", 10, 10);
    cout<<e1;
    Employee e2("Dorj",20,13);
    cout<<e2;
    return 0;
}