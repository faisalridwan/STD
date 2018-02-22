#ifndef SINGLELINKEDLIST_H_INCLUDED
#define SINGLELINKEDLIST_H_INCLUDED

#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

typedef int infotype;
typedef struct elmList *address;

struct elmList{
    infotype info;
    address next;
};
struct singleList{
    address first;
};
void MenuInsert(singleList &L, address &P);
void MenuDelete(singleList &L, address &P);
void MenuUtama(singleList &L, address &P);
void creatList(singleList &L);
address alokasi(infotype info);
address dealokasi(address &P);
void printInfo(singleList L);
void insertFirstSingle(singleList &L, address P);
void insertLastSingle(singleList &L, address P);
void insertAfterSingle(singleList &L, address P, infotype prec);
void deleteFirstSingle(singleList &L, address &P);
void deleteLastSingle(singleList &L, address &P);
void deleteAfterSingle(singleList &L,address &P, infotype prec );



#endif // SINGLELINKEDLIST_H_INCLUDED
