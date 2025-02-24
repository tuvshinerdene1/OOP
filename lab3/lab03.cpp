#include<bits/stdc++.h>
#include"Employee.h"
using namespace std;

void Employee::start(){
    id = 0;
    strcpy(name,"");
    strcpy(position,"worker");
    worked_hours = 0;
}

void Employee::setInfo(){
    cout<<"enter id: ";cin>>id;
    cout<<"enter name: ";cin>>name;
    cout<<"enter position: ";cin>>position;
    cout<<"enter worked hours: ";cin>>worked_hours;
}
void Employee::getInfo(){
    cout<<"ID: "<<id<<endl;
    cout<<"name: "<<name<<endl;
    cout<<"position: "<<position<<endl;
    cout<<"worked hours: "<<worked_hours<<endl;
}

float Employee::calcSalary(){
     float hourly_pay;
     cout<<"enter hourly_pay: ";cin>>hourly_pay;
     if(strcmp(position, "boss")==0){
        return hourly_pay*worked_hours + bossSalary();//herew boss bol bonus nemj bodno.
     }
     return hourly_pay*worked_hours;
}
float Employee::bossSalary(){//boss iin bonus iig bodoj olno.
    float boss_hourly_pay;
    cout<<"enter hourly bonus of boss: ";cin>>boss_hourly_pay;
    return worked_hours*boss_hourly_pay;
}
bool Employee::inc_hour(float time){
    if(time<0||time>24){
        return 0;
    }
    worked_hours += time;
    return 1;
}

int main(){
    cout<<"Human resource program by Tuvshin-Erdene 2025"<<endl;
    vector <Employee> v;

    while(1){
        int choice;
        cout<<"1. list of employees 2. choose employee 3.new employee -1 to exit: ";
        cin>>choice;

        if(choice==1){
            for(int i = 0 ; i < v.size(); i++){
                cout<<i<<"."<<endl;
                v[i].getInfo();
            }
            cout<<"------------"<<endl;
            cout<<"total number of employees: "<<v.size()<<endl;
        }

        else if(choice==2){
            cout<<"Enter the id: ";
            int cID, num;
            cin>>cID;
            for(int i = 0 ; i < v.size(); i++){
                 if(v[i].id==cID){
                    num = i;break;
                 }
            }
            v[num].getInfo();
            cout<<endl;
            int choice2;
            while(1){
                cout<<"1.set information 2.calculate salary 3.increase work hour -1 to exit: ";
                cin>>choice2;
                if(choice2 == 1){
                    v[num].setInfo();
                }
                else if(choice2==2){
                    float salary = v[num].calcSalary();
                    cout<<"salary = "<<salary<<endl;
                }
                else if(choice2==3){
                    cout<<"enter hour: ";int time;cin>>time;
                    v[num].inc_hour(time);
                }
                else{
                    cout<<"exiting employee with id : "<<cID<<endl;
                    break;
                }
            }
            
        }
        else if(choice == 3){
            Employee e1;
            e1.setInfo();
            v.push_back(e1);
            cout<<"Added successfully"<<endl;
        }
        else{
            break;
        }
    }
    return 0;
}