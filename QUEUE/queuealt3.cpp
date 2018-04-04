#include "queuealt3.h"
void createQueue(queuealt3 &Q){
    Q.head = -1;
	Q.tail = -1;
}
bool isEmpty(queuealt3 Q){
    return ( Q.head == -1) && (Q.tail == -1);
}
bool isFull(queuealt3 Q){
    return (((Q.head == 0 ) && (Q.tail == 100-1))||(Q.head = Q.tail +1));
}
void enQueue(romawi elm, queuealt3 &Q){
    if(isFull(Q)){
        cout << "Queue Penuh";
    }else{
        if (isEmpty(Q)){
            Q.head++;
            Q.tail++;
        }
        if (Q.tail = 100-1){
            Q.tail=0;
        }else{
            Q.tail++;
        }
        Q.info[Q.tail]=elm;
    }
}
void deQueue(queuealt3 &Q, romawi &r){
    if (isEmpty(Q)){
        cout << "Queue Kosong";
    }else{
        r = Q.info[Q.head];
        if (Q.tail == Q.head){
            Q.head = -1;
            Q.tail = -1;
        }else if ((Q.head == 100-1)&&(Q.tail != Q.head)){
            Q.head=0;
        }else{
            Q.head++;
        }
    }
}
