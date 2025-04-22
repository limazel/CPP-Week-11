#pragma once
#include "OdemeIslemi.h"

class KriptoOdeme : public OdemeIslemi {
    public:
        KriptoOdeme(double bakiye) : OdemeIslemi(bakiye) {}

        void odemeYap(double miktar) override {
            if(miktar <= bakiye) {
                bakiye -= miktar;
                std::cout << "Kripto para ile " << miktar << "TL ödeme yapıldı .\n";
            } else {
                std::cout << "Kripto para bakiyesi yetersiz." << std::endl;
            }
        }

        std::string yontemAdi() override {
            return "Kripto Para";
        }
};