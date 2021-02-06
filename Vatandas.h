//
// Created by Seçkin KÜKRER on 6.02.2021.
//

#ifndef QUIZ3_VATANDAS_H
#define QUIZ3_VATANDAS_H

#include <string>
#include <ostream>

class Vatandas {
protected:
    std::string isim, dogumYeri, tcno;
    int dogumYili;

public:
    Vatandas(std::string isim_, std::string dogumYeri_, int dogumYili_) :
            isim(isim_), dogumYeri(dogumYeri_), dogumYili(dogumYili_), tcno("") {}

    Vatandas() :
            isim(""), dogumYeri(""), dogumYili(0), tcno("") {}

    int getDogumYili();

    friend std::ostream &operator<<(std::ostream &, Vatandas const &);

    Vatandas &operator>(Vatandas&);

    void setTCNO(std::string);

    int getOnuncuRakam();

    bool kontrolTCNO();
};


#endif //QUIZ3_VATANDAS_H
