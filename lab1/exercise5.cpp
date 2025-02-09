//5. Гараас өгөгдсөн N ширхэг тооны нийлбэр, үржвэрийг ол.
#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    /*niilberiin utga deer nemegdehuun tus buriig 1, 1eer nemeed ywah uchir 0 iig ,
    urjweriin ehnii utga deer 1 iig olgow.
    */
    float sum = 0, product = 1;
    int N;
    float num;
    cout<<"Enter N: "; cin>>N;
    //for loop ashiglan garaas utga oruulah burd niilber bolon urjweriin utgiig uurcluw.
    for(int i = 0 ; i < N ; i++){
        cout<<"enter number: ";
        cin>>num;
        sum+=num;
        product*=num;
    }
    //tus buriig 0.001 nariiwclaltai hewlew.
    cout<<"sum : "<<fixed<<setprecision(3)<<sum<<endl;
    cout<<"product: "<<fixed<<setprecision(3)<<product<<endl;

    return 0;
}