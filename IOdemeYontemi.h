#pragma once
#include <string>

class IOdemeYontemi {
    public:
    virtual void odemeYap(double miktar) = 0;
    virtual std::string yontemAdi() = 0;
    virtual ~IOdemeYontemi() {}
};