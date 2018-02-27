#ifndef DOUBLELINKEDLIST_H_INCLUDED
#define DOUBLELINKEDLIST_H_INCLUDED

#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

typedef int infotype;
typedef struct elmList *address;

struct elmList{
    infotype info;
    address next;
    address prev;
};
struct doubleList{
    address first;
    address last;
};
void MenuInsert(doubleList &L, address &P);
void MenuDelete(doubleList &L, address &P);
void MenuUtama(doubleList &L, address &P);
void creatList(doubleList &L);
address alokasi(infotype info);
address dealokasi(address &P);
void printInfo(doubleList L);
void insertFirstDouble(doubleList &L, address P);
void insertLastDouble(doubleList &L, address P);
void insertAfterDouble(doubleList &L, address P, infotype prec);
void insertBeforeDouble(doubleList &L, address P, infotype prec);
void deleteFirstDouble(doubleList &L, address P);
void deleteLastDouble(doubleList &L, address P);
void deleteAfterDouble(doubleList &L,address P, infotype prec );
void deleteBeforeDouble( doubleList &L,address P, infotype prec );


#endif // DOUBLELINKEDLIST_H_INCLUDED
