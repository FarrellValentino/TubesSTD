#include "Header.h"
#include <iostream>
using namespace std;

void createListMhs(list_Mhs &L1){
        L1.first=NULL;
}

void createListOrg(list_Org &L2){
    L2.first=NULL;

}

void createElementMhs(list_Mhs &L1, infotype_mhs x){

}

void createElementOrg(list_Org &L2,infotype_Org y){

}

void insertLastDataMhs(list_Mhs &L1, adr_mhs P){
    adr_mhs Q;

    Q= L1.first;
    while (Q->next_mhs!=NULL){
        Q=Q->next_mhs; 
    }

    Q->next_mhs=P;
    P->next_mhs=NULL;
    P->next_relasi=NULL;

}

void deleteDataParentwithRelasi(list_Mhs &L1, adr_mhs &P ){
    infotype_mhs x;
    adr_Relasi Q;
    adr_mhs Prec;

    P=L1.first;
    while (P!=NULL){
        if (P->info_mhs.nama==x.nama) {
            Q=P->next_relasi;
            Q->next_relasi=NULL;
        if (Q==L1){
                deleteFirstDataParentwithRelasi(&L1,&P);

            }else if (Q->next_relasi==NULL){
                deleteLastDataParentwithRelasi(&L1,&P);

            }else{
                deleteAfterDataParentwithRelasi(&L1, &P,Prec);
            }
        }
        P=P->next_mhs;
    }

}







