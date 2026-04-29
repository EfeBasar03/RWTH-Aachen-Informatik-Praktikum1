/////////////////////////////////////////////////////////////////////////
// Praktikum Informatik 1
//
// Versuch 1.1: Datentypen und Typumwandlung
//
// Datei:   Variablen.cpp
// Inhalt:  Hauptprogramm
/////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int iErste = 0;
    int iZweite = 0;

    // --- 1. aufgabe Ganzzahlige Ein- und Ausgabe ---
    cout << "--- Teil 1 & 2: Berechnungen ---" << endl;
    cout << "Bitte geben Sie die erste ganze Zahl ein: ";
    cin >> iErste;
    cout << "Bitte geben Sie die zweite ganze Zahl ein: ";
    cin >> iZweite;

    int iSumme = iErste + iZweite;
    int iQuotient = iErste / iZweite;

    cout << "\nErgebnisse (Ganzzahlen - int):" << endl;
    cout << "Die Summe beträgt: " << iSumme << endl;
    cout << "Der Quotient beträgt: " << iQuotient << endl;

    // --- 2. aufgabe Berechnung ohne Typecasting (Zuweisung an double) ---
    double dSumme = iErste + iZweite;
    double dQuotient = iErste / iZweite;

    cout << "\nErgebnisse (Gleitkommazahlen ohne Cast - double):" << endl;
    cout << "Die Summe beträgt: " << dSumme << endl;
    cout << "Der Quotient beträgt: " << dQuotient << endl;

    // --- 3. aufgabe Berechnung mit Typecasting (double) ---
    double dSummeCast = (double)iErste + (double)iZweite;
    double dQuotientCast = (double)iErste / (double)iZweite;

    cout << "\nErgebnisse (Gleitkommazahlen mit Cast - double):" << endl;
    cout << "Die Summe beträgt: " << dSummeCast << endl;
    cout << "Der Quotient beträgt: " << dQuotientCast << endl;

    // --- 4.  aufgabe String-Verarbeitung ---
    cout << "\n--- Teil 4: Strings ---" << endl;
    string sVorname;
    string sNachname;

    cout << "Bitte geben Sie Ihren Vornamen ein: ";
    cin >> sVorname;
    cout << "Bitte geben Sie Ihren Nachnamen ein: ";
    cin >> sNachname;

    string sVornameName = sVorname + " " + sNachname;
    string sNameVorname = sNachname + ", " + sVorname;

    cout << "Format 1: " << sVornameName << endl;
    cout << "Format 2: " << sNameVorname << endl;

    // --- 5. aufgabe  Block, Arrays und Konstanten ---
    cout << "\n--- Teil 5: Eigener Block ---" << endl;
    {
        // a) 1D-Array
        int iFeld[2] = {1, 2};
        cout << "Feld-Elemente: " << iFeld[0] << " und " << iFeld[1] << endl;

        // b) 2D-Array (Spielfeld)
        int spielfeld[2][3] = {
            {1, 2, 3},
            {4, 5, 6}
        };
        cout << "Spielfeld:" << endl;
        cout << spielfeld[0][0] << " " << spielfeld[0][1] << " " << spielfeld[0][2] << endl;
        cout << spielfeld[1][0] << " " << spielfeld[1][1] << " " << spielfeld[1][2] << endl;

        // c) Konstante im lokalen Block
        const int iZweite = 1;
        cout << "Die lokale Konstante iZweite im Block lautet: " << iZweite << endl;
    }
    // Außerhalb des Blocks wird wieder die ursprüngliche Variable iZweite genutzt
    cout << "Die Variable iZweite nach dem Block lautet wieder: " << iZweite << endl;

    // --- 6. & 7. ASCII-Werte und Alphabet-Position ---
    cout << "\n--- Teil 6 & 7: ASCII und Alphabet-Position ---" << endl;

    // Wir gehen davon aus, dass der Name mindestens 2 Buchstaben hat
    int iName1 = sVorname[0];
    int iName2 = sVorname[1];

    cout << "ASCII-Wert des 1. Buchstabens ('" << sVorname[0] << "'): " << iName1 << endl;
    cout << "ASCII-Wert des 2. Buchstabens ('" << sVorname[1] << "'): " << iName2 << endl;

    // Modulo 32 rechnet ASCII-Buchstaben elegant in ihre Alphabet-Position um.
    // A (65) % 32 = 1. a (97) % 32 = 1.
    int pos1 = iName1 % 32;
    int pos2 = iName2 % 32;

    cout << "Position im Alphabet (1. Buchstabe): " << pos1 << endl;
    cout << "Position im Alphabet (2. Buchstabe): " << pos2 << endl;

    return 0;
}
