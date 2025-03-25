#include<iostream>
#include<exception>
using namespace std;

int main(){
    try{
        int* array = new int[1000];
        // use only for code with potential issue 
    }
    catch(exception& e){
        cout<<"Standard exception: "<<e.what()<<endl;
    }

    int a,b;
    cin>>a>>b;

    try{
        if(b==0){
            throw 20 ;//error code or id
        }
        cout<<a/b<<endl;
    }
    catch(int e){
        cout<<"Error: "<<e<<endl; //neg shirheg try iin dood tald heden c catch hiij bolno.
    }

    // catch(...) ymar turliin exception gedgiig medehgu bol ashiglana.
    return 0;
}