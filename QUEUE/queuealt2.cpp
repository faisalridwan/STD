#include "queuealt2.h"

void createQueue(queuealt2 &Q){
    Q.head = -1;
	Q.tail = -1;
}
bool isEmpty(queuealt2 Q){
    return ( Q.head == -1) && (Q.tail == -1);
}
bool isFull(queuealt2 Q){
    return (Q.head == 0 ) && (Q.tail == 100-1);
}
void enQueue(huruf elm, queuealt2 &Q){
    int j,i;
    if ( isFull(Q)){
        cout << "Queue Penuh";
    }else if (isEmpty(Q)){
        Q.head++;
        Q.tail++;
        Q.info[Q.tail] = elm;
    }else if (Q.tail = 100-1){
        i = Q.head;
        j =0;
        while (i<= Q.tail){
            Q.info[j]= Q.info[i];
            i++;
            j++;
        }
        Q.head =0;
        Q.tail=j;
        Q.info[Q.tail]=elm;
    }else{
        Q.tail++;
        Q.info[Q.tail] =elm;
    }
}
void deQueue(queuealt2 &Q, huruf &r){
    if ( isEmpty(Q)){
        cout << "Queue Kosong";
    }else{
        r = Q.info[Q.head];
        if ( Q.head = Q.tail){
            Q.head = -1;
            Q.tail = -1;
        }else{
            Q.head++;
        }
    }
}
