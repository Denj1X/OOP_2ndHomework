#include "agenda.h"
#include <bits/stdc++.h>

Agenda:: Agenda() {}

void Agenda::AdAbonat(std::shared_ptr<Abonat> ABS) {
    abonati.push_back(ABS);
}

Abonat Agenda::operator[](const std::string name_) {
    for(int i = 0; i < (int)abonati.size(); i++)
        if(!name_.compare( abonati[i]->getNume()))
            return *abonati[i];

    return Abonat();
}

std::ostream &operator<<(std::ostream &os, Agenda &ag) {
    os << '\n';
    if(ag.abonati.size() == 0)
        os << "Nu sunt abonati" << '\n';
    for(int i = 0; i < (int)ag.abonati.size(); i++) {
        os << "Abonatul " << i + 1 << ": ";
        os << ag.abonati[i];
        os << "--------\n";
    }
    return os;
}