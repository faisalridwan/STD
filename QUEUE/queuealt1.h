#ifndef QUEUEALT1_H_INCLUDED
#define QUEUEALT1_H_INCLUDED
#include<iostream>
#include<string>
#include <stdlib.h>

using namespace std;
struct angka{
    string nomor;
};
struct queuealt1{
    angka info[100];
    int head;
    int tail;
};
int menuDisplay();
void createQueue(queuealt1 &Q); //membuat Queue kosong
bool isEmpty(queuealt1 Q); //Mengecek apakah Queue kosong atau tidak
bool isFull(queuealt1 Q); // Mengecek apakah Queue penuh atau tidak
void enQueue(angka elm, queuealt1 &Q); // Menambahkan 1 elemen baru ke dalam queue
void deQueue(queuealt1 &Q, angka &r); // menghapus 1 eleman dalam queue


#endif // QUEUEALT1_H_INCLUDED
