#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#define info (P) P->info
#define next (P) P->next

#include <iostream>
using namespace std;

struct infotype_mhs{
    string nama;
    string nim;
    float ipk;
};

typedef struct Elm_mhs *adr_mhs;

struct Elm_mhs{
    infotype_mhs info_mhs;
    adr_mhs next_mhs;
    adr_Relasi next_relasi;
};

struct list_Mhs{
    adr_mhs first;
};

typedef struct Elm_Relasi *adr_Relasi;

struct Elm_Relasi{
    adr_Relasi next_relasi;
    adr_Org next_org;
};

typedef string infotype_Org;

typedef struct Elm_Org *adr_Org;
struct Elm_Org{
    infotype_Org info_org;
    adr_Org next_org;
};

struct list_Org{
    adr_Org first;
};


void createListMhs(list_Mhs &L1);

void createListOrg(list_Org &L2);

void createElementMhs(list_Mhs &L1, infotype_mhs x);

void createElementOrg(list_Org &L2, infotype_Org y);

void insertLastDataMhs(list_Mhs &L1, adr_mhs P);

void showAllDataMahasiswa(list_Mhs &L1, adr_mhs P);

void deleteDataParentwithRelasi(list_Mhs &L1, adr_mhs &P );

void deleteFirstDataParentwithRelasi(list_Mhs &L1, adr_mhs &P );
void deleteLastDataParentwithRelasi(list_Mhs &L1, adr_mhs &P);

void deleteAfterDataParentwithRelasi(list_Mhs &L1, adr_mhs &P, adr_mhs Prec );


#endif // HEADER_H_INCLUDED
