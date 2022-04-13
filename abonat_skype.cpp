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
    return this -> id_skype;
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

const char* MyException::what() const noexcept {
    return "Email invalid!";
}

Abonat_Skype_Romania::Abonat_Skype_Romania() {
    adresa_mail = "no mail";
}

Abonat_Skype_Romania::Abonat_Skype_Romania(std::string adr_mail, std::string skype_id, std::string nmtel, int id_,
                                           std::string name):
                                           Abonat_Skype(skype_id, nmtel, id_, name)
                                           {    adresa_mail = adr_mail; }

Abonat_Skype_Romania::Abonat_Skype_Romania(const Abonat_Skype_Romania &ded) {
    setId(ded.getId());
    setNume(ded.getNume());
    setPhoneNumber(ded.getPhoneNumber());
    setIdSkype(ded.getIdSkype());
    setAdresaMail(ded.getAdresaMail());
}


const std::string &Abonat_Skype_Romania::getAdresaMail() const {
    return this -> adresa_mail;
}

void Abonat_Skype_Romania::setAdresaMail(const std::string &adresaMail) {
    adresa_mail = adresaMail;
}

void Abonat_Skype_Romania::printAbonat() {
    std::cout << " Id Skype: " << getIdSkype();
    std::cout << " | Email: " << getAdresaMail() << '\n';
}

std::ostream& operator<<(std::ostream& os, Abonat_Skype_Romania& abS_) {
    Abonat_Skype* ptr = &abS_;
    os << ptr;
    os << " Email: " << abS_.adresa_mail << '\n';
    return os;
}

std::istream& operator>>(std::istream& os, Abonat_Skype_Romania& abS_) {
    std::string name, tel, id_sk, mail;
    int idx;
    std::cout << " Nume: "; os >> name;
    std::cout << " Id:   "; os >> idx;
    std::cout << " Telefon:   "; os >> tel;
    std::cout << " Id Skype: "; os >> id_sk;
    std::cout << " Email:   "; os >> mail;

    bool ok = 0;
    for( int i = 0; i < (int)mail.length(); i++ )
        if( mail[i] == '@' ) {
            ok = 1;
            break;
        }
    if(!ok)
        throw MyException();
    abS_.setAdresaMail(mail);
    abS_.setIdSkype(id_sk);
    abS_.setPhoneNumber(tel);
    abS_.setNume(name);
    abS_.setId(idx);
    return os;
}

Abonat_Skype_Romania Abonat_Skype_Romania::operator=(Abonat_Skype_Romania& ab) {
    setId( ab.getId() );
    setNume( ab.getNume() );
    setPhoneNumber( ab.getPhoneNumber() );
    setIdSkype( ab.getIdSkype() );
    setAdresaMail( ab.getAdresaMail() );
    return ab;
}

Abonat_Skype_Extern::Abonat_Skype_Extern() {
    country = "no country";
}

Abonat_Skype_Extern::Abonat_Skype_Extern(std::string country_, std::string sk_id, std::string tel, int idx,
                                         std::string name):
                                         Abonat_Skype(sk_id, tel, idx, name) {
    country = country_;
}

const std::string &Abonat_Skype_Extern::getCountry() const {
    return country;
}

Abonat_Skype_Extern::Abonat_Skype_Extern(const Abonat_Skype_Extern& ab) {
    setIdSkype(ab.getIdSkype());
    setCountry(ab.getCountry());
    setId(ab.getId());
    setPhoneNumber(ab.getPhoneNumber());
    setNume(ab.getNume());
}

void Abonat_Skype_Extern::setCountry(const std::string &country_) {
    Abonat_Skype_Extern::country = country_;
}

std::ostream &operator<<(std::ostream &os, const Abonat_Skype_Extern &anExtern) {
    os << (Abonat_Skype_Romania &) static_cast<const Abonat_Skype &>(anExtern);
    return os;
}

std::istream &operator>>(std::istream &os, Abonat_Skype_Extern &ab) {
    std::string name, tel, ctr, id_sk;
    int idx;
    std::cout << "Nume: "; os >> name;
    std::cout << " Id: "; os >> idx;
    std::cout << " Telefon: "; os >> tel;
    std::cout << " Id Skype: "; os >> id_sk;
    std::cout << " Tara: "; os >> ctr;

    ab.setCountry(ctr);
    ab.setIdSkype(id_sk);
    ab.setPhoneNumber(tel);
    ab.setId(idx);
    ab.setNume(name);

    return os;
}

Abonat_Skype_Extern Abonat_Skype_Extern::operator=(Abonat_Skype_Extern& ab) {
    setId(ab.getId());
    setCountry(ab.getCountry());
    setIdSkype(ab.getIdSkype());
    setPhoneNumber(ab.getPhoneNumber());
    setNume(ab.getNume());
    return ab;
}