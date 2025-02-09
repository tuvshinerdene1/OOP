//10. Өгөгдсөн тоо анхны тоо эсэхийг шалга.
#include<iostream>
#include<stdlib.h>
#include<cmath>

using namespace std;

int main(){
    int num;
    cout<<"number = "; cin>>num;

    //edge case uuded tohiroh uildluudiig biciw.
    if(num==1){
        cout<<"neither prime nor not prime";
        exit(0);
    }
    if(num==2){
        cout<<"prime number";
        exit(0);
    }
    if(num <= 0){
        cout<<"Invalid input";
        exit(1);
    }

    //2 oos ehleed ugsun toonii yzguur hurtel shalgahad hangalttai.
    for(int i = 2 ; i < sqrt(num); i++){
        if(num%i==0){
            cout<<"Not a prime number.";
            exit(0);
        }
    }
    cout<<"Prime number.";
    return 0;
}