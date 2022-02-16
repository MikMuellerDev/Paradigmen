#include "cd.h"
#include <stdio.h>

int   getCdLen  (CD *self)  { return self->len;    }
char *getCdName (CD *self)  { return self->name;   }
char *getCdGenre(CD *self)  { return self->genre;  }

void cdInfo(CD *self) {
    printf("\n\u2502 Type   \u2502 💿 DVD\n");
    printf("\u2502 Name   \u2502 %s\n", self->name);
    printf("\u2502 Length \u2502 %d\n", self->len);
    printf("\u2502 Genre  \u2502 %s\n", self->genre);
    if (self->available)
        printf("\u2502 Available.\n");
    else
        printf("\u2502 Not Available.\n");

}

void cdConstructor(CD *self, int len, char *name, char *genre) {
    // Initialize <private> attributes
    self->len   = len;
    self->name  = name;
    self->genre = genre;
    self->available = true;

    // Declare <public> function pointers
    self->rentCd   = rentCd;
    self->cdInfo   = cdInfo;
    self->getLen   = getCdLen;
    self->getGenre = getCdGenre;
    self->getName  = getCdName;
}

bool rentCd(CD *self, char *name) {
    if (!self->available)
        return false;
    self->available = false;
    return true;
}

void returnCd(CD *self) {
    self->available = true;
}