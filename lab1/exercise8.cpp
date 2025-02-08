#include<iostream>
#include<string>

using namespace std;

float getAvg(float arr[],int size){
    float sum = 0;
    for(int i = 0 ; i < size; i++){
        sum += arr[i];
    }

    return (sum/size);
}

void printArr(float arr[],int size,string name){
    for(int i = 0; i < size; i++){
        cout<<name<<"["<<i<<"] = "<<arr[i]<<" ";
    }
}

int main(){

    float array1[] = {1,2,3,4,5};
    printArr(array1, 5,"array1");
    cout<<endl<<"AVG: "<<getAvg(array1,5);

    cout<<endl;

    float array2[] = {2.1, 213.15, 1, 1234.99};
    printArr(array2,4,"array2");
    cout<<endl<<"AVG: "<<getAvg(array2,4);

    cout<<endl;

    return 0;

}