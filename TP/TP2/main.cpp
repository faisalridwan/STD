#include <iostream>
#include "tp2.h"

using namespace std;

int main() {

    List L;
    address P = NULL;

    int data;
    creatList (L);
    for(int i = 0; i< 5;i++) {
       cin >> info(P);
    }

    while(true) {
        insertFirst(L, alokasi(5));
        deleteFirst(L, P);
        //dealokasi(P);
    }
    printInfo(L);
    return 0;
}
