#ifndef MAIN_CPP_ABONAT_SKYPE_H
#define MAIN_CPP_ABONAT_SKYPE_H

#include<bits/stdc++.h>
#include <ostream>
#include "abonat.h"

class Abonat_Skype: public Abonat {
protected:
    std::string id_skype;
    static int nr_clienti;
public:
    Abonat_Skype();
    Abonat_Skype(std::string skype_id, std::string nmtel, int id_, const std:: string& name);
    Abonat_Skype(const Abonat_Skype &ab);

    static int getNrClienti();
    const std::string &getIdSkype() const;

    void setIdSkype(const std::string &idSkype);
    static void setNrClienti(int nrClienti);

    friend std::ostream& operator<<(std::ostream& os, Abonat_Skype* ABS_);

    Abonat_Skype operator=(Abonat_Skype &ABS);
    ~Abonat_Skype() = default;
};

class MyException : public std::exception {
public:
    MyException() = default;

    const char* what() const noexcept override;
};

class Abonat_Skype_Romania:public Abonat_Skype {
protected:
    std::string adresa_mail;
public:
    Abonat_Skype_Romania();
    Abonat_Skype_Romania(std::string adr_mail, std::string skype_id, std::string nmtel, int id_, const std:: string& name);

    Abonat_Skype_Romania(const Abonat_Skype_Romania &ded);

    const std::string &getAdresaMail() const;

    void setAdresaMail(const std::string &adresaMail);

    void printAbonat() override;

    friend std::ostream& operator<<(std::ostream& os, Abonat_Skype_Romania& nolife);
    friend std::istream& operator>>(std::istream& os, Abonat_Skype_Romania& suici);

    Abonat_Skype_Romania operator=(Abonat_Skype_Romania& cpy);
};

class Abonat_Skype_Extern:public Abonat_Skype {
private:
    std::string country;
public:
    Abonat_Skype_Extern();
    Abonat_Skype_Extern(std::string country_, std::string sk_id,
                        std::string tel, int idx, const std::string& name);
    Abonat_Skype_Extern(const Abonat_Skype_Extern& ab);

    const std::string &getCountry() const;

    void setCountry(const std::string &country_);

    friend std::ostream &operator<<(std::ostream &os, const Abonat_Skype_Extern &anExtern);
    friend std::istream &operator>>(std::ostream &os, Abonat_Skype_Extern& abS_);

    Abonat_Skype_Extern operator=(Abonat_Skype_Extern& ab);
};
#endif //MAIN_CPP_ABONAT_SKYPE_H
