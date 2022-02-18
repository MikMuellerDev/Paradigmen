public class Buch extends Gegenstand {
    int jahr;
    int isbn;
    String genre;
    String author;
    
    public Buch(int pJahr, int pISBN, String pGenre, String pAuthor, int pId, String pTitel) {
        super(pId, pTitel);
        jahr = pJahr;
        isbn = pISBN;
        genre = pGenre;
        author = pAuthor;
    }

    public int getJahr() { return jahr; }
    public int getISBN() { return isbn; }
    public String getGenre() { return genre; }
    public String getAuthor() { return author; }
}
