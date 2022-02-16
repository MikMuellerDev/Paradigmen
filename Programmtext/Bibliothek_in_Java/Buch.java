public class Buch extends Gegenstand {
    int jahr;
    int ISBN;
    String genre;
    String author;

    public Buch(int pYear, int pISBN, String pGenre, String pAuthor, int pId, String pTitel) {
        super(pId, pTitel);
        jahr = pYear;
        ISBN = pISBN;
        genre = pGenre;
        author = pAuthor;
    }

    public int getJahr() {
        return jahr;
    }

    public int getISBN() {
        return ISBN;
    }

    public String getGenre() {
        return genre;
    }

    public String getAuthor() {
        return author;
    }
}
