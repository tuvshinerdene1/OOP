//3. Тэгш өнцөгтийн талуудыг өгөхөд талбайг буцаадаг хэрэглэгчийн функц бич.
#include<iostream>
#include<iomanip>

using namespace std;

float findAreaofRect(float height, float width){
    return height*width;
}
int main(){

    //tegsh untsugtiin undur, urgund garaas utga onoono.
    float height, width;
    cout<<"height = "; cin>>height;
    cout<<"width = "; cin>>width;

    //tegsh untsugtiin talbaig urt*urgun gej olj baina.
    float area = findAreaofRect(height, width);

    //talbain hemjeeg gargahdaa 0.001 nariiwclaltai gargana.
    cout<<"area is "<<fixed<<setprecision(3)<<area<<endl;

    return 0;
}