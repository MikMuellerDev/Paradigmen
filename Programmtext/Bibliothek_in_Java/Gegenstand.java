public class Gegenstand {
    int id;
    String titel;
    boolean ausgeliehen;

    public Gegenstand(int pId, String pTitel) {
        id = pId;
        titel = pTitel;
        ausgeliehen = false;
    }

    public int getId() {
        return id;
    }

    public String getTitel() {
        return titel;
    }

    public boolean getAusgeliehen() {
        return ausgeliehen;
    }

    public void setzeAusgeliehen(boolean pAv) {
        ausgeliehen = pAv;
    }
}
