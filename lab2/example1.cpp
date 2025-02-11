#include<iostream>

using namespace std;

void increment(int x){
    x++; // allocates new memory for the argument.
}
//1. allocates new memory
//2. extravagant for RAM

void decrease(int *x){
    *x--;
}
/*
1. size of pointer is constant 4 byte. But this size is dependent on the bit of OS. 
for example 32 bit systems pointer will be 4 byte.
OS with 32 bit can have 4gb ram memory at maximum.
*/


//when function ends, x will be freed
int main(){
    int i = 10;

    int* a ; //allocates memory here
    a = &i;

    //data type of pointer is unassigned int.
    increment(i);//increment(10);
    cout<<i;//10

    return 0;
}