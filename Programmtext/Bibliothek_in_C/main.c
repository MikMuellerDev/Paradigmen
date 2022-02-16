#include "library/library.h"
#include "book/book.h"
#include "dvd/dvd.h"
#include "cd/cd.h"
#include <stdio.h>

int main() {
    // <Initialize objects>
    newBook(1, 1, "a Book", "testauthor", "testgenre");
    newDvd(120, 0, "a Movie", "informative");
    newCd(60, "Music", "Music");

    listAll();
    
    // Get <objects> by Name
    CD myCd =   (*getCdByName("Music"));
    DVD myDvd = (*getDvdByName("a Movie"));
    Book myBook = (*getBookByName("a Book"));
    myBook.bookInfo(&myBook);

    // Rent and return a book
    bool success = myBook.rentBook(&myBook);
    if (success)
        myBook.returnBook(&myBook);    
    else
        printf("<%s> is already rented.\n", myBook.getBookName());
    
    return 0;
}