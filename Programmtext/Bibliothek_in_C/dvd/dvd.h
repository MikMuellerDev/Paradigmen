#ifndef DVD_H_INCLUDED
#define DVD_H_INCLUDED
#include <stdbool.h>

typedef struct {
    // attributes
    bool  available;
    int   len;
    int   fsk;
    char *name;
    char *genre;

    // methods
    bool  (*rentDvd)();
    int   (*getLen)();
    int   (*getFsk)();
    void  (*dvdInfo)();
    void  (*returnDvd)();
    char *(*getGenre)();
    char *(*getName)();
} DVD;

bool  rentDvd();
bool  getDvdAvail();
int   getDvdFsk();
int   getDvdLen();
char *getDvdName();
char *getDvdGenre();

void dvdConstructor(
    DVD *self,
    int  fsk,
    int  len,
    char *name,
    char *genre);

void dvdInfo(DVD *self);
void returnDvd(DVD *self);

#endif