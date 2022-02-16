public class DVD extends Gegenstand {
    int len;
    int fsk;
    String genre;

    public DVD(int pLen, int pMinAge, String pGenre, int pId, String pTitel) {
        super(pId, pTitel);
        len = pLen;
        fsk = pMinAge;
        genre = pGenre;
    }

    public int getLaenge() {
        return len;
    }

    public int getFSK() {
        return fsk;
    }

    public String getGenre() {
        return genre;
    }
}
