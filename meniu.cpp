#include "meniu.h"
#include <bits/stdc++.h>

Meniu::Meniu() {
    std:: cout << "Aceasta este a doua tema\n";
    std:: cout << "Aici avem comenzile pentru proiect:\n";
    std:: cout << "1. Afisarea abonatilor din agenda\n";
    std:: cout << "2. Adaug un nou abonat din Romania\n";
    std:: cout << "3. Adaug un nou abonat din strainatate\n";
    std:: cout << "4. Iesirea din meniu\n";
    do {
        std:: cin.get();
        std:: cout << "Introducerea comenzii: ";
        std:: cin >> comanda;
        std:: cout << "\n";
        if(comanda == '1')
            std::cout << ag << '\n';
        else if(comanda == '2') {

        }
        else if(comanda == '3') {

        }
        std:: cout << '\n';
    }while(comanda != '4');
};