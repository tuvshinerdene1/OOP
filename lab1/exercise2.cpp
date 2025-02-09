//2. Тойргийн радиусыг гараас авч талбайг бодож хэвэл.
#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    float radius;
    //radius huwisagcid oroltiin ursgalaar utga onoow
    cout<<"Enter the radius: ";cin>>radius;
    
    //toirgiin talbaig olohdoo PI*r^2 tomyog ashiglaw
    float area = 3.14*radius*radius;

    //talbain hemjeeg .001 nariivclaltai gargana.
    cout<<"The area is :"<<fixed<<setprecision(3)<<area<<endl;

    return 0;
}