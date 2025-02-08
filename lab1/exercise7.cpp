#include<iostream>
#include<stdlib.h>

using namespace std;
int main(){

    int N, evenNum = 0;
    cout<<"N = "; cin>>N;
    int *array = (int*)malloc(N*sizeof(int));

    for(int i = 0 ; i < N ; i++){
        cout<<"["<<i<<"] = ";
        cin>>array[i];
    }

    for(int i = 0 ; i < N; i++){
        if(array[i]%2==0){
            evenNum++;
        }
    }

    cout<<"There are total "<<evenNum<<" even numbers."<<endl;
    free(array);

    return 0;
}