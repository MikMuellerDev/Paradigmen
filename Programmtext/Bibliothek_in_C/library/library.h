#ifndef LIBRARY_H_INCLUDED
#define LIBRARY_H_INCLUDED
#include <stdbool.h>
#include "../book/book.h"
#include "../dvd/dvd.h"
#include "../cd/cd.h"


void listBooks();
void listDvds();
void listCds();
void listAll();

Book * getBookByName(char* name);
DVD  * getDvdByName(char * name);
CD   * getCdByName(char * name);

void newBook(int year, int isbn, char *name, char *author, char *genre);
void newDvd(int len, int fsk, char * name, char * genre);
void newCd(int len, char * name, char * genre);

#endif
