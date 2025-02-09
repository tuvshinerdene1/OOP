//6. Өгөгдсөн N ширхэг тооны хамгийн их/хамгийн багийг ол.
#include<iostream>

using namespace std;
int main(){
    int N;
    float number;

    cout<<"N = "; cin>>N;
    cout<<"Enter number : "; cin>>number;
    //ehnii ugsun toog shuud min, max utga gej uzew. Ene ni togtmol too onoohoos iluu onowctoi.
    float max, min; max=min=number;

    //toog oruulah tutamd max bolon min utguudtai jishin herew nuhtsuliig hangaj baival min,max iin utgiig uurcilnu.
    for(int i = 1 ; i < N ; i++){
        cout<<"Enter number : "; cin>>number;
        if(number>max){
            max = number;
            continue;
        }
        if(number<min){
            min = number;
        }
    }
    //min, max utguudiig hewlen gargaw.
    cout<<"max is "<<max<<endl;
    cout<<"min is "<<min<<endl;

    return 0;
}