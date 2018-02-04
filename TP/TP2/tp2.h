#ifndef TP2_H_INCLUDED
#define TP2_H_INCLUDED

#include <iostream>
#include <stdlib.h>
using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define first(L) (L).first

typedef int infotype;
typedef struct elmlist *address;

struct elmlist{
    infotype info;
    address next;
};

struct List{
    address first;
};
void creatList(List L);
address alokasi( infotype info);
address dealokasi(address &P);
void printInfo(List L);
void insertFirst( List &L, address P);
void deleteFirst(List &L, address P);

void reverseList(List &L);
#endif // TP2_H_INCLUDED
