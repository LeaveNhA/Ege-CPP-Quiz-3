#include <iostream>

#include "Vatandas.h"

int main() {
    {
        using namespace std;

        Vatandas a("Ali Gel", "Ankara", 2002);
        Vatandas b("Veli Git", "Bolu", 2012), c;
        // b’nin bilgilerini yazdır
        cout << b << endl;

        // a ve b’den daha yaşlı olanı c’ye aktar.
        c = a > b;

        cout << "Daha yaşlı olan" << endl;
        // c’nin bilgilerini yazdır
        cout << c << endl;

        // https://www.simlict.com üzerinden üretilen bir TC Kimlik Numarası ile
        // Denetlenmiştir.
        // a’ya kendi TCNO bilginizi 10. Rakamı değiştirerek aktar
        a.setTCNO("99946552798");

        if (a.kontrolTCNO()) // a’ya atanan TCNO geçerli mi?
            cout << "Atanan TCNO gecerli" << endl;
        else
            cout << "Atanan TCNO gecersiz" << endl;

        cout << "Atanan TCNO bilgisinin onuncu rakami:" << endl;
        //a’nın hesaplanan TCNO’sunun onuncu rakamını yaz
        cout << a.getOnuncuRakam() << endl;
        cout << "Olmalidir" << endl;
    }

    return 0;
}
