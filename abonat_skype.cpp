#include "abonat_skype.h"
#include <bits/stdc++.h>

int Abonat_Skype::nr_clienti = 0;

Abonat_Skype::Abonat_Skype() {
    id_skype = "-1";
    nr_clienti++;
}

Abonat_Skype::Abonat_Skype(std::string skype_id, std::string nmtel, int id_, std::string name):
Abonat(name, id_, nmtel) {
    id_skype = skype_id;
    nr_clienti++;
}

Abonat_Skype::Abonat_Skype(const Abonat_Skype &ab) {
    setId(ab.getId());
    setNume(ab.getNume());
    setPhoneNumber(ab.getPhoneNumber());
    id_skype = ab.id_skype;
}

const std::string &Abonat_Skype::getIdSkype() const {
    return id_skype;
}

int Abonat_Skype::getNrClienti() {
    return nr_clienti;
}

void Abonat_Skype::setIdSkype(const std::string &idSkype) {
    id_skype = idSkype;
}

void Abonat_Skype::setNrClienti(int nrClienti) {
    nr_clienti = nrClienti;
}

std::ostream& operator<<(std::ostream& os, Abonat_Skype* ABS_) {
    Abonat *rip = ABS_;
    os << rip;
    os << "ID Skype: " << ABS_ -> id_skype << '\n';
    return os;
}

Abonat_Skype Abonat_Skype::operator=(Abonat_Skype &ABS) {
    setId(ABS.getId());
    setNume(ABS.getNume());
    setPhoneNumber(ABS.getPhoneNumber());
    this -> id_skype = ABS.id_skype;
    return *this;
}

const char* MyException::what() {
    return "Email invalid!";
}