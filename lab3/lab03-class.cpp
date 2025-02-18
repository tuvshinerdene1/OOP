#include <iostream>
#include <string.h>
#include "lab03-class.h"
using namespace std;

int board_wipe::wipe(){
    cout<<"wiped";return 0;
}

int board_wipe::clean(){
    cout<<"cleaned";return 1;
}

int main(){
    //huwisagc uusgeh || object baiguulah
    board_wipe big_wipe;
    //data incapsulation - ugugdliig bagtslah
    big_wipe.height = 15;
    big_wipe.width = 10;
    strcpy(big_wipe.color, "green");

    big_wipe.wipe();

    return 0;

    

}