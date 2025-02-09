//7. Өгөгдсөн хүснэгтийн тэгш элементүүдийн тоог ол.
#include<iostream>
#include<stdlib.h>

using namespace std;
int main(){

    int N, evenNum = 0;
    cout<<"N = "; cin>>N;
    //dynamicaar husnegt uusgew.
    int *array = new int [N];

    //for dawtalt ashiglan husnegtiin elementuuded garaas utga onoow.
    for(int i = 0 ; i < N ; i++){
        cout<<"["<<i<<"] = ";
        cin>>array[i];
    }

    //nuhtsul shalgan herew 2t huwaagdaj baiwal tegsh toonii shirheg deer negiig nemne.
    for(int i = 0 ; i < N; i++){
        if(array[i]%2==0){
            evenNum++;
        }
    }

    cout<<"There are total "<<evenNum<<" even numbers."<<endl;

    //dynamicaar uusgesen husnegtiin sanah oig chuluuluw.
    delete[] array;

    //delete ashiglan array iin zaaj baisan sanah oig chuluulsun 
    //ch gesen array ter hayg ruu zaasan heweeree baigaa tul NULL utgatai bolgow.
    //dangling pointer oos sergiilehiin tuld.
    array = NULL;

    return 0;
}