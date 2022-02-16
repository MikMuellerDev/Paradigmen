public class Main {
    public static void main(String[] args) {
        Bibliothek bibliothek = new Bibliothek();
        // Noch leer
        bibliothek.auflisten();

        // Zwei Gegenstände hinzufügen
        bibliothek.hinzufuegen(new DVD(420, 0, "Wissen", 01, "Haskell-Crashcourse mit Animationen"));
        bibliothek.hinzufuegen(new CD(120, "Wissen", 02, "Einleitung in Java - Hörspiel"));
        bibliothek.hinzufuegen(new Buch(1988, 131103628 , "Wissen", "Dennis M. Ritchie" , 03, "The C Programming Language"));
        bibliothek.auflisten();

        boolean erfolg = bibliothek.ausleihen(03);
        System.out.println("Erfolgreich ausgeliehen: " + erfolg);

        System.out.println("Gesucht mit ID 03:");
        // Gegenstand suchen
        Gegenstand gegenstand = bibliothek.getGegenstand(03);
        
        if (gegenstand != null) {
            bibliothek.infosAusgeben(gegenstand);
        } else {
            System.out.println("Kein Ergebnis.");
        }

        boolean erfolgZurueck = bibliothek.zurueckgeben(03);
        System.out.println("Erfolgreich zurückgegeben: " + erfolgZurueck);
    }
}