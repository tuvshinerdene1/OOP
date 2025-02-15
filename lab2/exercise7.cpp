// Хаяган хувьсагч ашиглан хоёр хувьсагчийн утгыг солих хэрэглэгчийн функц.
#include<iostream>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a = 10, b = 20;
    cout<<"Before swapping: "<<"a = "<<a<<", b = "<<b<<endl;

    int *p1 = &a, *p2 = &b;
    swap(p1, p2);

    cout<<"After swapping: "<<"a = "<<a<<", b = "<<b<<endl;
    
    return 0;
}
