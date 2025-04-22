#pragma once
#include "IOdemeYontemi.h"
#include <iostream>

class OdemeIslemi : public IOdemeYontemi {
    protected:
        double bakiye;
    public:
        OdemeIslemi(double bakiye) : bakiye(bakiye) {}
        void bakiyeGoster() {
        std::cout << "Mevcut bakiye: " << bakiye << " TL" << std::endl;
        }
        virtual void odemeYap(double miktar) override = 0; 
        virtual std::string yontemAdi() override = 0;
        virtual ~OdemeIslemi() {}
};