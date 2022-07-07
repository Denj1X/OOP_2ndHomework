#include "agenda.h"
#include <bits/stdc++.h>

Agenda:: Agenda() = default;

void Agenda::AdAbonat(const std::shared_ptr<Abonat>& ABS) {
    abonati.push_back(ABS);
}

Abonat Agenda::operator[](const std::string& name_) {
    for(auto & i : abonati)
        if(!name_.compare( i->getNume()))
            return *i;

    return {};
}

std::ostream &operator<<(std::ostream &os, Agenda &ag) {
    os << '\n';
    if(ag.abonati.empty())
        os << "Nu sunt abonati" << '\n';
    for(int i = 0; i < (int)ag.abonati.size(); i++) {
        os << "Abonatul " << i + 1 << ": ";
        os << ag.abonati[i];
        os << "--------\n";
    }
    return os;
}