//#include <iostream>
#include "tp2.h"

//using namespace std;

int main() {

    List L;
    address P = NULL;
    creatList(L);
   // int i=0;
    while(true) {
        insertFirst(L, alokasi(5));
        deleteFirst(L, P);
        dealokasi(P);
        //printInfo(L);

       // cout << i;
    }
    return 0;
}
