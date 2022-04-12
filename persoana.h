#ifndef MAIN_CPP_PERSOANA_H
#define MAIN_CPP_PERSOANA_H

#include <bits/stdc++.h>
#include <ostream>

class Persoana {
protected:
    std::string nume;
    int id;
public:
    Persoana();

    Persoana(std::string nume_, int id_);
    virtual ~Persoana() = default;

    void setId(int id_);
    int getId() const;

    void setNume(const std::string &nume_);

    const std::string &getNume() const;

    friend std::ostream &operator<<(std::ostream &os, std::shared_ptr<Persoana> prs);

};
#endif