//
// Created by Seçkin KÜKRER on 6.02.2021.
//

#include "Vatandas.h"

std::ostream &operator<<(std::ostream &os, Vatandas const &vatandas_) {
    os << "Ad Soyad: " << vatandas_.isim << std::endl
       << "Dogum Yeri: " << vatandas_.dogumYeri << std::endl
       << "Dogum Yili: " << vatandas_.dogumYili << std::endl;

    return os;
}

Vatandas &Vatandas::operator>(Vatandas &v_) {
    return this->getDogumYili() < v_.getDogumYili() ?
           *this : v_;
}

int Vatandas::getDogumYili() {
    return this->dogumYili;
}

void Vatandas::setTCNO(std::string tcno_) {
    this->tcno = tcno_;
}

bool Vatandas::kontrolTCNO() {
    int beklenen = this->getOnuncuRakam();
    int verilen = atoi(this->tcno.substr(9, 1).c_str());

    return beklenen == verilen;
}

int Vatandas::getOnuncuRakam() {
    int toplam = 0;
    std::string hesaplananRakamlar = "";

    for (int i = 0; i < 9; i++) {
        std::string s_ = this->tcno.substr(i, 1);
        hesaplananRakamlar += s_;

        const char* c_ = s_.c_str();
        int n_ = atoi(c_);

        if ((i + 1) % 2 == 0) {
            toplam += 9 * n_;
        } else {
            toplam += 7 * n_;
        }
    }

    int birlerBasamagi = toplam % 10;

    return birlerBasamagi;
}
