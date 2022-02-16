#include "../book/book.h"
#include "../dvd/dvd.h"
#include "../cd/cd.h"
#include "./library.h"
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

Book books[100];
DVD   dvds[100];
CD     cds[100];
int current_book_index = 0;
int current_dvd_index  = 0;
int current_cd_index   = 0;

void listBooks() {
    for (int index = 0; index < 100; index++) {
        if (books[index].name != NULL) 
            books[index].bookInfo(&books[index]);   
    }
}

void listDvds() {
    for (int index = 0; index < 100; index++) {
        if (dvds[index].name != NULL)
            dvds[index].dvdInfo(&dvds[index]);
    }
}

void listCds() {
    for (int index = 0; index < 100; index++) {
        if (cds[index].name != NULL)
            cds[index].cdInfo(&cds[index]);
    }
}

void listAll() {
    printf("\u2500\u2500\u2500BOOKS 📕\u2500\u2500\u2500\n");
    listBooks();
    printf("\n\u2500\u2500\u2500DVDS  📀\u2500\u2500\u2500\n");
    listDvds();
    printf("\n\u2500\u2500\u2500CDS   💿\u2500\u2500\u2500\n");
    listCds();
}

Book * getBookByName(char * name) {
    for (int index = 0; index < 100; index ++) {
        if (books[index].name != NULL && strcmp(books[index].name, name) == 0) {
            return &books[index];
        }
    }
    return NULL;
}

CD * getCdByName(char * name) {
    for (int index = 0; index < 100; index ++) {
        if (cds[index].name != NULL && strcmp(cds[index].name, name) == 0) {
            return &cds[index];
        }
    }
    return NULL;
}

DVD * getDvdByName(char * name) {
    for (int index = 0; index < 100; index ++) {
        if (dvds[index].name != NULL && strcmp(dvds[index].name, name) == 0) {
            return &dvds[index];
        }
    }
    return NULL;
}

void newBook(int year, int isbn, char *name, char *author, char *genre) {
    Book buch;
    bookConstructor(&buch, year, isbn, name, author, genre);
    books[current_book_index] = buch;
    current_book_index++;
}

void newDvd(int len, int fsk, char * name, char * genre) {
    DVD dvd;
    dvdConstructor(&dvd, fsk, len, name, genre);
    dvds[current_dvd_index] = dvd;
    current_dvd_index++;
}

void newCd(int len, char * name, char * genre) {
    CD cd;
    cdConstructor(&cd, len, name, genre);
    cds[current_dvd_index] = cd;
    current_cd_index++;
}