#include "dvd.h"
#include <stdio.h>

int   getDvdFsk(DVD *self)    { return self->fsk;    }
int   getDvdLen(DVD *self)    { return self->len;    }
char *getDvdName(DVD *self)   { return self->name;   }
char *getDvdGenre(DVD *self)  { return self->genre;  }

void dvdInfo(DVD *self) {
    printf("\n\u2502 Type   \u2502 📀 DVD\n");
    printf("\u2502 Name   \u2502 %s\n", self->name);
    printf("\u2502 FSK    \u2502 %d\n", self->fsk);
    printf("\u2502 Length \u2502 %d\n", self->len);
    printf("\u2502 Genre  \u2502 %s\n", self->genre);
    if (self->available)
        printf("\u2502 Available.\n");
    else
        printf("\u2502 Not Available.\n");
}

void dvdConstructor(DVD *self, int fsk, int len, char *name, char *genre) {
    // Initialize <private> attributes
    self->fsk   = fsk;
    self->len   = len;
    self->name  = name;
    self->genre = genre;
    self->available = true;

    // Declare <public> function pointers
    self->returnDvd = returnDvd;
    self->rentDvd   = rentDvd;
    self->dvdInfo   = dvdInfo;
    self->getLen    = getDvdLen;
    self->getFsk    = getDvdFsk;
    self->getGenre  = getDvdGenre;
    self->getName   = getDvdName;
}

bool rentDvd(DVD *self, char *name) {
    if (!self->available)
        return false;
    self->available = false;
    return true;
}

void returnDvd(DVD *self) {
    self->available = true;
}