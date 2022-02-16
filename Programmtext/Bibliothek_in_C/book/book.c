#include "book.h"
#include <stdio.h>

int   getBookYear(Book *self)   { return self->year;   }
int   getBookIsbn(Book *self)   { return self->isbn;   }
char *getBookAuthor(Book *self) { return self->author; }
char *getBookName(Book *self)   { return self->name;   }
char *getBookGenre(Book *self)  { return self->genre;  }

void bookInfo(Book *self) {
    printf("\n\u2502 Type   \u2502 📕 Book\n");
    printf("\u2502 Name   \u2502 %s\n", self->name);
    printf("\u2502 ISBN   \u2502 %d\n", self->isbn);
    printf("\u2502 Year   \u2502 %d\n", self->year);
    printf("\u2502 Author \u2502 %s\n", self->author);
    printf("\u2502 Genre  \u2502 %s\n", self->genre);
    if (self->available) printf("\u2502 Available.\n"); else printf("\u2502 Not Available.\n");
}

void bookConstructor(Book *self, int year, int isbn, char *name, char *author, char *genre) {
    // Initialize <private> attributes
    self->year   = year;
    self->isbn   = isbn;
    self->name   = name;
    self->author = author;
    self->genre  = genre;
    self->available = true;

    // Initialize <public> function pointers
    self->rentBook      = rentBook;
    self->returnBook    = returnBook;
    self->bookInfo      = bookInfo;
    self->getBookAuthor = getBookAuthor;
    self->getBookGenre  = getBookGenre;
    self->getBookIsbn   = getBookIsbn;
    self->getBookName   = getBookName;
    self->getBookYear   = getBookYear;
}

bool rentBook(Book *self) {
    if (!self->available) return false;
    self->available = false;
    return true;
}

void returnBook(Book *self) {
    self->available = true;
}