import java.util.*;

public class Bibliothek {
    List<Gegenstand> inventar;

    public Bibliothek() {
        inventar = new ArrayList<Gegenstand>();
    }

    public boolean ausleihen(int id) {
        Gegenstand gegenstand = getGegenstand(id);
        if (gegenstand.getAusgeliehen()) {
            return false;
        }
        gegenstand.setzeAusgeliehen(true);
        return true;
    }

    public boolean zurueckgeben(int id) {
        Gegenstand gegenstand = getGegenstand(id);
        if (!gegenstand.getAusgeliehen()) {
            return false;
        }
        gegenstand.setzeAusgeliehen(false);
        return true;
    }

    public void hinzufuegen(Gegenstand pGegenstand) {
        inventar.add(pGegenstand);
    }

    public void infosAusgeben(Gegenstand gegenstand) {
        String output = "   -> ID: [" + gegenstand.getId() + "], Ausgeliehen: " + gegenstand.getAusgeliehen()
                + ", Name: `" + gegenstand.getTitel() + "`";

        if (gegenstand instanceof Buch) {
            Buch buch = (Buch) gegenstand;
            output += ", Typ: Buch, Author: `" + buch.getAuthor() + "`";
        } else if (gegenstand instanceof CD) {
            CD cd = (CD) gegenstand;
            output += ", Typ: CD, Länge: `" + cd.getLaenge() + "` Min.";
        } else if (gegenstand instanceof DVD) {
            DVD dvd = (DVD) gegenstand;
            output += ", Typ: DVD, Länge: `" + dvd.getLaenge() + "` Min. FSK: " + dvd.getFSK();
        }

        System.out.println(output);
    }

    public void auflisten() {
        if (inventar.size() == 0) {
            System.out.println("--- Die Bibliothek ist leer. ---");
        } else {

            System.out.println("--- Die Bibliothek beinhaltet:");

            for (int index = 0; index < inventar.size(); index++) {
                Gegenstand gegenstand = inventar.get(index);
                infosAusgeben(gegenstand);
            }
        }
    }

    public Gegenstand getGegenstand(int id) {
        for (int index = 0; index < inventar.size(); index++) {
            if (inventar.get(index).getId() == id) {
                return inventar.get(index);
            }
        }
        return null;
    }

}