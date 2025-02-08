#include<iostream>

using namespace std;
int main(){
    int N;
    float number;

    cout<<"N = "; cin>>N;
    cout<<"Enter number : "; cin>>number;
    float max, min; max=min=number;

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

    cout<<"max is "<<max<<endl;
    cout<<"min is "<<min<<endl;

    return 0;
}