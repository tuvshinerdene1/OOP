//8. Өгөгдсөн хүснэгтийн арифметик дунджийг олдог хэрэглэгчийн функц бич.
#include<iostream>
#include<string>

using namespace std;

//husnegt bolon tuhain husnegtiin hemjee ugugduhud dundjiig ni butsaadag function.
float getAvg(float arr[],int size){
    float sum = 0;
    for(int i = 0 ; i < size; i++){
        sum += arr[i];
    }

    return (sum/size);
}

//husnegtiin hewlen gargadag function.
void printArr(float arr[],int size,string name){
    for(int i = 0; i < size; i++){
        cout<<name<<"["<<i<<"] = "<<arr[i]<<" ";
    }
}

int main(){

    //jishee 1
    float array1[] = {1,2,3,4,5};
    printArr(array1, 5,"array1");
    cout<<endl<<"AVG: "<<getAvg(array1,5);

    cout<<endl;

    //jishee 2
    float array2[] = {2.1, 213.15, 1, 1234.99};
    printArr(array2,4,"array2");
    cout<<endl<<"AVG: "<<getAvg(array2,4);

    cout<<endl;

    return 0;

}