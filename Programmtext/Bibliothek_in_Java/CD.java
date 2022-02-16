public class CD extends Gegenstand {
    int len;
    String genre;
    
    public CD(int pLen, String pGenre, int pId, String pTitel) {
        super(pId, pTitel);
        len = pLen;
        genre = pGenre;
    }

    public int getLaenge() {
        return len;
    }

    public String getGenre() {
        return genre;
    }
}
