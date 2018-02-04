#include "tp2.h"

void creatList(List L) {
    L.first = NULL;
}

address alokasi(infotype info){
    address P =  new elmlist;
    info(P) = info;
    next(P) = NULL ;
    return P;
}
address dealokasi(address &P) {
    delete P;
}

void printInfo(List L) {
    address curr =first(L);
    while(curr){
        cout <<info(curr)<<"( " << curr <<" ),";
        curr= next(curr);
    }
}
void insertFirst (List &L, address P) {
    if(first(L)) 
    }else{
        next(P) = first(L);
    first(L) = P;
}
void deleteFirst(List &L, address P){
    if (first(L) != NULL) {
        P = first(L);
        first(L) = next(P);
        next(P) = NULL;
    }
}
 void reverseList(List &L) {
    address curr =first(L);
    int l=0;

    while(next(curr)) {
        l++;
        curr = next(curr);
    }

    for(int i=0; i<l;i++) {
        address f = first(L);
        address endd = first(L);

        for(int j=0;j<l-l;j++) {
            endd = next(endd);
        }

        first(L) = next(first(L));
        next(f) = next(endd);
        next(endd) = f;
    }
 }
