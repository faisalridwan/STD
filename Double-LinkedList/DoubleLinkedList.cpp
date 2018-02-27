#include "DoubleLinkedList.h"
void MenuInsert(doubleList &L, address &P){
    system("cls");
    cout << " Masukkan angka yang akan di insert : ";
    int angka;
    cin >> angka;
    cout << " |                                      |" << endl;
    cout << " |  Mau Insert apakah anda :            |" << endl;
    cout << " |  1. Insert First                     |" << endl;
    cout << " |  2. Insert Last                      |" << endl;
    cout << " |  3. Insert After                     |" << endl;
    cout << " |  4. Insert Before                    |" << endl;
    cout << " |  0. Back                             |" << endl;
    cout << "    Masukkan : ";
    int pil;
    cin >> pil;
    if (pil == 1 ){
        insertFirstDouble(L,alokasi(angka));
        MenuUtama(L,P);
    }else if (pil == 2){
              insertLastDouble(L,alokasi(angka));
              MenuUtama(L,P);
    }else if (pil == 3){
              cout << " Masukkan prec(angka setelah) : ";
              int prec;
              cin >> prec ;
           insertAfterDouble(L,alokasi(angka),prec);
              MenuUtama(L,P);
    }else if (pil == 4){
              cout << " Masukkan prec(angka sebelum) : ";
              int prec;
              cin >> prec ;
              insertBeforeDouble(L,alokasi(angka),prec);
              MenuUtama(L,P);
    }else if (pil == 0){
            MenuUtama(L,P);
    }else {
        cout << "Hanya 3 Pilihan Bosku";
    }
}

void MenuDelete(doubleList &L, address &P){
    system("cls");
    cout << " |                                      |" << endl;
    cout << " |  Mau Delete apakah anda :            |" << endl;
    cout << " |  1. Delete First                     |" << endl;
    cout << " |  2. Delete Last                      |" << endl;
    cout << " |  3. Delete After                     |" << endl;
    cout << " |  4. Delete Before                    |" << endl;
    cout << " |  0. Back                             |" << endl;
    cout << " Masukkan : ";
    int pil;
    cin >> pil;
    if (pil == 1 ){
        deleteFirstDouble(L,P);
        MenuUtama(L,P);
    }else if (pil == 2){
              deleteLastDouble(L,P);
              MenuUtama(L,P);
    }else if (pil == 3){
              cout << " Masukkan prec(angka setelah) : ";
              int prec;
              cin >> prec;
              deleteAfterDouble(L,P,prec);
              MenuUtama(L,P);
    }else if (pil == 4){
              cout << " Masukkan prec(angka sebelum) : ";
              int prec;
              cin >> prec;
              deleteBeforeDouble(L,P,prec);
              MenuUtama(L,P);
    }else if (pil == 0){
              MenuUtama(L,P);
    }else {
        cout << "Hanya 3 Pilihan Bosku";
    }

}
void MenuUtama(doubleList &L, address &P){

    cout << " \n | SELAMAT DATANG DI Double LINKED LIST |" << endl;
    cout << " |                                      |" << endl;
    cout << " |  1. Lihat Data                       |" << endl;
    cout << " |  2. Insert                           |" << endl;
    cout << " |  3. Delete                           |" << endl;
    cout << " |  0. Exit                             |" << endl;
    cout << " |                                      |" << endl;
    cout << "  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ " << endl;
    cout << "     Masukkan Pilihan Anda : ";
    int pil;
    cin >> pil ;
    switch (pil) {
        case 1:
            printInfo(L);
            MenuUtama(L,P);
            break;
        case 2:
            MenuInsert(L,P);
            break;
        case 3:
            MenuDelete(L,P);
            break;
        case 0 :
            exit(0);
            break;
        default:
            cout << " Menu Tidak Tersedia ";
            MenuUtama(L,P);
    }
}

void creatList(doubleList &L) {
    L.first = NULL;
    L.last = NULL;
}

address alokasi(infotype info){
    address P =  new elmList;
    P->info = info;
    P->next = NULL ;
    P->prev = NULL;
    return P;
}
address dealokasi(address &P) {
    delete P;
}

