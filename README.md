Praktikum Informatik 1 — Einführung in die C++ Programmierung
Universität: RWTH Aachen, Institut für Mensch-Maschine-Interaktion
Veranstaltung: Praktikum Informatik 1 (SS 2026)
Professor: Prof. Dr.-Ing. habil. Jürgen Roßmann
Ein umfassendes praktisches Laborpraktikum, das die Grundlagen der C++-Programmierung, die integrierte Entwicklung mit Eclipse CDT, Debugging-Techniken, objektorientiertes Design, die Standard Template Library (STL), GUI-Entwicklung mit Qt und Versionskontrolle mit Git abdeckt.
Inhaltsverzeichnis
Übersicht
Voraussetzungen
Umgebungseinrichtung
Lehrplan
Repository-Struktur
Bewertung & Beurteilungskriterien
Wissenschaftliche Redlichkeit
Zusätzliche Ressourcen
Lizenz
Übersicht
Dieses Praktikum qualifiziert Sie dazu, programmiersprachenunabhängige, einfache Problemstellungen oder Verfahren (Algorithmen) auf Lösungsstrukturen in C++ abzubilden. Im Laufe des Semesters lernen Sie:
Welchen Einfluss die Programmiersprache auf die Lösungsqualität hat (Genauigkeit, Einschränkungen).
Kernkonzepte von C++: Datentypen, Operatoren, Kontrollstrukturen, Funktionen, Zeiger und Referenzen.
Objektorientierte Programmierung: Klassen, Vererbung, Polymorphie, Operatorenüberladung.
Dynamische Datenstrukturen: einfach/doppelt verkettete Listen, Warteschlangen, Stapelspeicher.
Standard Template Library (STL): Container (z. B. std::vector), Iteratoren und Datei-Ein-/Ausgabe.
GUI-Programmierung mit dem Qt-Framework (Signals & Slots, Widgets, Grafik-Szenen).
Professionelle Werkzeuge: Eclipse IDE, GDB-Debugging, Doxygen-Dokumentation und Git-Versionskontrolle.
Der Kurs ist in 9 Versuche unterteilt, die in zwei Testat-Blöcke gruppiert sind (Block 1: V1–V5, Block 2: V6–V9).
Voraussetzungen
Grundlegendes Verständnis für Algorithmen und Problemlösung.
Anmeldung in RWTHonline für sowohl den Praktikumstermin als auch die Prüfung (erforderlich für die Übermittlung der Leistung ans ZPA).
Hinweis: Ohne Prüfungsanmeldung können selbst bestandene Testate nicht gewertet werden.
Umgebungseinrichtung
Erforderliche Werkzeuge
Table
Werkzeug	Zweck
Eclipse CDT	Primäre C++-IDE (Projektverwaltung, Editor, Debugger)
MinGW GCC	Compiler-Toolchain (g++)
Qt + Qt Creator (optional, für Versuch 9)	GUI-Entwicklung
Git	Versionskontrolle und Einreichung
Doxygen	Quellcodedokumentation
Wichtig: Für Informatik 1 wird Eclipse dringend empfohlen; andere IDEs sind erlaubt, sofern sie denselben Funktionsumfang bieten, jedoch kann die Betreuerunterstützung bei Installation/Konfiguration begrenzt sein. Für Informatik 2 ist Eclipse zwingend erforderlich.
Workspace-Konfiguration
Speichern Sie Ihren Eclipse-Workspace auf dem Laufwerk U:\ (CIP-Pool), um ausreichend Speicherplatz zu gewährleisten.
Vermeiden Sie Sonderzeichen und Leerzeichen in Workspace-Pfaden.
Aktivieren Sie die externe Konsole für std::cin beim Debuggen:
Window → Preferences → C/C++ → Debug → GDB → Use external console for inferior
Installationsverifikation
Installationsanleitungen und Testverfahren sind im RWTH Moodle-Kurs verfügbar. Betreuerunterstützung für die Installation ist nur während der ersten Praktikumswoche garantiert.
Lehrplan
Block 1 — Grundlagen (Testat 1)
Table
Versuch	Thema	Kernkonzepte
V1	Datenstrukturen & Operatoren	Variablen, primitive Typen, Operatoren, Typumwandlungen, Felder, struct, Eclipse-Projekteinrichtung, Debugging-Grundlagen
V2	Kontrollstrukturen, Referenzen, Zeiger & Funktionen	if/switch, Schleifen (for/while), Referenzen, Zeiger, dynamischer Speicher, Funktionen, Rekursion, Fibonacci
V3	Komplexere Projekte & Dokumentation	Testgetriebene Entwicklung, übersichtlicher Code-Stil, Doxygen-Dokumentation
V4	Einführung in Klassen	OOP-Grundlagen: Klassen/Objekte, Methoden/Attribute, Konstruktoren/Destruktoren, this-Zeiger, Initialisierungslisten, Zugriffsbeschränkungen (public/private), Include-Wächter
V5	Dynamische Datenstrukturen	Einfach/doppelt verkettete Liste, Warteschlange, Stapelspeicher, einfache Studentendatenbank
Block 2 — Fortgeschrittene Themen (Testat 2)
Table
Versuch	Thema	Kernkonzepte
V6	Standard Template Library (STL)	Templates, std::vector, Iteratoren, Datei-Streams (ifstream/ofstream), Datei-Flags, Fehlerbehandlung
V7	Überladung	Überladen von Funktionen, Überladen von Operatoren (+, <<, >>), STL-Algorithmen
V8	Vererbung & Polymorphie	Klassenhierarchien, späte Bindung, virtuelle Funktionen, abstrakte Klassen, rein virtuelle Funktionen, virtuelle Destruktoren, protected-Zugriff
V9	GUI-Programmierung mit Qt	Qt-Widgets (QApplication, QPushButton, QLabel, QLineEdit, QGraphicsView, QMainWindow, QDialog), Signals & Slots, statische Attribute/Methoden, Karteneditor mit Wegsuche
Exkursion: Einführung in die Versionskontrolle mit Git
Table
Abschnitt	Thema
E.1	Gitting Started — Lokale Installation, Commit-Historie, Rückgängigmachen von Änderungen
E.2	Gitting Remote — Synchronisation mit RWTH GitLab, Klonen von Repositories
E.3	Gitting Better — Branchen, Mergen, Kollaborations-Workflows
Bewertung & Beurteilungskriterien
Testat-Struktur
Testat 1: Deckt die Versuche 1–5 ab (KW 19. Mai – 21. Mai)
Testat 2: Deckt die Versuche 6–9 ab (KW 7. Juli – 9. Juli)
Während der Testat-Wochen besteht Anwesenheits- und Abnahmepflicht.
Bewertungsschema (pro Testat)
Table
Punkte	Beschreibung
3	Inhalt des Skripts verstanden; korrekte Umsetzung; gute Kommentierung; gute Erklärung des Quellcodes
2	Inhalt verstanden; kleine Fehler bei der Umsetzung; Erklärung des Quellcodes ist befriedigend
1	Inhalt nur teilweise verstanden; grobe Mängel bei der Implementierung; Konzept zur Lösung ist korrekt
0	Ungenügende Kenntnisse; Lösung entspricht nicht der Aufgabenstellung; Programme laufen nicht; nicht selbstständig erstellt → Testat nicht bestanden
Bestehenskriterien
Gesamtpunktzahl ≥ 4 über beide Testate hinweg.
Bei Nichtbestehen (0 Punkte) eines Testats gilt das Praktikum als nicht bestanden.
Im normalen Praktikumsbetrieb besteht keine Anwesenheitspflicht, jedoch wird empfohlen, regelmäßig zu den Betreuungsterminen zu kommen. Während der Testate besteht Anwesenheitspflicht.
Option zur vorzeitigen Abnahme
In der zweiten und dritten Woche eines Testat-Blocks ist eine vorzeitige Abnahme nach separater Anmeldung per E-Mail an pi1@mmi.rwth-aachen.de möglich. Es besteht kein Anspruch auf einen vorgezogenen Termin.
Wissenschaftliche Redlichkeit
Als Täuschungsversuch wird gewertet, wenn eine Lösung vorgestellt wird, die offensichtlich nicht mit der aktuellen Aufgabenstellung übereinstimmt, bei der die Aufgabenblöcke nicht aufeinander aufbauen, oder die offensichtlich nicht selbst erstellt wurde. In diesem Fall wird das Testat mit 0 Punkten bewertet. Eine Wiederholung ist nicht möglich.
Zusätzliche Ressourcen
RWTH Moodle: Kursmaterialien, Installationsanleitungen, FAQ, Hyperlinks.
Literatur & Tutorials: Im Moodle-Kurs unter der Rubrik "Hyperlinks" verfügbar.
Qt-Dokumentation: https://doc.qt.io/
C++ Referenz: https://en.cppreference.com/                                                                                                                                                   ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------Praktikum Informatik 1 — Introduction to C++ Programming
University: RWTH Aachen University, Institute for Human-Machine Interaction
Course: Praktikum Informatik 1 (Summer Semester 2026)
Professor: Prof. Dr.-Ing. habil. Jürgen Roßmann
A comprehensive hands-on laboratory course covering C++ programming fundamentals, integrated development with Eclipse CDT, debugging techniques, object-oriented design, the Standard Template Library (STL), Qt GUI development, and version control with Git.
Table of Contents
Overview
Prerequisites
Environment Setup
Curriculum
Repository Structure
Scoring & Assessment Criteria
Academic Integrity
Additional Resources
License
Overview
This practical course qualifies you to map language-independent, simple problem statements or algorithms into C++ solution structures. Throughout the semester you will learn:
How the choice of programming language affects solution quality (accuracy, limitations).
Core C++ concepts: data types, operators, control structures, functions, pointers, and references.
Object-oriented programming: classes, inheritance, polymorphism, operator overloading.
Dynamic data structures: singly/doubly linked lists, queues, stacks.
Standard Template Library (STL): containers (e.g., std::vector), iterators, and file I/O.
GUI programming with the Qt framework (signals & slots, widgets, graphics scenes).
Professional tooling: Eclipse IDE, GDB debugging, Doxygen documentation, and Git version control.
The course is split into 9 experiments (Versuche) grouped into two testat blocks (Block 1: V1–V5, Block 2: V6–V9).
Prerequisites
Basic understanding of algorithms and problem-solving.
RWTHonline registration for both the lab slot and the exam (required for credit transfer to ZPA).
Note: Without exam registration, even passed testates cannot be credited.
Environment Setup
Required Tools
Table
Tool	Purpose
Eclipse CDT	Primary C++ IDE (project management, editor, debugger)
MinGW GCC	Compiler toolchain (g++)
Qt + Qt Creator (optional, for Experiment 9)	GUI development
Git	Version control and submission
Doxygen	Source code documentation
Important: For Informatik 1, Eclipse is strongly recommended; other IDEs are allowed if they offer comparable functionality, but tutor support for installation/configuration may be limited. For Informatik 2, Eclipse is mandatory.
Workspace Configuration
Store your Eclipse workspace on the U:\ drive (CIP-Pool) to ensure sufficient storage.
Avoid special characters and spaces in workspace paths.
Enable external console for std::cin debugging:
Window → Preferences → C/C++ → Debug → GDB → Use external console for inferior
Installation Verification
Installation guides and verification tests are available in the RWTH Moodle course. Tutor support for installation is only guaranteed during the first lab week.
Curriculum
Block 1 — Fundamentals (Testat 1)
Table
Experiment	Topic	Key Concepts
V1	Data Structures & Operators	Variables, primitive types, operators, type casting, arrays, struct, Eclipse project setup, debugging basics
V2	Control Structures, References, Pointers & Functions	if/switch, loops (for/while), references, pointers, dynamic memory, functions, recursion, Fibonacci
V3	Complex Projects & Documentation	Test-driven development, clean code style, Doxygen documentation
V4	Introduction to Classes	OOP fundamentals: classes/objects, methods/attributes, constructors/destructors, this pointer, initialization lists, access specifiers (public/private), include guards
V5	Dynamic Data Structures	Singly/doubly linked lists, queue, stack, simple student database
Block 2 — Advanced Topics (Testat 2)
Table
Experiment	Topic	Key Concepts
V6	Standard Template Library (STL)	Templates, std::vector, iterators, file streams (ifstream/ofstream), stream flags, error handling
V7	Operator Overloading	Overloading functions, overloading operators (+, <<, >>), STL algorithms
V8	Inheritance & Polymorphism	Class hierarchies, late binding, virtual functions, abstract classes, pure virtual functions, virtual destructors, protected access
V9	GUI Programming with Qt	Qt widgets (QApplication, QPushButton, QLabel, QLineEdit, QGraphicsView, QMainWindow, QDialog), signals & slots, static attributes/methods, map editor with pathfinding
Excursion: Version Control with Git
Table
Section	Topic
E.1	Gitting Started — Local installation, commit history, reverting changes
E.2	Gitting Remote — RWTH GitLab synchronization, cloning repositories
E.3	Gitting Better — Branching, merging, collaboration workflows
Scoring & Assessment Criteria
Testat Structure
Testat 1: Covers Experiments 1–5 (Weeks 19. Mai – 21. Mai)
Testat 2: Covers Experiments 6–9 (Weeks 7. Juli – 9. Juli)
Attendance and completion obligation applies during testat weeks.
Grading Scheme (per Testat)
Table
Points	Description
3	Full understanding of script content; correct implementation; good comments; excellent code explanation
2	Content understood; minor implementation errors; satisfactory explanation
1	Partial understanding; major implementation flaws; conceptually correct approach
0	Insufficient knowledge; solution does not match task; programs do not run; not self-created → Testat failed
Passing Requirements
Total score ≥ 4 across both testates.
If a testat receives 0 points, the entire practical course is failed.
No mandatory attendance during regular lab weeks, but strongly recommended. Attendance is mandatory during testat weeks.
Early Testat Option
In the 2nd and 3rd weeks of each testat block, an early completion is possible by appointment via email to pi1@mmi.rwth-aachen.de. No guaranteed entitlement to an early slot.
Academic Integrity
Any attempt to deceive (e.g., presenting solutions that do not match the current task, non-consecutive building blocks, obviously copied or unrepresentative solutions) results in 0 points for that testat. A repeat attempt is not possible.
Additional Resources
RWTH Moodle: Course materials, installation guides, FAQ, hyperlinks.
Literature & Tutorials: Available in the Moodle course under the "Hyperlinks" section.
Qt Documentation: https://doc.qt.io/
C++ Reference: https://en.cppreference.com/
