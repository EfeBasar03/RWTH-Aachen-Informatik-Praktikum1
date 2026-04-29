///////////////////////////////////////////////////////////////////////////////
// Praktikum Informatik 1 MMXXVI
// Versuch 02
//
// Datei:   fibonacci.cpp
// Inhalt:  Hauptprogramm
///////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <chrono>

// TEIL 1 - Rekursive Berechnung
unsigned long long fibonacci_recursive(int n)
{
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}

// TEIL 2 - Iterative Berechnung (Fehler korrigiert)
unsigned long long fibonacci_iterative(int n)
{
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;

    unsigned long long previousFib = 0;
    unsigned long long currentFib  = 1;

    for(int i = 2; i <= n; i++)
    {
        long long newFib = previousFib + currentFib;
        previousFib = currentFib;
        currentFib  = newFib;
    }
    return currentFib;
}

int main()
{
    // Ausgabe: Rekursiv n = 0 bis 25
    std::cout << " Fibonacci-Zahlen (rekursiv) n=0..25" << std::endl;
    for(int i = 0; i <= 25; i++)
    {
        std::cout << "f(" << i << ") = " << fibonacci_recursive(i) << std::endl;
    }

    // --------------------------------------------------
    // Ausgabe: Iterativ n = 0 bis 25
    // --------------------------------------------------
    std::cout << std::endl;
    std::cout << " Fibonacci-Zahlen (iterativ) n=0..25" << std::endl;
    for(int i = 0; i <= 25; i++)
    {
        std::cout << "f(" << i << ") = " << fibonacci_iterative(i) << std::endl;
    }

    // Teil Aufgabe 3: Geschwindigkeitsvergleich n=42
    std::cout << std::endl;
    std::cout << " Geschwindigkeitsvergleich n=42" << std::endl;


    // Iterativ messen
    auto start1 = std::chrono::high_resolution_clock::now();
    long long result_iter = fibonacci_iterative(42);
    auto end1   = std::chrono::high_resolution_clock::now();
    long long time_iter = std::chrono::duration_cast<std::chrono::microseconds>(end1 - start1).count();

    std::cout << "Iterativ  f(42) = " << result_iter << std::endl;
    std::cout << "Zeit iterativ   = " << time_iter << " Mikrosekunden" << std::endl;

    // Rekursiv messen
    auto start2 = std::chrono::high_resolution_clock::now();
    long long result_rek = fibonacci_recursive(42);
    auto end2   = std::chrono::high_resolution_clock::now();
    long long time_rek = std::chrono::duration_cast<std::chrono::microseconds>(end2 - start2).count();

    std::cout << "Rekursiv  f(42) = " << result_rek << std::endl;
    std::cout << "Zeit rekursiv   = " << time_rek << " Mikrosekunden" << std::endl;

    // Teil Aufgabe 4 (Zusatz): long long - groesste Fibonacci
    std::cout << std::endl;
    std::cout << " Zusatzaufgabe: Groesste Fibonacci" << std::endl;
    std::cout << " mit long long (bis n=92)" << std::endl;
    for(int i = 46; i <= 92; i++)
    {
        std::cout << "f(" << i << ") = " << fibonacci_iterative(i) << std::endl;
    }

    return 0;
}
