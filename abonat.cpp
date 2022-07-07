#include "abonat.h"
#include "abonat_skype.h"
#include <bits/stdc++.h>

#include <utility>

Abonat::Abonat() {
    nr_telefon = "000000000";
}

Abonat::Abonat(const std::string &nume_, int id_, std::string nrTelefon) : Persoana(nume_, id_),
nr_telefon(std::move(nrTelefon)) {}


std::string Abonat::getPhoneNumber() const {
    return nr_telefon;
}

Abonat::Abonat(const Abonat& ab):Persoana(ab.nume, ab.id) {
    //setId(ab.getId());
    //setNume(ab.getNume());
    setPhoneNumber(ab.getPhoneNumber());
}
void Abonat::setPhoneNumber(std::string nr_telefon_) {
    nr_telefon = std::move(nr_telefon_);
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

void Abonat::printAbonat() {}

std::ostream& operator<<(std::ostream &os,const std::shared_ptr<Abonat>& abon) {
    os << '\n';
    std::shared_ptr<Persoana> prs = abon;
    os << "Nume: " << prs -> getNume();
    os << " ID: " << prs -> getId();
    os << " Telefon: " << abon -> nr_telefon << '\n';

    std::shared_ptr<Abonat_Skype_Romania> pd = std::dynamic_pointer_cast<Abonat_Skype_Romania> (abon);
    std::shared_ptr<Abonat_Skype_Extern> pe = std::dynamic_pointer_cast<Abonat_Skype_Extern> (abon);
    if( pd != nullptr )
        pd->printAbonat();
    else
        pe->printAbonat();
    return os;
}

Abonat Abonat::operator=(Abonat& ab) {
    setId( ab.getId() );
    setNume( ab.getNume() );
    nr_telefon = ab.nr_telefon;
    return *this;
}
