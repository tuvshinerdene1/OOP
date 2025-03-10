#include<stdio.h>
#include<iostream>
using namespace std;

class Student{
    int i;
    float f;

    public:
        Student(): i(2), f(5.5){}
        float square(float f){
            this->f = f*f;
            return this->f;
        }
        int square(int i){
            this->i=i*i;
            return this->i;
        }
        void show(){
            cout<<"f= "<<f<<"\ni= "<<i;
        }
};

int main(){
    Student aa;
    aa.show();
    float ff = aa.square((float)3.5);
    int ii = aa.square(3);
    cout <<endl<<endl<<"ff= "<<ff<<"\nii= "<<ii<<endl;

    return 0;
}