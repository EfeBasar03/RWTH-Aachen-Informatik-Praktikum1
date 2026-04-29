/////////////////////////////////////////////////////////////////////////////
// Praktikum Informatik 1 MMXXV
// Versuch 1.2: Strukturen
//
// Datei:  Strukturen.cpp
// Inhalt: Hauptprogramm
//////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>

int main()
{
	struct Person //Struct erstellen
	{
		std::string sNachname, sVorname; //String Variablen
		int iGeburtsjahr, iAlter; //Integer Variablen
	};

	Person nBenutzer; //Struct verwenden um eine Variable zu erstellen
	Person nKopieEinzeln;
	Person nKopieGesamt;

	//Eingabe marathon:
	std::cout << "Bitte geben Sie Ihren Vornamen ein: " << std::endl;
	std::cin >> nBenutzer.sVorname;

	std::cout << "Bitte geben Sie Ihren Nachnamen ein: " << std::endl;
	std::cin >> nBenutzer.sNachname;

	std::cout << "Bitte geben Sie Ihr Geburtsjahr ein: " << std::endl;
	std::cin >> nBenutzer.iGeburtsjahr;

	std::cout << "Bitte geben Sie Ihr Alter ein: " << std::endl;
	std::cin >> nBenutzer.iAlter;

	std::cout << "Name der Person: " << nBenutzer.sNachname << "\n"
			<< "Vorname der Person: " << nBenutzer.sVorname << "\n"
			<< "Geburtsjahr der Person: " << nBenutzer.iGeburtsjahr << "\n"
			<< "Alter der Person: " << nBenutzer.iAlter << std::endl << std::endl;

	nKopieEinzeln.sVorname = nBenutzer.sVorname;
	nKopieEinzeln.sNachname = nBenutzer.sNachname;
	nKopieEinzeln.iGeburtsjahr = nBenutzer.iGeburtsjahr;
	nKopieEinzeln.iAlter = nBenutzer.iAlter;

	std::cout << "(nKopieEinzeln) Name der Person: " << nKopieEinzeln.sNachname << "\n"
				<< "Vorname der Person: " << nKopieEinzeln.sVorname << "\n"
				<< "Geburtsjahr der Person: " << nKopieEinzeln.iGeburtsjahr << "\n"
				<< "Alter der Person: " << nKopieEinzeln.iAlter << std::endl << std::endl;

	nKopieGesamt = nBenutzer;

	std::cout << "(nKopieGesamt) Name der Person: " << nKopieGesamt.sNachname << "\n"
					<< "Vorname der Person: " << nKopieGesamt.sVorname << "\n"
					<< "Geburtsjahr der Person: " << nKopieGesamt.iGeburtsjahr << "\n"
					<< "Alter der Person: " << nKopieGesamt.iAlter << std::endl;

	return 0;
}
