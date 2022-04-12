#ifndef MAIN_CPP_ABONAT_H
#define MAIN_CPP_ABONAT_H

#include <bits/stdc++.h>
#include "persoana.h"

class Abonat:public Persoana {
private:
    std::string nr_telefon;
public:
    Abonat();

    Abonat(const std::string &nume_, int id_, std::string nrTelefon);

    Abonat(const Abonat& ab);

    std::string getPhoneNumber() const;
    void setPhoneNumber(std::string nr_telefon_);

    friend std::istream& operator>>(std::istream& os, Abonat& abon);
    friend std::ostream& operator<<(std::ostream& os, std::shared_ptr<Abonat> abon);
    Abonat operator=(Abonat& ab);

    virtual ~Abonat() = default;


};
#endif //MAIN_CPP_ABONAT_H
