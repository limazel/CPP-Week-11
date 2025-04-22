#pragma once
#include "OdemeIslemi.h"

class PayPalOdeme : public OdemeIslemi {
    public:
        PayPalOdeme(double bakiye) : OdemeIslemi(bakiye) {}

        void odemeYap(double miktar) override {
            if(miktar <= bakiye) {
                bakiye -= miktar;
                std::cout << "Paypal ile " << miktar << "TL ödeme yapıldı.\n";
            } else {
                std::cout << "PayPal bakiyesi yetersiz." << std::endl;
            }
        }

        std::string yontemAdi() override {
            return "PayPal";
        }
};