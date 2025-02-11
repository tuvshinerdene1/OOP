//9. Хүснэгтийг өсөх/буурахаар эрэмбэл.
#include<iostream>

using namespace std;

//usuh eswel buurahaar haritsuulalt hiih function uud.
int compare_asc(float num1, float num2){
    if( num1 >= num2){
        return 1;
    }
    return 0;
}

int compare_desc(float num1, float num2){
    if(num1 <= num2){
        return 1;
    }
    return 0;
}

//bubble sort ashiglan, parameter eer husnegt , husnegtiin hemjee, function pointer awan erembeldeg 
//function.
void sort_array(float *arr, int size, int (*compare)(const float, const float)){
    bool swapped;
    for(int i = 0 ; i < size - 1 ; i++){
        swapped = false;
        for(int j = 0 ; j < size - i -1; j++){
            if(compare(arr[j],arr[j+1])){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

                swapped = true;
            }
        }
        //herew ymar negen bairiig solih uildel hiigdeegu bol erembelegsen bn gej uzeed dawtaltaas garna.
        if(!swapped){
            break;
        }
    }
}

//husnegtiig hewlen gargadag function.
void printArr(float arr[],int size,string name){
    for(int i = 0; i < size; i++){
        cout<<name<<"["<<i<<"] = "<<arr[i]<<" ";
    }
}

int main(){

    //jishee 1
    cout<<"Ascending example: "<<endl;
    float array1[] = {12,21,34,1,23,5,16};
    sort_array(array1, 7, compare_asc);
    printArr(array1, 7, "array1");

    cout<<endl;

    //jishee 2
    cout<<"Descending example: "<<endl;
    sort_array(array1, 7, compare_desc);
    printArr(array1, 7, "array1");



    return 0;
}