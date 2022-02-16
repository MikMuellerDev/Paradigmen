#ifndef BOOK_H_INCLUDED
#define BOOK_H_INCLUDED
#include <stdbool.h>

typedef struct {
    // attributes
    bool  available;
    int   year;
    int   isbn;
    char *name;
    char *author;
    char *genre;

    // methods
    bool  (*rentBook)();
    int   (*getBookYear)();
    int   (*getBookIsbn)();
    void  (*bookInfo)();
    void  (*returnBook)();
    char *(*getBookGenre)();
    char *(*getBookName)();
    char *(*getBookAuthor)();
} Book;

bool  getCdAvail();
bool  rentBook();
int   getBookYear();
int   getBookIsbn();
char *getBookName();
char *getBookGenre();
char *getBookAuthor();

void bookConstructor(
    Book *self,
    int year,
    int isbn,
    char *name,
    char *author,
    char *genre);
    
void bookInfo(Book *self);
void returnBook(Book *self);

#endif