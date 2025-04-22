#pragma once 
#include "OdemeIslemi.h"

class KrediKartiOdeme : public OdemeIslemi {
    public:
        KrediKartiOdeme(double bakiye) : OdemeIslemi(bakiye) {}

        void odemeYap(double miktar) override {
            if(miktar <= bakiye) {
                bakiye -= miktar;
                std::cout << "Kredi kartıyla" << miktar << "TL ödeme yapuldı.\n"; 
            } else {
                std::cout << "Yetersiz bakiye." << std::endl;
            }
        }

        std::string yontemAdi() override {
            return "Kredi Kartı";
        }
};