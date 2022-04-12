#include "abonat.h"

#include <bits/stdc++.h>

Abonat::Abonat() {
    nr_telefon = "000000000";
}

Abonat::Abonat(const std::string &nume_, int id_, std::string nrTelefon) : Persoana(nume_, id_),
                                                                                 nr_telefon(std::move(nrTelefon)) {}
std::string Abonat::getPhoneNumber() const {
    return nr_telefon;
}

void Abonat::setPhoneNumber(std::string nr_telefon_) {
    nr_telefon = nr_telefon_;
}

std::istream& operator>>(std::istream &os, Abonat& abon) {
    std::string name;
    int indx;
    std::cout << "Nume abonat: ";
    os >> name;
    std::cout << "ID abonat: ";
    os >> indx;
    std::cout << "Numar telefon: ";
    os >> abon.nr_telefon;
    abon.setId(indx);
    abon.setNume(name);
    return os;
}

std::ostream& operator<<(std::ostream &os, std::shared_ptr<Abonat> abon) {
    os << '\n';
    std::shared_ptr<Persoana> prs = abon;
    os << "Nume: " << prs -> getNume();
    os << " ID: " << prs -> getId();
    os << " Telefon: " << abon -> nr_telefon << '\n';
    return os;
}

Abonat Abonat::operator=(Abonat& ab) {
    ab.setId( ab.getId() );
    ab.setNume( ab.getNume() );
    this -> nr_telefon = ab.nr_telefon;
    return *this;
}

