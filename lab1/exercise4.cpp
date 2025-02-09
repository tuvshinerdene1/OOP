//4. Өгөгдсөн N хүртэлх тооны нийлбэр, арифметик дундажыг ол.
#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int n;
    cout<<"N = "; cin>>n;
    
    //0-ees baga too oruulj bolohgui
    if(n<0){
        cout<<"Invalid input!!!!"<<endl;
        exit(1);
    }

    //ter hurtelh toonuudiin niilberiig olohdoo engiin arithmetic progress iin tomyo ashiglaw.
    int sum = (n+1)*n/2;
    //dundjiig olohdoo niilberiig nemegdehuunuudiin toond huwaaw.
    float avg = sum/n;
    
    cout<<"the sum is : "<<sum<<endl;
    cout<<"the avg is : "<<fixed<<setprecision(3)<<avg<<endl;

    return 0;
}