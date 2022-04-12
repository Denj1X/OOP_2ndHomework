#ifndef MAIN_CPP_ABONAT_SKYPE_H
#define MAIN_CPP_ABONAT_SKYPE_H

#include<bits/stdc++.h>
#include "abonat.h"

class Abonat_Skype: public Abonat {
private:
    std::string id_skype;
    static int nr_clienti;
public:
    Abonat_Skype();
    Abonat_Skype(std::string skype_id, std::string nmtel, int id_, std:: string name);
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

    const char* what();
};
#endif //MAIN_CPP_ABONAT_SKYPE_H
