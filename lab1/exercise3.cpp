#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    float height, width;
    cout<<"height = "; cin>>height;
    cout<<"width = "; cin>>width;

    float area = height*width;

    cout<<"area is "<<fixed<<setprecision(3)<<area<<endl;

    return 0;
}