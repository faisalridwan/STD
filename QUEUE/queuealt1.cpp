#include "queuealt1.h"

void createQueue(queuealt1 &Q){
	Q.head = -1;
	Q.tail = -1;
}

bool isEmpty(queuealt1 Q){
	return ( Q.head == -1) && (Q.tail == -1);
}

bool isFull(queuealt1 Q){
	return (Q.head == 0 ) && (Q.tail == 100-1);
}

void enQueue(angka elm, queuealt1 &Q){
    if (isFull(Q)){
            cout << "Queue Penuh";
    }else{
        if (isEmpty(Q))
            Q.head++;
        Q.tail++;
        Q.info[Q.tail]= elm;
    }
}

void deQueue(queuealt1 &Q, angka &r){
    int i;
    if (isEmpty(Q)){
        cout << "Queue Kosong";
    }else {
        r = Q.info[Q.head];
        i = 0;
        while (i < Q.tail ){
            Q.info[i] = Q.info[i+1];
            i++;
        }
        Q.tail--;
        if (Q.tail = -1){
            Q.head = -1;
        }
    }
}
