#include "SingleLinkedList.h"
/* Created BY : FAISAL RIDWAN SIREGAR */
void MenuInsert(singleList &L, address &P){
    system("cls");
    cout << " Masukkan angka yang akan di insert : ";
    int angka;
    cin >> angka;
    cout << " |                                      |" << endl;
    cout << " |  Mau Insert apakah anda :            |" << endl;
    cout << " |  1. Insert First                     |" << endl;
    cout << " |  2. Insert Last                      |" << endl;
    cout << " |  3. Insert After                     |" << endl;
    cout << " |  0. Back                             |" << endl;
    cout << "    Masukkan : ";
    int pil;
    cin >> pil;
    if (pil == 1 ){
        insertFirstSingle(L,alokasi(angka));
        MenuUtama(L,P);
    }else if (pil == 2){
              insertLastSingle(L,alokasi(angka));
              MenuUtama(L,P);
    }else if (pil == 3){
              cout << " Masukkan prec(angka setelah) : ";
              int prec;
              cin >> prec ;
            insertAfterSingle(L,alokasi(angka),prec);
              MenuUtama(L,P);
    }else if (pil == 0){
                MenuUtama(L,P);
    }else {
        cout << "Hanya 3 Pilihan Bosku";
        MenuInsert(L,P);
    }
}

void MenuDelete(singleList &L, address &P){
    system("cls");
    cout << " |                                      |" << endl;
    cout << " |  Mau Delete apakah anda :            |" << endl;
    cout << " |  1. Delete First                     |" << endl;
    cout << " |  2. Delete Last                      |" << endl;
    cout << " |  3. Delete After                     |" << endl;
    cout << " |  0. Back                             |" << endl;
    cout << " Masukkan : ";
    int pil;
    cin >> pil;
    if (pil == 1 ){
        deleteFirstSingle(L,P);
        MenuUtama(L,P);
    }else if (pil == 2){
              deleteLastSingle(L,P);
              MenuUtama(L,P);
    }else if (pil == 3){
              cout << " Masukkan prec(angka setelah) : ";
              int prec;
              cin >> prec;
              deleteAfterSingle(L,P,prec);
              MenuUtama(L,P);
    }else if (pil == 0){
                MenuUtama(L,P);
    }else {
        cout << "Hanya 4 Pilihan Bosku";
        MenuDelete(L,P);
    }

}
void MenuUtama(singleList &L, address &P){
    cout << " | SELAMAT DATANG DI SINGLE LINKED LIST |" << endl;
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
            cout << "  ~~~~~~~~~~~~~~~~~~~ " << endl;
            cout << "  Menu Tidak Tersedia  " << endl;
            cout << "  ~~~~~~~~~~~~~~~~~~~ " << endl;
            MenuUtama(L,P);
    }
}

void creatList(singleList &L) {
    L.first = NULL;
}

address alokasi(infotype info){
    address P =  new elmList;
    P->info = info;
    P->next = NULL ;
    return P;
}
address dealokasi(address &P) {
    delete P;
}

void printInfo(singleList L) {
    if ( L.first == NULL ) {
            cout << "  ~~~~~~~~~~~~~~~~~~~ " << endl;
            cout << "  [singleList Kosong] " << endl;
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

void insertFirstSingle(singleList &L, address P) {
    if( L.first == NULL ){
        L.first = P ;
   }else{
        P->next = L.first;
        L.first = P;
    }

}

void insertLastSingle(singleList &L, address P) {
    if ( L.first == NULL){
        L.first = P;
    }else{
    address Q = L.first;
    while ( Q->next != NULL ) {
        Q = Q->next;
    }
    Q->next = P;
    }
}

void insertAfterSingle( singleList &L, address P, infotype prec) {
    address Q = L.first ;
    while (( Q != NULL ) && (Q->info != prec)){
        Q = Q->next;
    }
    if (Q != NULL){
        P->next = Q->next;
        Q->next = P;
    }else{
    cout << "singleList Kosong atau Prec Tidak Ada";
    }
}

void deleteFirstSingle(singleList &L, address P){
    if ( L.first == NULL ) {
        P = NULL;
        cout << "  ~~~~~~~~~~~~~~~~~~~ " << endl;
        cout << "  [singleList Kosong] " << endl;
        cout << "  ~~~~~~~~~~~~~~~~~~~ " << endl;
    } else if (L.first->next == NULL) {
                P = L.first;
                L.first = NULL;
    }else {
        P = L.first;
        L.first = P->next ;
        P->next = NULL;
    }
}

void deleteLastSingle(singleList &L, address P){
    if ( L.first == NULL ) {
        P = NULL;
        cout << "  ~~~~~~~~~~~~~~~~~~~ " << endl;
        cout << "  [singleList Kosong] " << endl;
        cout << "  ~~~~~~~~~~~~~~~~~~~ " << endl;
    } else if (L.first->next == NULL) {
                P = L.first;
                L.first = NULL;
    }else{
        address R;
        P = L.first;
        while ( P->next != NULL ) {
                R = P;
                P = P->next;
       }
       R->next = NULL;
    }
}

void deleteAfterSingle( singleList &L,address P, infotype prec ) {
    address R = L.first;
    while ((R != NULL) && (R->info != prec)) {
        R = R->next ;
    }
    if ( R != NULL ){
        if ( R->next != NULL ){
            P = R->next;
            R->next = P->next;
            P->next = NULL;
        }else{
            cout<< "Prec Berada Di Akhir";
        }
    }else {
        cout << " singleList Kosong atau Prec Tidak Ditemukan";
    }
}
