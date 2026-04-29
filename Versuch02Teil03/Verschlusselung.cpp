///////////////////////////////////////////////////////////////////////////////
// Praktikum Informatik 1 
// 
// Versuch 2.3: Felder
//
// Datei:  Verschluesselung.cpp
// Inhalt: Hauptprogramm
//////////////////////////////////////////////////////////////////////////////

using namespace std;

#include <iostream>
#include <string>
#include <algorithm>
#include <random>
#include <chrono>

string verschluesseln(char schluessel[2][26], string wort)
{
    int length = wort.length();
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (wort[i] == schluessel[0][j])
            {
                wort[i] = schluessel[1][j];
                break;
            }
        }
    }
    return wort;
}

string entschluesseln(char schluessel[2][26], string wort)
{
    int length = wort.length();
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (wort[i] == schluessel[1][j])
            {
                wort[i] = schluessel[0][j];
                break;
            }
        }
    }
    return wort;
}

int main()
{
    char lookupTable[2][26];

    // Zeile 0: Klartext A-Z
    for (char i = 'A'; i <= 'Z'; i++)
    {
        lookupTable[0][i - 'A'] = i;
    }

    // Zeile 1: Geheimtext A-Z (wird gleich zufällig gemischt)
    for (char i = 'A'; i <= 'Z'; i++)
    {
        lookupTable[1][i - 'A'] = i;
    }

    // Zufaellig mischen — ALLE 26 Buchstaben (+ 26, nicht 'Z'-'A' = 25!)
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::shuffle(&lookupTable[1][0], &lookupTable[1][0] + 26, std::default_random_engine(seed));

    // Tabelle ausgeben
    std::cout << "LookUp Tabelle fuer die Verschluesselung:" << std::endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            std::cout << lookupTable[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Benutzereingabe
    string eingabe;
    std::cout << "\nBitte geben Sie ein Wort in Grossbuchstaben ein: ";
    std::cin >> eingabe;

    // Verschluesseln
    string verschluesselt = verschluesseln(lookupTable, eingabe);
    std::cout << "Klartext:       " << eingabe       << std::endl;
    std::cout << "Verschluesselt: " << verschluesselt << std::endl;

    // Entschluesseln
    string entschluesselt = entschluesseln(lookupTable, verschluesselt);
    std::cout << "Entschluesselt: " << entschluesselt << std::endl;

    return 0;
}
