#ifndef QUEUEALT2_H_INCLUDED
#define QUEUEALT2_H_INCLUDED
#include<iostream>
#include<string>
#include <stdlib.h>

using namespace std;
struct huruf{
    string abjad;
};
struct queuealt2{
    huruf info[100];
    int head;
    int tail;
};
int menuDisplay();
void createQueue(queuealt2 &Q); //membuat Queue kosong
bool isEmpty(queuealt2 Q); //Mengecek apakah Queue kosong atau tidak
bool isFull(queuealt2 Q); // Mengecek apakah Queue penuh atau tidak
void enQueue(huruf elm, queuealt2 &Q); // Menambahkan 1 elemen baru ke dalam queue
void deQueue(queuealt2 &Q, huruf &r); // menghapus 1 eleman dalam queue


#endif // QUEUEALT2_H_INCLUDED
