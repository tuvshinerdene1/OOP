#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    float sum = 0, product = 1;
    int N;
    float num;
    cout<<"Enter N: "; cin>>N;
    for(int i = 0 ; i < N ; i++){
        cout<<"enter number: ";
        cin>>num;
        sum+=num;
        product*=num;
    }

    cout<<"sum : "<<fixed<<setprecision(3)<<sum<<endl;
    cout<<"product: "<<fixed<<setprecision(3)<<product<<endl;

    return 0;
}