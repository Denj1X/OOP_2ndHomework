#include "persoana.h"

#include <bits/stdc++.h>

#include <utility>
Persoana::Persoana() {
    nume = "null";
    id = -1;
}

Persoana::Persoana(std::string nume_, int id_) {
    nume = std::move(nume_);
    id = id_;
}

Persoana::Persoana(const Persoana& pers) {
    setNume(pers.getNume());
    setId(pers.getId());
}

int Persoana::getId() const {
    return id;
}

void Persoana::setId(int id_) {
    id = id_;
}

void Persoana::setNume(const std::string &nume_) {
    nume = nume_;
}

const std::string &Persoana::getNume() const {
    return nume;
}

std::ostream &operator<<(std::ostream &os,const std::shared_ptr<Persoana>& prs) {
    os << "Nume: " << prs -> nume;
    os << ", ID-ul: " << prs -> id;
    return os;
}

