#include <iostream>
#include <vector>

#include "KrediKartiOdeme.h"
#include "PayPalOdeme.h"
#include "KriptoOdeme.h"

void odemeYap(IOdemeYontemi* yontem, double miktar) {
    std::cout << "\n[" << yontem->yontemAdi() << "] üzerinden ödeme deneniyor...\n";
    yontem->odemeYap(miktar);
}

int main() {
    std::vector<OdemeIslemi*> odemeler;
    odemeler.push_back(new KrediKartiOdeme(1000));
    odemeler.push_back(new PayPalOdeme(500));
    odemeler.push_back(new KriptoOdeme(3000));
    for (auto odeme : odemeler) {
    odeme->bakiyeGoster();
    odemeYap(odeme, 450);
    }
    // Bellek temizliği
    for (auto odeme : odemeler) {
    delete odeme;
    }
    return 0;
    }