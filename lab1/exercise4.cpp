#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int n;
    cout<<"N = "; cin>>n;
    
    if(n<0){
        cout<<"Invalid input!!!!"<<endl;
        return 0;
    }

    int sum = (n+1)*n/2;
    float avg = sum/n;
    
    cout<<"the sum is : "<<sum<<endl;
    cout<<"the avg is : "<<fixed<<setprecision(3)<<avg<<endl;

    return 0;
}