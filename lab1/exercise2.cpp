#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main(){
    float radius;
    cout<<"Enter the radius: ";cin>>radius;
    
    float area = M_PI*radius*radius;

    cout<<"The area is :"<<fixed<<setprecision(3)<<area<<endl;

    return 0;
}