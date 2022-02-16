#ifndef CD_H_INCLUDED
#define CD_H_INCLUDED
#include <stdbool.h>

typedef struct {
    // attributes
    bool  available;
    int   len;
    char *name;
    char *genre;

    // methods
    bool  (*rentCd)();
    int   (*getLen)();
    void  (*cdInfo)();
    void  (*returnCd)();
    char *(*getGenre)();
    char *(*getName)();
} CD;

bool  rentCd();
bool  getCdAvail();
int   getCdLen();
char *getCdName();
char *getCdGenre();

void cdConstructor(
    CD *self,
    int  len,
    char *name,
    char *genre
);

void cdInfo(CD *self);
void returnCd(CD *self);

#endif