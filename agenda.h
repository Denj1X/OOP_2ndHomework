#ifndef MAIN_CPP_AGENDA_H
#define MAIN_CPP_AGENDA_H

#include <bits/stdc++.h>
#include "abonat_skype.h"

class Agenda {
private:
    std::vector<std::shared_ptr<Abonat>> abonati;
public:
    Agenda();

    void AdAbonat(const std::shared_ptr<Abonat>& ABS);

    Abonat operator[](const std::string& name_);

    friend std::ostream &operator<<(std::ostream &os, Agenda &ag);
};
#endif //MAIN_CPP_AGENDA_H