void printInfo(doubleList L) {
    if ( L.first == NULL ) {
            cout << "  ~~~~~~~~~~~~~~~~~~~ " << endl;
            cout << "  [doubleList Kosong] " << endl;
            cout << "  ~~~~~~~~~~~~~~~~~~~ " << endl;
            cout;
    }else {
    address curr = L.first;

    cout << "  DATA SAAT INI :" << endl;
    cout << "  ~~~~~~~~~~~~~~~~~~~ " << endl;
    while(curr){
            cout << curr->info ;
            if ( curr->next != NULL ){
                cout << " -> ";
            }
            curr= curr->next;
    }
    cout << "\n  ~~~~~~~~~~~~~~~~~~~ " << endl;
    }
}


void insertFirstDouble(doubleList &L, address P) {
    if(( L.first != NULL )&&(L.last != NULL)){
        P->next = L.first;
        L.first->prev = P;
        L.first = P;
   }else{
        L.first=P;
        L.last =P;
    }

}

void insertLastDouble(doubleList &L, address P) {
    if(( L.first != NULL )&&(L.last != NULL)){
        P->prev = L.last;
        L.last->next = P;
        L.last = P;
    }else{
        L.last =P;
        L.first=P;
    }
}

void insertAfterDouble( doubleList &L, address P, infotype prec) {
    address Q = L.first;
    while (( Q != NULL ) && (Q->info != prec)){
        Q = Q->next;
    }
    P->prev = Q;
    P->next = Q->next;
    Q->next = P;
    if (Q == L.last){
        L.last = P;
    }else{
        P->next->prev = P;
    }
}

void insertBeforeDouble( doubleList &L, address P, infotype prec) {
    address Q = L.first;
    while (( Q != NULL ) && (Q->info != prec)){
        Q = Q->next;
    }
    P->prev = Q->prev ;
    P->next = Q;
    if ( Q == L.first) {
        L.first = P;
    }else {
        P->prev = P->prev;
        P->prev->next = P;
    }

}

void deleteFirstDouble(doubleList &L, address P){
    if ( L.first == NULL ) {
        P = NULL;
        cout << "  ~~~~~~~~~~~~~~~~~~~ " << endl;
        cout << "  [doubleList Kosong] " << endl;
        cout << "  ~~~~~~~~~~~~~~~~~~~ " << endl;
    } else if (L.first->next == NULL) {
                P = L.first;
                L.first = NULL;
                L.last = NULL;
    }else {
        P = L.first;
        L.first = P->next ;
        P->prev = NULL;
        L.first->prev = NULL;
        P->next = NULL;
    }
}

void deleteLastDouble(doubleList &L, address P){
    if ( L.first == NULL ) {
        P = NULL;
        cout << "  ~~~~~~~~~~~~~~~~~~~ " << endl;
        cout << "  [doubleList Kosong] " << endl;
        cout << "  ~~~~~~~~~~~~~~~~~~~ " << endl;
    } else if (L.first->next == NULL) {
                P = L.first;
                L.first = NULL;
                L.last = NULL;
    }else{
        P = L.last;
        L.last = L.last->prev;
        P->prev = NULL;
        P->next = NULL;
    }
}

void deleteAfterDouble( doubleList &L,address P, infotype prec ) {
    address Q = L.first;
    while (( Q != NULL ) && (Q->info != prec) ){
        Q = Q->next;
    }
  if ( (L.first != NULL && L.last != NULL  )&& Q != NULL) {
    P = Q->next;
    Q->next = P->next;
    if ( P == L.last ) {
        L.last = P->prev ;
    }else{
        P->next->prev = Q;
    }
    P->next = NULL;
    P->prev = NULL;
  }
}

void deleteBeforeDouble( doubleList &L,address P, infotype prec ) {
    address Q = L.first;
    while (( Q != NULL ) && (Q->info != prec)){
        Q = Q->next;
    }
    if ( (L.first != NULL && L.last != NULL  )&& Q != NULL) {
    P = Q->prev;
    Q->prev = P->prev;
    if ( P == L.first ) {
        L.first = Q ;
    }else{
        P->next->prev = Q;
    }
    P->next = NULL;
    P->prev = NULL;
  }
}
