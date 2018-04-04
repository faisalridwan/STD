#ifndef QUEUEALT3_H_INCLUDED
#define QUEUEALT3_H_INCLUDED
#include<iostream>
#include<string>
#include <stdlib.h>

using namespace std;

struct romawi{
    string aneh;
};
struct queuealt3{
    romawi info[100];
    int head;
    int tail;
};
int menuDisplay();
void createQueue(queuealt3 &Q); //membuat Queue kosong
bool isEmpty(queuealt3 Q); //Mengecek apakah Queue kosong atau tidak
bool isFull(queuealt3 Q); // Mengecek apakah Queue penuh atau tidak
void enQueue(romawi elm, queuealt3 &Q); // Menambahkan 1 elemen baru ke dalam queue
void deQueue(queuealt3 &Q, romawi &r); // menghapus 1 eleman dalam queue



#endif // QUEUEALT3_H_INCLUDED
